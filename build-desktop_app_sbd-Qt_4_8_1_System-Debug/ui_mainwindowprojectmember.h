/********************************************************************************
** Form generated from reading UI file 'mainwindowprojectmember.ui'
**
** Created: Sun Jan 25 03:03:46 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWPROJECTMEMBER_H
#define UI_MAINWINDOWPROJECTMEMBER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

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
    QTreeWidget *treeWidgetUserConstructions;
    QTreeWidget *treeWidgetUserSupplies;
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
    QTreeWidget *treeWidgetProjectConstructions;
    QTreeWidget *treeWidgetProjectSupplies;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QTreeWidget *treeWidgetProjectMembers;
    QHBoxLayout *horizontalLayout_10;
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
    QListView *listViewSearchResults;
    QLabel *label_18;
    QLabel *label_17;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowProjectMember)
    {
        if (MainWindowProjectMember->objectName().isEmpty())
            MainWindowProjectMember->setObjectName(QString::fromUtf8("MainWindowProjectMember"));
        MainWindowProjectMember->resize(1051, 699);
        centralwidget = new QWidget(MainWindowProjectMember);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 30, 201, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelUserName = new QLabel(verticalLayoutWidget);
        labelUserName->setObjectName(QString::fromUtf8("labelUserName"));

        verticalLayout->addWidget(labelUserName);

        labelUserType = new QLabel(verticalLayoutWidget);
        labelUserType->setObjectName(QString::fromUtf8("labelUserType"));

        verticalLayout->addWidget(labelUserType);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButtonProjectInfo = new QPushButton(verticalLayoutWidget);
        pushButtonProjectInfo->setObjectName(QString::fromUtf8("pushButtonProjectInfo"));

        verticalLayout->addWidget(pushButtonProjectInfo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButtonSearchSupply = new QPushButton(verticalLayoutWidget);
        pushButtonSearchSupply->setObjectName(QString::fromUtf8("pushButtonSearchSupply"));

        verticalLayout->addWidget(pushButtonSearchSupply);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButtonLogout = new QPushButton(verticalLayoutWidget);
        pushButtonLogout->setObjectName(QString::fromUtf8("pushButtonLogout"));

        verticalLayout->addWidget(pushButtonLogout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(200, 0, 771, 481));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayoutWidget_2 = new QWidget(tab);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 471, 421));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        labelProjectName = new QLabel(verticalLayoutWidget_2);
        labelProjectName->setObjectName(QString::fromUtf8("labelProjectName"));

        horizontalLayout_5->addWidget(labelProjectName);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        treeWidgetUserConstructions = new QTreeWidget(verticalLayoutWidget_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidgetUserConstructions->setHeaderItem(__qtreewidgetitem);
        treeWidgetUserConstructions->setObjectName(QString::fromUtf8("treeWidgetUserConstructions"));

        horizontalLayout_2->addWidget(treeWidgetUserConstructions);

        treeWidgetUserSupplies = new QTreeWidget(verticalLayoutWidget_2);
        treeWidgetUserSupplies->setObjectName(QString::fromUtf8("treeWidgetUserSupplies"));

        horizontalLayout_2->addWidget(treeWidgetUserSupplies);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableWidgetWaitingRequests = new QTableWidget(verticalLayoutWidget_2);
        tableWidgetWaitingRequests->setObjectName(QString::fromUtf8("tableWidgetWaitingRequests"));

        horizontalLayout->addWidget(tableWidgetWaitingRequests);

        pushButtonDeleteRequest = new QPushButton(verticalLayoutWidget_2);
        pushButtonDeleteRequest->setObjectName(QString::fromUtf8("pushButtonDeleteRequest"));

        horizontalLayout->addWidget(pushButtonDeleteRequest);


        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayoutWidget_3 = new QWidget(tab_2);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 0, 761, 391));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_10 = new QLabel(verticalLayoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_6->addWidget(label_10);

        labelProjectManager = new QLabel(verticalLayoutWidget_3);
        labelProjectManager->setObjectName(QString::fromUtf8("labelProjectManager"));

        horizontalLayout_6->addWidget(labelProjectManager);


        verticalLayout_3->addLayout(horizontalLayout_6);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        labelProjectName_2 = new QLabel(verticalLayoutWidget_3);
        labelProjectName_2->setObjectName(QString::fromUtf8("labelProjectName_2"));

        gridLayout_3->addWidget(labelProjectName_2, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        treeWidgetProjectConstructions = new QTreeWidget(verticalLayoutWidget_3);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        treeWidgetProjectConstructions->setHeaderItem(__qtreewidgetitem1);
        treeWidgetProjectConstructions->setObjectName(QString::fromUtf8("treeWidgetProjectConstructions"));

        horizontalLayout_8->addWidget(treeWidgetProjectConstructions);

        treeWidgetProjectSupplies = new QTreeWidget(verticalLayoutWidget_3);
        treeWidgetProjectSupplies->setObjectName(QString::fromUtf8("treeWidgetProjectSupplies"));

        horizontalLayout_8->addWidget(treeWidgetProjectSupplies);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);


        verticalLayout_3->addLayout(horizontalLayout_9);

        treeWidgetProjectMembers = new QTreeWidget(verticalLayoutWidget_3);
        treeWidgetProjectMembers->setObjectName(QString::fromUtf8("treeWidgetProjectMembers"));

        verticalLayout_3->addWidget(treeWidgetProjectMembers);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));

        verticalLayout_3->addLayout(horizontalLayout_10);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayoutWidget = new QWidget(tab_3);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 681, 421));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(label_13, 2, 0, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(lineEdit_5, 4, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(pushButton, 6, 0, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(lineEdit_4, 3, 1, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(label_14, 3, 0, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(lineEdit_6, 5, 1, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(label_15, 4, 0, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(label_16, 5, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(pushButton_3, 6, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);


        gridLayout->addLayout(verticalLayout_4, 2, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(150, 20));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        listViewSearchResults = new QListView(gridLayoutWidget);
        listViewSearchResults->setObjectName(QString::fromUtf8("listViewSearchResults"));
        listViewSearchResults->setMinimumSize(QSize(500, 0));

        gridLayout->addWidget(listViewSearchResults, 2, 1, 1, 1);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 1, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 1, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());
        MainWindowProjectMember->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowProjectMember);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1051, 20));
        MainWindowProjectMember->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowProjectMember);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowProjectMember->setStatusBar(statusbar);

        retranslateUi(MainWindowProjectMember);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowProjectMember);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowProjectMember)
    {
        MainWindowProjectMember->setWindowTitle(QApplication::translate("MainWindowProjectMember", "MainWindow", 0, QApplication::UnicodeUTF8));
        labelUserName->setText(QApplication::translate("MainWindowProjectMember", "User Name", 0, QApplication::UnicodeUTF8));
        labelUserType->setText(QApplication::translate("MainWindowProjectMember", "User Type", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindowProjectMember", "Moje Zasoby", 0, QApplication::UnicodeUTF8));
        pushButtonProjectInfo->setText(QApplication::translate("MainWindowProjectMember", "Informacje o projekcie", 0, QApplication::UnicodeUTF8));
        pushButtonSearchSupply->setText(QApplication::translate("MainWindowProjectMember", "Przeszukaj Zasoby", 0, QApplication::UnicodeUTF8));
        pushButtonLogout->setText(QApplication::translate("MainWindowProjectMember", "Wyloguj", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindowProjectMember", "Nale\305\274ysz do projektu:", 0, QApplication::UnicodeUTF8));
        labelProjectName->setText(QApplication::translate("MainWindowProjectMember", "Project Name", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindowProjectMember", "Twoje konstrukcje:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindowProjectMember", "Twoje zasoby:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetUserSupplies->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("MainWindowProjectMember", "Miejsce", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindowProjectMember", "Typ", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindowProjectMember", "Producent", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindowProjectMember", "Nazwa", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindowProjectMember", "Lista pr\303\263\305\233b oczekuj\304\205cych:", 0, QApplication::UnicodeUTF8));
        pushButtonDeleteRequest->setText(QApplication::translate("MainWindowProjectMember", "Usu\305\204 pro\305\233b\304\231", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindowProjectMember", "Tab 1", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindowProjectMember", "Kierownik projektu:", 0, QApplication::UnicodeUTF8));
        labelProjectManager->setText(QApplication::translate("MainWindowProjectMember", "Project manager", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindowProjectMember", "Nazwa projektu:", 0, QApplication::UnicodeUTF8));
        labelProjectName_2->setText(QApplication::translate("MainWindowProjectMember", "Project Name", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindowProjectMember", "Konstrukcje w projekcie:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindowProjectMember", "Zasoby projektu:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidgetProjectSupplies->headerItem();
        ___qtreewidgetitem1->setText(6, QApplication::translate("MainWindowProjectMember", "Miejsce", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(5, QApplication::translate("MainWindowProjectMember", "Nazwisko", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(4, QApplication::translate("MainWindowProjectMember", "Imie", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(3, QApplication::translate("MainWindowProjectMember", "Konstrukcja", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(2, QApplication::translate("MainWindowProjectMember", "Typ", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("MainWindowProjectMember", "Producent", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindowProjectMember", "Nazwa", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindowProjectMember", "Cz\305\202onkowie projektu:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidgetProjectMembers->headerItem();
        ___qtreewidgetitem2->setText(1, QApplication::translate("MainWindowProjectMember", "Nazwisko", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindowProjectMember", "Imie", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindowProjectMember", "Tab 2", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindowProjectMember", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindowProjectMember", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindowProjectMember", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindowProjectMember", "PushButton", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindowProjectMember", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindowProjectMember", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindowProjectMember", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindowProjectMember", "PushButton", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindowProjectMember", "Wyszukiwarka zasob\303\263w:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindowProjectMember", "Filtry:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindowProjectMember", "Wyniki wyszukiwania", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindowProjectMember", "Page", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowProjectMember: public Ui_MainWindowProjectMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWPROJECTMEMBER_H
