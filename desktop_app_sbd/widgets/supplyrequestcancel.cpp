#include "supplyrequestcancel.h"
#include "ui_supplyrequestcancel.h"

supplyRequestCancel::supplyRequestCancel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::supplyRequestCancel)
{
    ui->setupUi(this);
}

supplyRequestCancel::~supplyRequestCancel()
{
    delete ui;
}
