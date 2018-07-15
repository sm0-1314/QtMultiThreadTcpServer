#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>

#include "server.h"
#include <QStatusBar>

namespace Ui {
class Dialog;
}

class Server;

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

signals:
    void sendData(QByteArray data, int id);

public slots:
    void revData(QString peerHost, QByteArray data);

private slots:
    void showConnection();
    void showDisconnection(int socketDescriptor);
    void sendMsg();
    void clearMsg();
    void sendLoopMessage();
    void stopLoopSend();
    void setRX_TX_num();
    void setStyle(QString style);

    void open_tcpServer();

    void on_pushButton_open_clicked();

    void on_reset_count_clicked();

    void on_sendBtn_clicked();

    void on_clearBtn_clicked();

    void on_hexCheckBox_tx_clicked(bool checked);

private:
    Ui::Dialog *ui;

    int count;
    int rx_num;
    int tx_num;

    Server *server = NULL;

    QTimer *timer;

    QStatusBar * statusBar;
};

#endif // DIALOG_H
