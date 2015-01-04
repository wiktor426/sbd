/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
            LoginWidget->setObjectName(QStringLiteral("LoginWidget"));
        LoginWidget->resize(430, 320);
        verticalLayoutWidget = new QWidget(LoginWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 80, 251, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditUserLogin = new QLineEdit(verticalLayoutWidget);
        lineEditUserLogin->setObjectName(QStringLiteral("lineEditUserLogin"));

        verticalLayout->addWidget(lineEditUserLogin);

        lineEditUserPassword = new QLineEdit(verticalLayoutWidget);
        lineEditUserPassword->setObjectName(QStringLiteral("lineEditUserPassword"));

        verticalLayout->addWidget(lineEditUserPassword);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonLogin = new QPushButton(verticalLayoutWidget);
        pushButtonLogin->setObjectName(QStringLiteral("pushButtonLogin"));

        horizontalLayout->addWidget(pushButtonLogin);

        pushButtonChangePassword = new QPushButton(verticalLayoutWidget);
        pushButtonChangePassword->setObjectName(QStringLiteral("pushButtonChangePassword"));

        horizontalLayout->addWidget(pushButtonChangePassword);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QApplication::translate("LoginWidget", "Form", 0));
        lineEditUserLogin->setText(QApplication::translate("LoginWidget", "Login", 0));
        lineEditUserPassword->setText(QApplication::translate("LoginWidget", "Has\305\202o", 0));
        pushButtonLogin->setText(QApplication::translate("LoginWidget", "Zaloguj", 0));
        pushButtonChangePassword->setText(QApplication::translate("LoginWidget", "Zmie\305\204 has\305\202o", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
