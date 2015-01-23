#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QErrorMessage>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    is_login_ok=false;
    project_member_ui = new MainWindowProjectMember();
    login_widget = new LoginWidget();
    //project_member_ui->show();
    database = QSqlDatabase::addDatabase("QMYSQL");

    database.setHostName("giraveez.pl");
    database.setDatabaseName("viktork_sbd");
    database.setUserName("viktork_sbdadmin");
    database.setPassword("haslo123");
    database.open();
    database.open();
    if(database.isOpen()){
    login_widget->show();
    }
    connect(login_widget, SIGNAL(login(QString,QString)),this,SLOT(login(QString, QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
bool MainWindow::login(QString id, QString password){

    QSqlQuery query;
    QSqlQuery query2;
    qDebug()<<id+"kkkjh";
    qDebug()<<password;
    if(!query.prepare("SELECT UzytkownikID, Haslo, Imie, Nazwisko FROM Uzytkownik WHERE UzytkownikID= :id AND Haslo= :password"));
        //assert(false);
    query.bindValue(":id", id);
    query.bindValue(":password", password);
    query.exec();
    if(!query2.prepare("SELECT ProjektNazwa FROM Projekt LEFT JOIN CzlonekProjektu ON Projekt.ProjektID=CzlonekProjektu.ProjektID WHERE  CzlonekProjektuID= :id"));
        //assert(false);
    query2.bindValue(":id", id);
    query2.exec();

//    //If query was succesfull we take first record
    if(query.next()){
        project_member_ui->user_id = query.value(0).toString();
        project_member_ui->user_name = query.value(2).toString();
        project_member_ui->user_surname = query.value(3).toString();
        project_member_ui->user_password = password;
//        logged = true;
//        emit loggedIn();
    }
    if(query2.next()){

        project_member_ui->project_name=query2.value(0).toString();
        project_member_ui->show();
        login_widget->hide();
        project_member_ui->refreshLabels();
    }else{
        QErrorMessage message;
        message.showMessage("Nie jesteś uzytkownikiem projektu");
    }

}
