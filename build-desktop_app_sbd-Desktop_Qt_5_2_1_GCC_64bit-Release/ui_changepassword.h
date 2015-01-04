/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePassword
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonAccept;
    QPushButton *pushButtonDeny;

    void setupUi(QWidget *ChangePassword)
    {
        if (ChangePassword->objectName().isEmpty())
            ChangePassword->setObjectName(QStringLiteral("ChangePassword"));
        ChangePassword->resize(240, 320);
        verticalLayoutWidget = new QWidget(ChangePassword);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 50, 170, 120));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(43, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonAccept = new QPushButton(verticalLayoutWidget);
        pushButtonAccept->setObjectName(QStringLiteral("pushButtonAccept"));

        horizontalLayout_2->addWidget(pushButtonAccept);

        pushButtonDeny = new QPushButton(verticalLayoutWidget);
        pushButtonDeny->setObjectName(QStringLiteral("pushButtonDeny"));

        horizontalLayout_2->addWidget(pushButtonDeny);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ChangePassword);

        QMetaObject::connectSlotsByName(ChangePassword);
    } // setupUi

    void retranslateUi(QWidget *ChangePassword)
    {
        ChangePassword->setWindowTitle(QApplication::translate("ChangePassword", "Form", 0));
        label->setText(QApplication::translate("ChangePassword", "Login", 0));
        label_2->setText(QApplication::translate("ChangePassword", "Stare has\305\202o", 0));
        label_3->setText(QApplication::translate("ChangePassword", "Nowe has\305\202o", 0));
        pushButtonAccept->setText(QApplication::translate("ChangePassword", "Potwierd\305\272", 0));
        pushButtonDeny->setText(QApplication::translate("ChangePassword", "Anuluj", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangePassword: public Ui_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
