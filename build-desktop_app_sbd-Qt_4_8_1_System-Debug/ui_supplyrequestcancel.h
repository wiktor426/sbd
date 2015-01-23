/********************************************************************************
** Form generated from reading UI file 'supplyrequestcancel.ui'
**
** Created: Mon Jan 12 19:09:28 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPLYREQUESTCANCEL_H
#define UI_SUPPLYREQUESTCANCEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_supplyRequestCancel
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *supplyRequestCancel)
    {
        if (supplyRequestCancel->objectName().isEmpty())
            supplyRequestCancel->setObjectName(QString::fromUtf8("supplyRequestCancel"));
        supplyRequestCancel->resize(320, 240);
        label = new QLabel(supplyRequestCancel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 30, 57, 15));
        label_2 = new QLabel(supplyRequestCancel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 70, 57, 15));
        pushButton = new QPushButton(supplyRequestCancel);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 150, 80, 23));
        pushButton_2 = new QPushButton(supplyRequestCancel);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 150, 80, 23));

        retranslateUi(supplyRequestCancel);

        QMetaObject::connectSlotsByName(supplyRequestCancel);
    } // setupUi

    void retranslateUi(QWidget *supplyRequestCancel)
    {
        supplyRequestCancel->setWindowTitle(QApplication::translate("supplyRequestCancel", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("supplyRequestCancel", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("supplyRequestCancel", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("supplyRequestCancel", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("supplyRequestCancel", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class supplyRequestCancel: public Ui_supplyRequestCancel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPLYREQUESTCANCEL_H
