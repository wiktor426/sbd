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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
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
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLabel *labelProjectManager;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *labelProjectName_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_8;
    QTreeWidget *treeWidgetProjectConstruction;
    QTableView *tableViewProjectSupplies;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_10;
    QTableWidget *tableWidgetProjectMembers;
    QWidget *tab_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_11;
    QLineEdit *lineEdit_3;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QLineEdit *lineEdit_4;
    QLabel *label_14;
    QLineEdit *lineEdit_6;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton_3;
    QLabel *label_9;
    QListView *listView;
    QLabel *label_18;
    QLabel *label_17;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowProjectMember)
    {
        if (MainWindowProjectMember->objectName().isEmpty())
            MainWindowProjectMember->setObjectName(QStringLiteral("MainWindowProjectMember"));
        MainWindowProjectMember->resize(1051, 699);
        centralwidget = new QWidget(MainWindowProjectMember);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 30, 201, 321));
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
        tabWidget->setGeometry(QRect(200, 0, 691, 481));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayoutWidget_2 = new QWidget(tab);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 471, 421));
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
        verticalLayoutWidget_3 = new QWidget(tab_2);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 0, 471, 391));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_10 = new QLabel(verticalLayoutWidget_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_6->addWidget(label_10);

        labelProjectManager = new QLabel(verticalLayoutWidget_3);
        labelProjectManager->setObjectName(QStringLiteral("labelProjectManager"));

        horizontalLayout_6->addWidget(labelProjectManager);


        verticalLayout_3->addLayout(horizontalLayout_6);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        labelProjectName_2 = new QLabel(verticalLayoutWidget_3);
        labelProjectName_2->setObjectName(QStringLiteral("labelProjectName_2"));

        gridLayout_3->addWidget(labelProjectName_2, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        treeWidgetProjectConstruction = new QTreeWidget(verticalLayoutWidget_3);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QStringLiteral("1"));
        treeWidgetProjectConstruction->setHeaderItem(__qtreewidgetitem1);
        treeWidgetProjectConstruction->setObjectName(QStringLiteral("treeWidgetProjectConstruction"));

        horizontalLayout_8->addWidget(treeWidgetProjectConstruction);

        tableViewProjectSupplies = new QTableView(verticalLayoutWidget_3);
        tableViewProjectSupplies->setObjectName(QStringLiteral("tableViewProjectSupplies"));

        horizontalLayout_8->addWidget(tableViewProjectSupplies);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_9->addWidget(label_8);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        tableWidgetProjectMembers = new QTableWidget(verticalLayoutWidget_3);
        tableWidgetProjectMembers->setObjectName(QStringLiteral("tableWidgetProjectMembers"));

        horizontalLayout_10->addWidget(tableWidgetProjectMembers);


        verticalLayout_3->addLayout(horizontalLayout_10);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayoutWidget = new QWidget(tab_3);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 681, 421));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(label_13, 2, 0, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(lineEdit_5, 4, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(pushButton, 6, 0, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(lineEdit_4, 3, 1, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(label_14, 3, 0, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(lineEdit_6, 5, 1, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(label_15, 4, 0, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(label_16, 5, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(pushButton_3, 6, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);


        gridLayout->addLayout(verticalLayout_4, 2, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(150, 20));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        listView = new QListView(gridLayoutWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setMinimumSize(QSize(500, 0));

        gridLayout->addWidget(listView, 2, 1, 1, 1);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout->addWidget(label_18, 1, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout->addWidget(label_17, 1, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());
        MainWindowProjectMember->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowProjectMember);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1051, 20));
        MainWindowProjectMember->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowProjectMember);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowProjectMember->setStatusBar(statusbar);

        retranslateUi(MainWindowProjectMember);

        tabWidget->setCurrentIndex(1);


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
        label_10->setText(QApplication::translate("MainWindowProjectMember", "Kierownik projektu:", 0));
        labelProjectManager->setText(QApplication::translate("MainWindowProjectMember", "Project manager", 0));
        label_5->setText(QApplication::translate("MainWindowProjectMember", "Nazwa projektu:", 0));
        labelProjectName_2->setText(QApplication::translate("MainWindowProjectMember", "Project Name", 0));
        label_6->setText(QApplication::translate("MainWindowProjectMember", "Konstrukcje w projekcie:", 0));
        label_7->setText(QApplication::translate("MainWindowProjectMember", "Zasoby projektu:", 0));
        label_8->setText(QApplication::translate("MainWindowProjectMember", "Cz\305\202onkowie projektu:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindowProjectMember", "Tab 2", 0));
        label_11->setText(QApplication::translate("MainWindowProjectMember", "TextLabel", 0));
        label_12->setText(QApplication::translate("MainWindowProjectMember", "TextLabel", 0));
        label_13->setText(QApplication::translate("MainWindowProjectMember", "TextLabel", 0));
        pushButton->setText(QApplication::translate("MainWindowProjectMember", "PushButton", 0));
        label_14->setText(QApplication::translate("MainWindowProjectMember", "TextLabel", 0));
        label_15->setText(QApplication::translate("MainWindowProjectMember", "TextLabel", 0));
        label_16->setText(QApplication::translate("MainWindowProjectMember", "TextLabel", 0));
        pushButton_3->setText(QApplication::translate("MainWindowProjectMember", "PushButton", 0));
        label_9->setText(QApplication::translate("MainWindowProjectMember", "Wyszukiwarka zasob\303\263w:", 0));
        label_18->setText(QApplication::translate("MainWindowProjectMember", "Filtry:", 0));
        label_17->setText(QApplication::translate("MainWindowProjectMember", "Wyniki wyszukiwania", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindowProjectMember", "Page", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowProjectMember: public Ui_MainWindowProjectMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWPROJECTMEMBER_H
