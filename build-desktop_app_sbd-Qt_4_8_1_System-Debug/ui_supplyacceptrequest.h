/********************************************************************************
** Form generated from reading UI file 'supplyacceptrequest.ui'
**
** Created: Mon Jan 12 19:09:28 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPLYACCEPTREQUEST_H
#define UI_SUPPLYACCEPTREQUEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_supplyAcceptRequest
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *supplyAcceptRequest)
    {
        if (supplyAcceptRequest->objectName().isEmpty())
            supplyAcceptRequest->setObjectName(QString::fromUtf8("supplyAcceptRequest"));
        supplyAcceptRequest->resize(328, 177);
        label = new QLabel(supplyAcceptRequest);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 20, 57, 15));
        label_2 = new QLabel(supplyAcceptRequest);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 50, 57, 15));
        pushButton = new QPushButton(supplyAcceptRequest);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 100, 80, 23));
        pushButton_2 = new QPushButton(supplyAcceptRequest);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 100, 80, 23));

        retranslateUi(supplyAcceptRequest);

        QMetaObject::connectSlotsByName(supplyAcceptRequest);
    } // setupUi

    void retranslateUi(QWidget *supplyAcceptRequest)
    {
        supplyAcceptRequest->setWindowTitle(QApplication::translate("supplyAcceptRequest", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("supplyAcceptRequest", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("supplyAcceptRequest", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("supplyAcceptRequest", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("supplyAcceptRequest", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class supplyAcceptRequest: public Ui_supplyAcceptRequest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPLYACCEPTREQUEST_H
