#include "mainwindowprojectmember.h"
#include "ui_mainwindowprojectmember.h"
#include <QTreeWidgetItem>
#include <QDebug>

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
void MainWindowProjectMember::userLogged(){

    //    fill treewidgetuserconstruction
    fillTreeWidgetUserSupplies();
//    fill treewidgetusersupplies
//    fill treewidgetuserrequests
//    QSqlQuery query;
//    if(!query.prepare("SELECT UzytkownikID, Haslo, Imie, Nazwisko FROM Uzytkownik WHERE UzytkownikID= :id AND Haslo= :password"));
//        //assert(false);
//    query.bindValue(":id", id);
//    query.bindValue(":password", password);
//    query.exec();

    fillTreeWidgetProjectConstructions();
    //    fill treewidgetprojectconstruction
fillTreeWidgetProjectSupplies();
    //    fill treewidgetprojectsupplies
fillTreeWidgetProjectMembers();
//    fill treewidgetprojectmembers


}
void MainWindowProjectMember::fillTreeWidgetProjectConstructions(){
    QSqlQuery query;
    QSqlQuery query2;
    if(!query.prepare("SELECT Konstrukcja.KonstrukcjaID,KonstrukcjaNazwa  FROM Konstrukcja WHERE  ProjektID=(SELECT CzlonekProjektu.ProjektID FROM CzlonekProjektu WHERE CzlonekProjektu.CzlonekProjektuID= :id)"));

    query.bindValue(":id", user_id);
    query.exec();
    while(query.next()){
        qDebug()<<"query 1 size"<<query.size();
            QTreeWidgetItem *parent=new QTreeWidgetItem();
            parent->setText(0,query.value(1).toString());
            this->ui->treeWidgetProjectConstructions->addTopLevelItem(parent);
            qDebug()<<"in for"<<query.value(1).toString();
            if(!query2.prepare("SELECT ZasobNazwa  FROM Zasob LEFT JOIN Zasoby_Konstrukcje ON Zasob.ZasobID=Zasoby_Konstrukcje.ZasobID WHERE  Zasoby_Konstrukcje.KonstrukcjaID= :id"));

            query2.bindValue(":id", query.value(0).toString());
            query2.exec();
            while(query2.next()){
                qDebug()<<"query 2 size"<<query2.size();

                    QTreeWidgetItem *itm=new QTreeWidgetItem();
                    itm->setText(0,query2.value(0).toString());
                    parent->addChild(itm);

            }



    }
}
void MainWindowProjectMember::fillTreeWidgetProjectSupplies(){
    QSqlQuery query;
            if(!query.prepare("SELECT ZasobNazwa, Producenci.ProducentNazwa, Typy.TypNazwa, Konstrukcja.KonstrukcjaNazwa, Uzytkownik.Imie, Uzytkownik.Nazwisko, Miejsca.MiejsceNazwa  FROM Zasob LEFT JOIN Producenci ON Zasob.ProducentID=Producenci.ProducentID  LEFT JOIN Typy ON Zasob.TypID=Typy.TypID LEFT JOIN Zasoby_Konstrukcje INNER JOIN Konstrukcja ON Konstrukcja.KonstrukcjaID = Zasoby_Konstrukcje.KonstrukcjaID ON Zasob.ZasobID=Zasoby_Konstrukcje.ZasobID LEFT JOIN Uzytkownik ON Uzytkownik.UzytkownikID= Zasob.UzytkownikID LEFT Join Miejsca ON Miejsca.MiejsceID=Zasob.MiejsceID WHERE  Zasob.ProjektID=(SELECT CzlonekProjektu.ProjektID FROM CzlonekProjektu WHERE CzlonekProjektu.CzlonekProjektuID= :id)")){}
            query.bindValue(":id", user_id);
            query.exec();

            while(query.next()){
                QTreeWidgetItem *parent=new QTreeWidgetItem();
                parent->setText(0,query.value(0).toString());
                parent->setText(1,query.value(1).toString());
                parent->setText(2,query.value(2).toString());
                parent->setText(3,query.value(3).toString());
                parent->setText(4,query.value(4).toString());
                parent->setText(5,query.value(5).toString());
                parent->setText(6,query.value(6).toString());
                this->ui->treeWidgetProjectSupplies->addTopLevelItem(parent);
            }




}
void MainWindowProjectMember::fillTreeWidgetUserSupplies(){
    QSqlQuery query;
            if(!query.prepare("SELECT ZasobNazwa, Producenci.ProducentNazwa, Typy.TypNazwa, Miejsca.MiejsceNazwa  FROM Zasob LEFT JOIN Producenci ON Zasob.ProducentID=Producenci.ProducentID  LEFT JOIN Typy ON Zasob.TypID=Typy.TypID LEFT Join Miejsca ON Miejsca.MiejsceID=Zasob.MiejsceID  WHERE Zasob.UzytkownikID= :id")){}

            query.bindValue(":id", user_id);
            query.exec();

            while(query.next()){
                QTreeWidgetItem *parent=new QTreeWidgetItem();
                parent->setText(0,query.value(0).toString());
                parent->setText(1,query.value(1).toString());
                parent->setText(2,query.value(2).toString());
                parent->setText(3,query.value(3).toString());
                this->ui->treeWidgetUserSupplies->addTopLevelItem(parent);
            }




}
void MainWindowProjectMember::fillTreeWidgetProjectMembers(){
    QSqlQuery query;
    QSqlQuery query2;
            if(!query2.prepare("SELECT Uzytkownik.Imie, Uzytkownik.Nazwisko FROM Uzytkownik LEFT JOIN Projekt ON Projekt.KierownikProjektu=Uzytkownik.UzytkownikID WHERE Projekt.ProjektID=(SELECT CzlonekProjektu.ProjektID FROM CzlonekProjektu WHERE CzlonekProjektu.CzlonekProjektuID= :id) ")){}

            query2.bindValue(":id", user_id);
            query2.exec();

            while(query2.next()){
                QTreeWidgetItem *parent=new QTreeWidgetItem();
                parent->setText(0,query2.value(0).toString());
                parent->setText(1,query2.value(1).toString());
                this->ui->treeWidgetProjectMembers->addTopLevelItem(parent);
            }


            if(!query.prepare("SELECT Uzytkownik.Imie, Uzytkownik.Nazwisko FROM Uzytkownik LEFT JOIN CzlonekProjektu ON Uzytkownik.UzytkownikID = CzlonekProjektu.CzlonekProjektuID LEFT JOIN Projekt ON Projekt.ProjektID=CzlonekProjektu .ProjektID  WHERE Projekt.ProjektID=(SELECT CzlonekProjektu.ProjektID FROM CzlonekProjektu WHERE CzlonekProjektu.CzlonekProjektuID= :id) ")){}

            query.bindValue(":id", user_id);
            query.exec();

            while(query.next()){
                QTreeWidgetItem *parent=new QTreeWidgetItem();
                parent->setText(0,query.value(0).toString());
                parent->setText(1,query.value(1).toString());
                this->ui->treeWidgetProjectMembers->addTopLevelItem(parent);
            }




}
