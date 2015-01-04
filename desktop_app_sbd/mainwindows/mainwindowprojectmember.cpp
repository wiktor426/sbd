#include "mainwindowprojectmember.h"
#include "ui_mainwindowprojectmember.h"

MainWindowProjectMember::MainWindowProjectMember(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowProjectMember)
{
    ui->setupUi(this);

//    ui->verticalLayoutWidget_2->setVisible(false);
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setCurrentIndex(2);

}

MainWindowProjectMember::~MainWindowProjectMember()
{
    delete ui;
}
