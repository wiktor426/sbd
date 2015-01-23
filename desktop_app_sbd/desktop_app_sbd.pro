#-------------------------------------------------
#
# Project created by QtCreator 2015-01-03T23:33:47
#
#-------------------------------------------------

QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = desktop_app_sbd
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    widgets/loginwidget.cpp \
    widgets/changepassword.cpp \
    mainwindows/mainwindowprojectmember.cpp \
    widgets/supplyacceptrequest.cpp \
    widgets/supplyrequestcancel.cpp \
    database.cpp

HEADERS  += mainwindow.h \
    widgets/loginwidget.h \
    widgets/changepassword.h \
    mainwindows/mainwindowprojectmember.h \
    widgets/supplyacceptrequest.h \
    widgets/supplyrequestcancel.h \
    database.h

FORMS    += mainwindow.ui \
    widgets/loginwidget.ui \
    widgets/changepassword.ui \
    mainwindows/mainwindowprojectmember.ui \
    widgets/supplyacceptrequest.ui \
    widgets/supplyrequestcancel.ui
