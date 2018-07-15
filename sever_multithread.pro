#-------------------------------------------------
#
# Project created by QtCreator 2016-03-07T20:38:29
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sever_multithread
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    serverthread.cpp \
    server.cpp \
    mysocket.cpp\
frmmessagebox.cpp \
iconhelper.cpp

HEADERS  += dialog.h \
    serverthread.h \
    server.h \
    mysocket.h \
    myhelper.h \
    frmmessagebox.h \
iconhelper.h

FORMS    += dialog.ui \
    frmmessagebox.ui

RESOURCES += \
    resources.qrc
