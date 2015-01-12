#include "supplyacceptrequest.h"
#include "ui_supplyacceptrequest.h"

supplyAcceptRequest::supplyAcceptRequest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::supplyAcceptRequest)
{
    ui->setupUi(this);
}

supplyAcceptRequest::~supplyAcceptRequest()
{
    delete ui;
}
