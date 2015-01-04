#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    project_member_ui = new MainWindowProjectMember();
    project_member_ui->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
