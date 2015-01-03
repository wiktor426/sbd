#-------------------------------------------------
#
# Project created by QtCreator 2015-01-03T23:33:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = desktop_app_sbd
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    widgets/loginwidget.cpp \
    widgets/changepassword.cpp

HEADERS  += mainwindow.h \
    widgets/loginwidget.h \
    widgets/changepassword.h

FORMS    += mainwindow.ui \
    widgets/loginwidget.ui \
    widgets/changepassword.ui
