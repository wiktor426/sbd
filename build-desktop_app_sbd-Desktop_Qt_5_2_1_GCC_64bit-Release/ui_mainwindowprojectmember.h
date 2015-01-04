/********************************************************************************
** Form generated from reading UI file 'mainwindowprojectmember.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWPROJECTMEMBER_H
#define UI_MAINWINDOWPROJECTMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowProjectMember
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelUserName;
    QLabel *labelUserType;
    QPushButton *pushButton_2;
    QPushButton *pushButtonProjectInfo;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonSearchSupply;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButtonLogout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLabel *labelProjectName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *treeWidgetUserConstruction;
    QTableView *tableViewUserSupplies;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidgetWaitingRequests;
    QPushButton *pushButtonDeleteRequest;
    QWidget *tab_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowProjectMember)
    {
        if (MainWindowProjectMember->objectName().isEmpty())
            MainWindowProjectMember->setObjectName(QStringLiteral("MainWindowProjectMember"));
        MainWindowProjectMember->resize(852, 697);
        centralwidget = new QWidget(MainWindowProjectMember);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 201, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelUserName = new QLabel(verticalLayoutWidget);
        labelUserName->setObjectName(QStringLiteral("labelUserName"));

        verticalLayout->addWidget(labelUserName);

        labelUserType = new QLabel(verticalLayoutWidget);
        labelUserType->setObjectName(QStringLiteral("labelUserType"));

        verticalLayout->addWidget(labelUserType);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButtonProjectInfo = new QPushButton(verticalLayoutWidget);
        pushButtonProjectInfo->setObjectName(QStringLiteral("pushButtonProjectInfo"));

        verticalLayout->addWidget(pushButtonProjectInfo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButtonSearchSupply = new QPushButton(verticalLayoutWidget);
        pushButtonSearchSupply->setObjectName(QStringLiteral("pushButtonSearchSupply"));

        verticalLayout->addWidget(pushButtonSearchSupply);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButtonLogout = new QPushButton(verticalLayoutWidget);
        pushButtonLogout->setObjectName(QStringLiteral("pushButtonLogout"));

        verticalLayout->addWidget(pushButtonLogout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(260, 80, 491, 461));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayoutWidget_2 = new QWidget(tab);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 40, 451, 381));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        labelProjectName = new QLabel(verticalLayoutWidget_2);
        labelProjectName->setObjectName(QStringLiteral("labelProjectName"));

        horizontalLayout_5->addWidget(labelProjectName);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        treeWidgetUserConstruction = new QTreeWidget(verticalLayoutWidget_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidgetUserConstruction->setHeaderItem(__qtreewidgetitem);
        treeWidgetUserConstruction->setObjectName(QStringLiteral("treeWidgetUserConstruction"));

        horizontalLayout_2->addWidget(treeWidgetUserConstruction);

        tableViewUserSupplies = new QTableView(verticalLayoutWidget_2);
        tableViewUserSupplies->setObjectName(QStringLiteral("tableViewUserSupplies"));

        horizontalLayout_2->addWidget(tableViewUserSupplies);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableWidgetWaitingRequests = new QTableWidget(verticalLayoutWidget_2);
        tableWidgetWaitingRequests->setObjectName(QStringLiteral("tableWidgetWaitingRequests"));

        horizontalLayout->addWidget(tableWidgetWaitingRequests);

        pushButtonDeleteRequest = new QPushButton(verticalLayoutWidget_2);
        pushButtonDeleteRequest->setObjectName(QStringLiteral("pushButtonDeleteRequest"));

        horizontalLayout->addWidget(pushButtonDeleteRequest);


        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindowProjectMember->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowProjectMember);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 852, 20));
        MainWindowProjectMember->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowProjectMember);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowProjectMember->setStatusBar(statusbar);

        retranslateUi(MainWindowProjectMember);

        QMetaObject::connectSlotsByName(MainWindowProjectMember);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowProjectMember)
    {
        MainWindowProjectMember->setWindowTitle(QApplication::translate("MainWindowProjectMember", "MainWindow", 0));
        labelUserName->setText(QApplication::translate("MainWindowProjectMember", "User Name", 0));
        labelUserType->setText(QApplication::translate("MainWindowProjectMember", "User Type", 0));
        pushButton_2->setText(QApplication::translate("MainWindowProjectMember", "Moje Zasoby", 0));
        pushButtonProjectInfo->setText(QApplication::translate("MainWindowProjectMember", "Informacje o projekcie", 0));
        pushButtonSearchSupply->setText(QApplication::translate("MainWindowProjectMember", "Przeszukaj Zasoby", 0));
        pushButtonLogout->setText(QApplication::translate("MainWindowProjectMember", "Wyloguj", 0));
        label->setText(QApplication::translate("MainWindowProjectMember", "Nale\305\274ysz do projektu:", 0));
        labelProjectName->setText(QApplication::translate("MainWindowProjectMember", "Project Name", 0));
        label_3->setText(QApplication::translate("MainWindowProjectMember", "Twoje konstrukcje:", 0));
        label_4->setText(QApplication::translate("MainWindowProjectMember", "Twoje zasoby:", 0));
        label_2->setText(QApplication::translate("MainWindowProjectMember", "Lista pr\303\263\305\233b oczekuj\304\205cych:", 0));
        pushButtonDeleteRequest->setText(QApplication::translate("MainWindowProjectMember", "Usu\305\204 pro\305\233b\304\231", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindowProjectMember", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindowProjectMember", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowProjectMember: public Ui_MainWindowProjectMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWPROJECTMEMBER_H
