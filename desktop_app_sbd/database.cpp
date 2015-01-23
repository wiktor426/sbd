#include "database.h"

DataBase::DataBase(QObject *parent) :
    QObject(parent)
{
}
void DataBase::initDatabase(){
    database = QSqlDatabase::addDatabase("QMYSQL");

    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("viktork.linuxpl.info");
    database.setDatabaseName("viktork_sbd");
    database.setUserName("viktork_sbdadmin");
    database.setPassword("haslo123");
    database.open();
    //Inform other objects that database was successfully opened
    if(database.isOpen()){
        emit dbOpened();
    }
}

bool DataBase::checkIfOpen()
{
    if(database.isOpen()){
        emit dbOpened();
        return true;
    }
    else{
        emit dbClosed();
        return false;
    }
}
