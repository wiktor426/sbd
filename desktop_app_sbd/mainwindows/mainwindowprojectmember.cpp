#include "mainwindowprojectmember.h"
#include "ui_mainwindowprojectmember.h"

MainWindowProjectMember::MainWindowProjectMember(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowProjectMember)
{
    ui->setupUi(this);
    user_id="NULL";
    user_name="NULL";
    user_surname="NULL";
    project_name="NULL";


//    ui->verticalLayoutWidget_2->setVisible(false);
    //ui->tabWidget->tabBar()->hide();
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
void MainWindowProjectMember::refreshLabels()
{
    this->ui->labelUserName->setText(user_name + " " +user_surname);
    this->ui->labelProjectName->setText(project_name);
    this->ui->labelProjectName_2->setText(project_name);
}
