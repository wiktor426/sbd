#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainwindows/mainwindowprojectmember.h"

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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
