#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QSqlDatabase>

class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QObject *parent = 0);

    void initDatabase();
    bool checkIfOpen();
signals:
    void dbOpened();
    void dbClosed();
public slots:

private:
    QSqlDatabase database;


};

#endif // DATABASE_H
