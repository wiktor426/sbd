#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>
#include <QSqlDatabase>


namespace Ui {
class LoginWidget;
}

class LoginWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWidget(QWidget *parent = 0);
    ~LoginWidget();

private slots:
    void on_pushButtonLogin_clicked();

private:
    Ui::LoginWidget *ui;


signals:
    void login(QString user_login, QString password);
};

#endif // LOGINWIDGET_H
