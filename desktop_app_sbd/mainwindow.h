#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainwindows/mainwindowprojectmember.h"
#include "widgets/loginwidget.h"
 #include <QSqlQuery>
#include <assert.h>
#include <QVariant>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    MainWindowProjectMember* project_member_ui;
    LoginWidget* login_widget;
    QSqlDatabase database;

private:
    Ui::MainWindow *ui;
    bool is_login_ok;
public slots:
    bool login(QString id, QString password);
};

#endif // MAINWINDOW_H
