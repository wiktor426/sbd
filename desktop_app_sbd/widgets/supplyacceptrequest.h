#ifndef SUPPLYACCEPTREQUEST_H
#define SUPPLYACCEPTREQUEST_H

#include <QWidget>

namespace Ui {
class supplyAcceptRequest;
}

class supplyAcceptRequest : public QWidget
{
    Q_OBJECT

public:
    explicit supplyAcceptRequest(QWidget *parent = 0);
    ~supplyAcceptRequest();

private:
    Ui::supplyAcceptRequest *ui;
};

#endif // SUPPLYACCEPTREQUEST_H
