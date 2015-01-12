#ifndef SUPPLYREQUESTCANCEL_H
#define SUPPLYREQUESTCANCEL_H

#include <QWidget>

namespace Ui {
class supplyRequestCancel;
}

class supplyRequestCancel : public QWidget
{
    Q_OBJECT

public:
    explicit supplyRequestCancel(QWidget *parent = 0);
    ~supplyRequestCancel();

private:
    Ui::supplyRequestCancel *ui;
};

#endif // SUPPLYREQUESTCANCEL_H
