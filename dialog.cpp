#include <QMessageBox>

#include "dialog.h"
#include "ui_dialog.h"
#include "myhelper.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog), count(0), timer(new QTimer)
{
    ui->setupUi(this);

    ui->num->setText(QString("%1").arg(count));

    //获取本机IP
    foreach(const QHostAddress& hostAddress,QNetworkInterface::allAddresses())
        if (hostAddress.toIPv4Address() )
            ui->comboBox_host->addItem(hostAddress.toString());
    ui->comboBox_host->addItem("0.0.0.0");

    statusBar = new QStatusBar(this);

    setStyle("1");
    connect(timer, SIGNAL(timeout()), this, SLOT(sendLoopMessage()));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::showConnection()
{
    count++;

    /* add socket object that join in */
    ui->objectBox->addItem(QString("%1").arg(server->socketList.last()));

    /* change connect number while connection is connecting */
    ui->num->setText(QString("%1").arg(count));
}
void Dialog::setStyle(QString style)
{
    QString qssFile = ":/qss/Resources/qss.qss";


    QFile file(qssFile);

    if (file.open(QFile::ReadOnly)) {
        QString qss = QLatin1String(file.readAll());
        //        QString paletteColor = qss.mid(20, 7);
        //        qApp->setPalette(QPalette(QColor(paletteColor)));
        qApp->setStyleSheet(qss);
        file.close();
    }
}
void Dialog::showDisconnection(int socketDescriptor)
{
    count--;

    /* remove disconnect socketdescriptor from list */
    server->socketList.removeAll(socketDescriptor);

    /* reload combobox */
    ui->objectBox->clear();

    for (int i = 0; i < server->socketList.size(); i++) {
        ui->objectBox->addItem(QString("%1").arg(server->socketList.at(i)));
    }

    //change connect number while connection is disconnecting
    ui->num->setText(QString("%1").arg(count));
}



int charToHex(char c)
{
    if ((c >= '0') && (c <= '9')) {
        return c - 0x30;
    } else if ((c >= 'A') && (c <= 'F')) {
        return c - 'A' + 10;
    } else if ((c >= 'a') && (c <= 'f')) {
        return c - 'a' + 10;
    }

    return (-1);
}

void Dialog::sendMsg()
{
    /* if send message is null return */
    if (ui->sendMsg->toPlainText()== "") {
        QMessageBox::information(NULL,
                                 tr("注意"),
                                 tr("发送内容不能为空！"),
                                 QMessageBox::Yes);

        return ;
    }

    if (ui->loopCheckBox->isChecked()) {
        int time_period = ui->periodLineEdit->text().toInt();

        timer->setInterval(time_period);

        timer->start();

        ui->sendBtn->setText("停止");

        return;
    }

    /* whether send hex data */
    if (ui->hexCheckBox_tx->isChecked()) {
        QString temp = ui->sendMsg->toPlainText();
        int temp_value;
        QByteArray data;

        QStringList list = temp.split(" ");
        foreach (QString str, list) {
            if (str.left(2) == "0x") {
                str = str.right(2);
            }
            temp_value = (charToHex(str.at(0).toLatin1()) << 4) + charToHex(str.at(1).toLatin1());
            data.append(temp_value);
        }
    } else {
        /* send original data */
        emit sendData(ui->sendMsg->toPlainText().toLocal8Bit(), ui->objectBox->currentText().toInt());
    }

    ui->sendMsg->setText("");
}

void stringToHtmlFilter(QString &str)
{
    str.replace("&","&amp;");
    str.replace(">","&gt;");
    str.replace("<","&lt;");
    str.replace("\"","&quot;");
    str.replace("\'","&#39;");
    str.replace(" ","&nbsp;");
    str.replace("\n","<br>");
    str.replace("\r","<br>");
}

void stringToHtml(QString &str, QColor color)
{
    QByteArray data;

    if (str.isEmpty()) {
        return;
    }

    data.append(color.red());
    data.append(color.green());
    data.append(color.blue());
    QString strColor(data.toHex());

    str = QString("<span style=\" color:#%1;\">%2</span>").arg(strColor).arg(str);
}

void Dialog::revData(QString peerAddr, QByteArray data)
{
    int i = 0;
    QString msg;

    if (ui->hexCheckBox->isChecked()) {
        QString dataString;

        foreach (QChar c, data.toHex()) {
            if (i % 2) {
                dataString += QString("%1 ").arg(c);
            } else {
                dataString += QString("0x%1").arg(c);
            }

            i++;
        }

        if (ui->addrCheckBox->isChecked()) {
            ui->msg->append(dataString);
            return ;
        }
        msg = dataString;
    } else {
        if (ui->addrCheckBox->isChecked()) {
            ui->msg->append(QString::fromLocal8Bit(data));
            return ;
        }

        msg = QString::fromLocal8Bit(data);
    }

    if (ui->circleCheckBox->isChecked()) {
        emit sendData(data, ui->objectBox->currentText().toInt());
    }

    peerAddr.insert(peerAddr.size(), ": ");
    stringToHtmlFilter(peerAddr);
    stringToHtml(peerAddr, QColor(255, 0, 0));

    msg.prepend(peerAddr);
    ui->msg->append(msg);
}

void Dialog::clearMsg()
{
    ui->msg->clear();
}

void Dialog::sendLoopMessage()
{
    emit sendData(ui->sendMsg->toPlainText().toLocal8Bit(), ui->objectBox->currentText().toInt());
}

void Dialog::stopLoopSend()
{
    timer->stop();

    ui->sendBtn->setText("发送");
}
//打开
void Dialog::on_pushButton_open_clicked()
{
    if(ui->comboBox_type->currentIndex()==0){//TCP Server
        this->open_tcpServer();
    }else if(ui->comboBox_type->currentIndex()==1){//TCP Client

    }else if(ui->comboBox_type->currentIndex()==2){//UDP

    }

}
void Dialog::open_tcpServer(){
    if(ui->pushButton_open->text().trimmed()=="关闭"){
        // TODO 回收资源
        ui->pushButton_open->setText("打开");
        ui->pushButton_open->setStyleSheet("QPushButton{background-image: url(:/pic/Resources/lamp_red.png)}");
        if(server->isListening()){
            server->close();
            qDebug()<<"关闭服务器";
        }
        return;
    }
    QString port = ui->lineEdit_port->text().trimmed();
    if(port.isEmpty() || !(port.toInt()<=65535 && port.toInt()>=0)){
        QMessageBox::information(NULL,
                                 tr("注意"),
                                 tr("端口号不合法！"),
                                 QMessageBox::Yes);
        return ;
    }
    server = new Server(this);

    if(server->listen(QHostAddress(ui->comboBox_host->currentText()), port.toInt())){
        qDebug()<<"启动服务成功,端口号:"<<port;
        ui->pushButton_open->setText("关闭");
        ui->pushButton_open->setStyleSheet("QPushButton{background-image: url(:/pic/Resources/lamp_gray.png)}");

    }else{
        QString info;
        QAbstractSocket::SocketError socketError = server->serverError();
        switch (socketError) {
        case QAbstractSocket::ConnectionRefusedError:
            info = "该连接被拒绝(或超时)";
            break;

        case QAbstractSocket::AddressInUseError:
            info = "指定的地址已经在使用";
            break;
        case QAbstractSocket::UnknownSocketError:
            info = "未知错误";
            break;
        default:
            info = "启动服务器失败,原因"+server->errorString();
            break;
        }
        qDebug()<<info;
        QMessageBox::information(NULL,
                                 tr("注意"),
                                 info,
                                 QMessageBox::Yes);
    }
}

void Dialog::on_reset_count_clicked()
{

    rx_num = 0;
    tx_num = 0;
    setRX_TX_num();
}
void Dialog::setRX_TX_num(){
    ui->tx_num->setText(QString::number(tx_num));
    ui->rx_num->setText(QString::number(rx_num));
}

void Dialog::on_sendBtn_clicked()
{
    if(ui->sendBtn->text()=="发送"){
        sendMsg();
    }else{
        stopLoopSend();
    }

}

void Dialog::on_clearBtn_clicked()
{
    clearMsg();
}

void Dialog::on_hexCheckBox_tx_clicked(bool checked)
{
    QString temp = ui->sendMsg->toPlainText();
    qDebug()<<temp;
    if(temp.isEmpty()){
        return;
    }
    QByteArray ba = temp.toLocal8Bit();
    const char* ch = ba.data();

    if(checked){//Hex发送
        char * hexchar;
        int length = myHelper::Ascii2Hex(ch,hexchar);
        ui->sendMsg->setText( QString(QLatin1String(hexchar)));

    }else{
        char * ascchar=new char;
        int length = myHelper::Hex2Ascii(ch,ascchar);
        ui->sendMsg->setText( QString(QLatin1String(ascchar)));
    }
}
