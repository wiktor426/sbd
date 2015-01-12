#include "mainwindowprojectmember.h"
#include "ui_mainwindowprojectmember.h"

MainWindowProjectMember::MainWindowProjectMember(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowProjectMember)
{
    ui->setupUi(this);

//    ui->verticalLayoutWidget_2->setVisible(false);
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setCurrentIndex(0);

}

MainWindowProjectMember::~MainWindowProjectMember()
{
    delete ui;
}

void MainWindowProjectMember::on_pushButton_2_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindowProjectMember::on_pushButtonProjectInfo_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindowProjectMember::on_pushButtonSearchSupply_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}
