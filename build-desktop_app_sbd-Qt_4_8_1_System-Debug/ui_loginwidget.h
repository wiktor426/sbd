/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created: Sun Jan 25 00:21:03 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditUserLogin;
    QLineEdit *lineEditUserPassword;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonChangePassword;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName(QString::fromUtf8("LoginWidget"));
        LoginWidget->resize(430, 320);
        verticalLayoutWidget = new QWidget(LoginWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 80, 251, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditUserLogin = new QLineEdit(verticalLayoutWidget);
        lineEditUserLogin->setObjectName(QString::fromUtf8("lineEditUserLogin"));

        verticalLayout->addWidget(lineEditUserLogin);

        lineEditUserPassword = new QLineEdit(verticalLayoutWidget);
        lineEditUserPassword->setObjectName(QString::fromUtf8("lineEditUserPassword"));

        verticalLayout->addWidget(lineEditUserPassword);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonLogin = new QPushButton(verticalLayoutWidget);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));

        horizontalLayout->addWidget(pushButtonLogin);

        pushButtonChangePassword = new QPushButton(verticalLayoutWidget);
        pushButtonChangePassword->setObjectName(QString::fromUtf8("pushButtonChangePassword"));

        horizontalLayout->addWidget(pushButtonChangePassword);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QApplication::translate("LoginWidget", "Form", 0, QApplication::UnicodeUTF8));
        lineEditUserLogin->setText(QApplication::translate("LoginWidget", "1", 0, QApplication::UnicodeUTF8));
        lineEditUserPassword->setText(QApplication::translate("LoginWidget", "haslo123", 0, QApplication::UnicodeUTF8));
        pushButtonLogin->setText(QApplication::translate("LoginWidget", "Zaloguj", 0, QApplication::UnicodeUTF8));
        pushButtonChangePassword->setText(QApplication::translate("LoginWidget", "Zmie\305\204 has\305\202o", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
