#include "loginwidget.h"
#include "ui_loginwidget.h"

LoginWidget::LoginWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWidget)
{
    ui->setupUi(this);
    this->ui->pushButtonLogin->setEnabled(false);

//    if(database.isOpen()){
            this->ui->pushButtonLogin->setEnabled(true);
//        }
}

LoginWidget::~LoginWidget()
{
    delete ui;
}

void LoginWidget::on_pushButtonLogin_clicked()
{
    QString user_login = ui->lineEditUserLogin->text();
    QString password = ui->lineEditUserPassword->text();

    if(user_login.isEmpty() || password.isEmpty())
        return;

    emit login(user_login, password);
}
