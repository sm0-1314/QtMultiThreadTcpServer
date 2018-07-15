/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_10;
    QLabel *status;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLabel *tx_num;
    QLabel *label_8;
    QLabel *rx_num;
    QPushButton *reset_count;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *comboBox_host;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_port;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_open;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QComboBox *comboBox_type;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *hexCheckBox;
    QCheckBox *addrCheckBox;
    QCheckBox *circleCheckBox;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearBtn;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QCheckBox *hexCheckBox_tx;
    QHBoxLayout *horizontalLayout;
    QCheckBox *loopCheckBox;
    QLineEdit *periodLineEdit;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QComboBox *objectBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLabel *num;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QTextBrowser *msg;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *sendMsg;
    QPushButton *sendBtn;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(917, 600);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 560, 901, 32));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        status = new QLabel(layoutWidget);
        status->setObjectName(QStringLiteral("status"));

        horizontalLayout_10->addWidget(status);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(label_3);

        tx_num = new QLabel(layoutWidget);
        tx_num->setObjectName(QStringLiteral("tx_num"));

        horizontalLayout_8->addWidget(tx_num);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFrameShape(QFrame::Box);
        label_8->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(label_8);

        rx_num = new QLabel(layoutWidget);
        rx_num->setObjectName(QStringLiteral("rx_num"));

        horizontalLayout_8->addWidget(rx_num);


        horizontalLayout_9->addLayout(horizontalLayout_8);

        reset_count = new QPushButton(layoutWidget);
        reset_count->setObjectName(QStringLiteral("reset_count"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(reset_count->sizePolicy().hasHeightForWidth());
        reset_count->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("04b_21"));
        font.setPointSize(7);
        reset_count->setFont(font);

        horizontalLayout_9->addWidget(reset_count);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        horizontalLayout_10->setStretch(0, 1);
        widget = new QWidget(Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 911, 541));
        horizontalLayout_12 = new QHBoxLayout(widget);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        comboBox_host = new QComboBox(groupBox);
        comboBox_host->setObjectName(QStringLiteral("comboBox_host"));

        horizontalLayout_4->addWidget(comboBox_host);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        lineEdit_port = new QLineEdit(groupBox);
        lineEdit_port->setObjectName(QStringLiteral("lineEdit_port"));

        horizontalLayout_5->addWidget(lineEdit_port);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(64, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        pushButton_open = new QPushButton(groupBox);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));

        gridLayout->addWidget(pushButton_open, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        comboBox_type = new QComboBox(groupBox);
        comboBox_type->setObjectName(QStringLiteral("comboBox_type"));

        horizontalLayout_2->addWidget(comboBox_type);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        hexCheckBox = new QCheckBox(groupBox_2);
        hexCheckBox->setObjectName(QStringLiteral("hexCheckBox"));

        verticalLayout_2->addWidget(hexCheckBox);

        addrCheckBox = new QCheckBox(groupBox_2);
        addrCheckBox->setObjectName(QStringLiteral("addrCheckBox"));

        verticalLayout_2->addWidget(addrCheckBox);

        circleCheckBox = new QCheckBox(groupBox_2);
        circleCheckBox->setObjectName(QStringLiteral("circleCheckBox"));

        verticalLayout_2->addWidget(circleCheckBox);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        clearBtn = new QPushButton(groupBox_2);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));

        horizontalLayout_11->addWidget(clearBtn);


        verticalLayout_2->addLayout(horizontalLayout_11);


        verticalLayout_3->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        hexCheckBox_tx = new QCheckBox(groupBox_3);
        hexCheckBox_tx->setObjectName(QStringLiteral("hexCheckBox_tx"));

        verticalLayout->addWidget(hexCheckBox_tx);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        loopCheckBox = new QCheckBox(groupBox_3);
        loopCheckBox->setObjectName(QStringLiteral("loopCheckBox"));

        horizontalLayout->addWidget(loopCheckBox);

        periodLineEdit = new QLineEdit(groupBox_3);
        periodLineEdit->setObjectName(QStringLiteral("periodLineEdit"));

        horizontalLayout->addWidget(periodLineEdit);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        objectBox = new QComboBox(groupBox_3);
        objectBox->setObjectName(QStringLiteral("objectBox"));

        horizontalLayout_6->addWidget(objectBox);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_7->addWidget(label);

        num = new QLabel(groupBox_3);
        num->setObjectName(QStringLiteral("num"));

        horizontalLayout_7->addWidget(num);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_3->addWidget(groupBox_3);


        horizontalLayout_12->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        msg = new QTextBrowser(groupBox_4);
        msg->setObjectName(QStringLiteral("msg"));

        gridLayout_2->addWidget(msg, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        sendMsg = new QTextEdit(widget);
        sendMsg->setObjectName(QStringLiteral("sendMsg"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sendMsg->sizePolicy().hasHeightForWidth());
        sendMsg->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(sendMsg);

        sendBtn = new QPushButton(widget);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sizePolicy.setHeightForWidth(sendBtn->sizePolicy().hasHeightForWidth());
        sendBtn->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(sendBtn);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalLayout_4->setStretch(0, 7);
        verticalLayout_4->setStretch(1, 1);

        horizontalLayout_12->addLayout(verticalLayout_4);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 3);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "TCP\346\234\215\345\212\241\345\231\250", 0));
        status->setText(QApplication::translate("Dialog", "status", 0));
        label_3->setText(QApplication::translate("Dialog", "TX:", 0));
        tx_num->setText(QApplication::translate("Dialog", "0", 0));
        label_8->setText(QApplication::translate("Dialog", "RX:", 0));
        rx_num->setText(QApplication::translate("Dialog", "0", 0));
        reset_count->setText(QApplication::translate("Dialog", "\345\244\215\344\275\215\350\256\241\346\225\260", 0));
        groupBox->setTitle(QApplication::translate("Dialog", "\347\275\221\347\273\234\350\256\276\347\275\256", 0));
        label_5->setText(QApplication::translate("Dialog", "\346\234\254\346\234\272\345\234\260\345\235\200:", 0));
        label_7->setText(QApplication::translate("Dialog", " \347\253\257\345\217\243\345\217\267: ", 0));
        pushButton_open->setText(QApplication::translate("Dialog", "\346\211\223\345\274\200", 0));
        label_6->setText(QApplication::translate("Dialog", "\345\215\217\350\256\256\347\261\273\345\236\213:", 0));
        comboBox_type->clear();
        comboBox_type->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "TCP Server", 0)
         << QApplication::translate("Dialog", "TCP Client", 0)
         << QApplication::translate("Dialog", "UDP", 0)
        );
        groupBox_2->setTitle(QApplication::translate("Dialog", "\346\216\245\346\224\266\350\256\276\347\275\256", 0));
        hexCheckBox->setText(QApplication::translate("Dialog", "HEX\346\216\245\346\224\266 ", 0));
        addrCheckBox->setText(QApplication::translate("Dialog", "\344\270\215\346\230\276\347\244\272\345\256\242\346\210\267\347\253\257\345\234\260\345\235\200   ", 0));
        circleCheckBox->setText(QApplication::translate("Dialog", "\346\224\266\345\217\221\345\276\252\347\216\257", 0));
        clearBtn->setText(QApplication::translate("Dialog", "\346\270\205\347\251\272\346\216\245\346\224\266", 0));
        groupBox_3->setTitle(QApplication::translate("Dialog", "\345\217\221\351\200\201\350\256\276\347\275\256", 0));
        hexCheckBox_tx->setText(QApplication::translate("Dialog", "HEX\345\217\221\351\200\201 ", 0));
        loopCheckBox->setText(QApplication::translate("Dialog", "\346\227\266\351\227\264\351\227\264\351\232\224\357\274\232", 0));
        label_4->setText(QApplication::translate("Dialog", "ms", 0));
        label_2->setText(QApplication::translate("Dialog", "\345\217\221\351\200\201\345\257\271\350\261\241:", 0));
        objectBox->clear();
        objectBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "All Connections", 0)
        );
        label->setText(QApplication::translate("Dialog", "\345\275\223\345\211\215\350\277\236\346\216\245\346\225\260\357\274\232", 0));
        num->setText(QString());
        groupBox_4->setTitle(QApplication::translate("Dialog", "\346\225\260\346\215\256\346\216\245\346\224\266", 0));
        sendBtn->setText(QApplication::translate("Dialog", "\345\217\221\351\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
