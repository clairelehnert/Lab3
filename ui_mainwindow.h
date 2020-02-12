/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_an_Address_Book;
    QAction *actionExit;
    QWidget *centralwidget;
    QTableView *tableView;
    QLabel *phoneNumberLabel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *starPushButton;
    QLabel *def;
    QPushButton *dig7PushButton;
    QLabel *mno;
    QPushButton *poundPushButton;
    QLabel *tuv;
    QLabel *pqr;
    QPushButton *dig8PushButton;
    QLabel *wxyz;
    QPushButton *dig1PushButton;
    QPushButton *dig0PushButton;
    QPushButton *dig9PushButton;
    QLabel *abc;
    QLabel *jkl;
    QPushButton *dig2PushButton;
    QPushButton *dig6PushButton;
    QLabel *ghi;
    QLabel *plus;
    QPushButton *dig4PushButton;
    QPushButton *dig3PushButton;
    QPushButton *dig5PushButton;
    QPushButton *deletePushButton;
    QLabel *background;
    QPushButton *callPushButton;
    QLabel *contactsLabel;
    QLabel *background2;
    QLabel *label;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(696, 519);
        actionOpen_an_Address_Book = new QAction(MainWindow);
        actionOpen_an_Address_Book->setObjectName(QString::fromUtf8("actionOpen_an_Address_Book"));
        actionOpen_an_Address_Book->setIconVisibleInMenu(false);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 90, 311, 261));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir"));
        tableView->setFont(font);
        tableView->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: rgb(255, 230, 234);"));
        tableView->setFrameShape(QFrame::StyledPanel);
        tableView->setFrameShadow(QFrame::Sunken);
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setAlternatingRowColors(false);
        tableView->setGridStyle(Qt::DotLine);
        tableView->horizontalHeader()->setVisible(false);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setDefaultSectionSize(50);
        phoneNumberLabel = new QLabel(centralwidget);
        phoneNumberLabel->setObjectName(QString::fromUtf8("phoneNumberLabel"));
        phoneNumberLabel->setGeometry(QRect(410, 30, 211, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Avenir"));
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        phoneNumberLabel->setFont(font1);
        phoneNumberLabel->setLayoutDirection(Qt::LeftToRight);
        phoneNumberLabel->setStyleSheet(QString::fromUtf8("color: rgb(253, 92, 95);"));
        phoneNumberLabel->setFrameShape(QFrame::NoFrame);
        phoneNumberLabel->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(370, 70, 313, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        starPushButton = new QPushButton(gridLayoutWidget);
        starPushButton->setObjectName(QString::fromUtf8("starPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(starPushButton->sizePolicy().hasHeightForWidth());
        starPushButton->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Avenir"));
        font2.setPointSize(21);
        font2.setBold(true);
        font2.setWeight(75);
        starPushButton->setFont(font2);
        starPushButton->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(143, 146, 146);"));

        gridLayout->addWidget(starPushButton, 3, 0, 1, 1, Qt::AlignRight);

        def = new QLabel(gridLayoutWidget);
        def->setObjectName(QString::fromUtf8("def"));
        def->setFont(font);
        def->setStyleSheet(QString::fromUtf8("color: rgb(143, 146, 146);"));

        gridLayout->addWidget(def, 0, 5, 1, 1);

        dig7PushButton = new QPushButton(gridLayoutWidget);
        dig7PushButton->setObjectName(QString::fromUtf8("dig7PushButton"));
        sizePolicy.setHeightForWidth(dig7PushButton->sizePolicy().hasHeightForWidth());
        dig7PushButton->setSizePolicy(sizePolicy);
        dig7PushButton->setFont(font1);
        dig7PushButton->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout->addWidget(dig7PushButton, 2, 0, 1, 1, Qt::AlignRight);

        mno = new QLabel(gridLayoutWidget);
        mno->setObjectName(QString::fromUtf8("mno"));
        mno->setFont(font);
        mno->setStyleSheet(QString::fromUtf8("color: rgb(143, 146, 146);"));

        gridLayout->addWidget(mno, 1, 5, 1, 1);

        poundPushButton = new QPushButton(gridLayoutWidget);
        poundPushButton->setObjectName(QString::fromUtf8("poundPushButton"));
        sizePolicy.setHeightForWidth(poundPushButton->sizePolicy().hasHeightForWidth());
        poundPushButton->setSizePolicy(sizePolicy);
        poundPushButton->setFont(font2);
        poundPushButton->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(143, 146, 146);"));

        gridLayout->addWidget(poundPushButton, 3, 4, 1, 1, Qt::AlignRight);

        tuv = new QLabel(gridLayoutWidget);
        tuv->setObjectName(QString::fromUtf8("tuv"));
        tuv->setFont(font);
        tuv->setStyleSheet(QString::fromUtf8("color: rgb(143, 146, 146);"));

        gridLayout->addWidget(tuv, 2, 3, 1, 1);

        pqr = new QLabel(gridLayoutWidget);
        pqr->setObjectName(QString::fromUtf8("pqr"));
        pqr->setFont(font);
        pqr->setStyleSheet(QString::fromUtf8("color: rgb(143, 146, 146);"));

        gridLayout->addWidget(pqr, 2, 1, 1, 1);

        dig8PushButton = new QPushButton(gridLayoutWidget);
        dig8PushButton->setObjectName(QString::fromUtf8("dig8PushButton"));
        sizePolicy.setHeightForWidth(dig8PushButton->sizePolicy().hasHeightForWidth());
        dig8PushButton->setSizePolicy(sizePolicy);
        dig8PushButton->setFont(font1);
        dig8PushButton->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout->addWidget(dig8PushButton, 2, 2, 1, 1, Qt::AlignRight);

        wxyz = new QLabel(gridLayoutWidget);
        wxyz->setObjectName(QString::fromUtf8("wxyz"));
        wxyz->setFont(font);
        wxyz->setStyleSheet(QString::fromUtf8("color: rgb(143, 146, 146);"));

        gridLayout->addWidget(wxyz, 2, 5, 1, 1);

        dig1PushButton = new QPushButton(gridLayoutWidget);
        dig1PushButton->setObjectName(QString::fromUtf8("dig1PushButton"));
        sizePolicy.setHeightForWidth(dig1PushButton->sizePolicy().hasHeightForWidth());
        dig1PushButton->setSizePolicy(sizePolicy);
        dig1PushButton->setFont(font1);
        dig1PushButton->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout->addWidget(dig1PushButton, 0, 0, 1, 1, Qt::AlignRight);

        dig0PushButton = new QPushButton(gridLayoutWidget);
        dig0PushButton->setObjectName(QString::fromUtf8("dig0PushButton"));
        sizePolicy.setHeightForWidth(dig0PushButton->sizePolicy().hasHeightForWidth());
        dig0PushButton->setSizePolicy(sizePolicy);
        dig0PushButton->setFont(font1);
        dig0PushButton->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout->addWidget(dig0PushButton, 3, 2, 1, 1, Qt::AlignRight);

        dig9PushButton = new QPushButton(gridLayoutWidget);
        dig9PushButton->setObjectName(QString::fromUtf8("dig9PushButton"));
        sizePolicy.setHeightForWidth(dig9PushButton->sizePolicy().hasHeightForWidth());
        dig9PushButton->setSizePolicy(sizePolicy);
        dig9PushButton->setFont(font1);
        dig9PushButton->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout->addWidget(dig9PushButton, 2, 4, 1, 1, Qt::AlignRight);

        abc = new QLabel(gridLayoutWidget);
        abc->setObjectName(QString::fromUtf8("abc"));
        abc->setFont(font);
        abc->setStyleSheet(QString::fromUtf8("color: rgb(143, 146, 146);"));

        gridLayout->addWidget(abc, 0, 3, 1, 1);

        jkl = new QLabel(gridLayoutWidget);
        jkl->setObjectName(QString::fromUtf8("jkl"));
        jkl->setFont(font);
        jkl->setStyleSheet(QString::fromUtf8("color: rgb(143, 146, 146);"));

        gridLayout->addWidget(jkl, 1, 3, 1, 1);

        dig2PushButton = new QPushButton(gridLayoutWidget);
        dig2PushButton->setObjectName(QString::fromUtf8("dig2PushButton"));
        sizePolicy.setHeightForWidth(dig2PushButton->sizePolicy().hasHeightForWidth());
        dig2PushButton->setSizePolicy(sizePolicy);
        dig2PushButton->setFont(font1);
        dig2PushButton->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout->addWidget(dig2PushButton, 0, 2, 1, 1, Qt::AlignRight);

        dig6PushButton = new QPushButton(gridLayoutWidget);
        dig6PushButton->setObjectName(QString::fromUtf8("dig6PushButton"));
        sizePolicy.setHeightForWidth(dig6PushButton->sizePolicy().hasHeightForWidth());
        dig6PushButton->setSizePolicy(sizePolicy);
        dig6PushButton->setFont(font1);
        dig6PushButton->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout->addWidget(dig6PushButton, 1, 4, 1, 1, Qt::AlignRight);

        ghi = new QLabel(gridLayoutWidget);
        ghi->setObjectName(QString::fromUtf8("ghi"));
        ghi->setFont(font);
        ghi->setStyleSheet(QString::fromUtf8("color: rgb(143, 146, 146);"));

        gridLayout->addWidget(ghi, 1, 1, 1, 1);

        plus = new QLabel(gridLayoutWidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Avenir"));
        font3.setPointSize(21);
        plus->setFont(font3);
        plus->setStyleSheet(QString::fromUtf8("color: rgb(143, 146, 146);"));

        gridLayout->addWidget(plus, 3, 3, 1, 1);

        dig4PushButton = new QPushButton(gridLayoutWidget);
        dig4PushButton->setObjectName(QString::fromUtf8("dig4PushButton"));
        sizePolicy.setHeightForWidth(dig4PushButton->sizePolicy().hasHeightForWidth());
        dig4PushButton->setSizePolicy(sizePolicy);
        dig4PushButton->setFont(font1);
        dig4PushButton->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout->addWidget(dig4PushButton, 1, 0, 1, 1, Qt::AlignRight);

        dig3PushButton = new QPushButton(gridLayoutWidget);
        dig3PushButton->setObjectName(QString::fromUtf8("dig3PushButton"));
        sizePolicy.setHeightForWidth(dig3PushButton->sizePolicy().hasHeightForWidth());
        dig3PushButton->setSizePolicy(sizePolicy);
        dig3PushButton->setFont(font1);
        dig3PushButton->setStyleSheet(QString::fromUtf8("border: none;\n"
""));

        gridLayout->addWidget(dig3PushButton, 0, 4, 1, 1, Qt::AlignRight);

        dig5PushButton = new QPushButton(gridLayoutWidget);
        dig5PushButton->setObjectName(QString::fromUtf8("dig5PushButton"));
        sizePolicy.setHeightForWidth(dig5PushButton->sizePolicy().hasHeightForWidth());
        dig5PushButton->setSizePolicy(sizePolicy);
        dig5PushButton->setFont(font1);
        dig5PushButton->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout->addWidget(dig5PushButton, 1, 2, 1, 1, Qt::AlignRight);

        deletePushButton = new QPushButton(centralwidget);
        deletePushButton->setObjectName(QString::fromUtf8("deletePushButton"));
        deletePushButton->setGeometry(QRect(630, 10, 62, 62));
        QFont font4;
        font4.setPointSize(26);
        deletePushButton->setFont(font4);
        deletePushButton->setStyleSheet(QString::fromUtf8("border: none;"));
        background = new QLabel(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(347, 0, 351, 491));
        background->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 230, 234);"));
        callPushButton = new QPushButton(centralwidget);
        callPushButton->setObjectName(QString::fromUtf8("callPushButton"));
        callPushButton->setGeometry(QRect(500, 380, 62, 62));
        QFont font5;
        font5.setPointSize(44);
        callPushButton->setFont(font5);
        callPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 92, 95);\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:30px;\n"
" border-color: rgb(253, 92, 95);\n"
" max-width:60px;\n"
" max-height:60px;\n"
" min-width:60px;\n"
" min-height:60px;"));
        contactsLabel = new QLabel(centralwidget);
        contactsLabel->setObjectName(QString::fromUtf8("contactsLabel"));
        contactsLabel->setGeometry(QRect(30, 30, 161, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Avenir"));
        font6.setPointSize(30);
        font6.setBold(false);
        font6.setWeight(50);
        contactsLabel->setFont(font6);
        background2 = new QLabel(centralwidget);
        background2->setObjectName(QString::fromUtf8("background2"));
        background2->setGeometry(QRect(0, 0, 371, 491));
        background2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 240, 242);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 30, 21, 21));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/contact.png) 0 0 0 0 stretch stretch;"));
        MainWindow->setCentralWidget(centralwidget);
        background->raise();
        background2->raise();
        tableView->raise();
        phoneNumberLabel->raise();
        gridLayoutWidget->raise();
        deletePushButton->raise();
        callPushButton->raise();
        contactsLabel->raise();
        label->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 696, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionOpen_an_Address_Book);
        menuMenu->addSeparator();
        menuMenu->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_an_Address_Book->setText(QApplication::translate("MainWindow", "Open an Address Book...", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        phoneNumberLabel->setText(QString());
        starPushButton->setText(QApplication::translate("MainWindow", "*", nullptr));
        def->setText(QApplication::translate("MainWindow", "DEF", nullptr));
        dig7PushButton->setText(QApplication::translate("MainWindow", "7", nullptr));
        mno->setText(QApplication::translate("MainWindow", "MNO", nullptr));
        poundPushButton->setText(QApplication::translate("MainWindow", "#", nullptr));
        tuv->setText(QApplication::translate("MainWindow", "TUV", nullptr));
        pqr->setText(QApplication::translate("MainWindow", "PQRS", nullptr));
        dig8PushButton->setText(QApplication::translate("MainWindow", "8", nullptr));
        wxyz->setText(QApplication::translate("MainWindow", "WXYZ", nullptr));
        dig1PushButton->setText(QApplication::translate("MainWindow", "1", nullptr));
        dig0PushButton->setText(QApplication::translate("MainWindow", "0", nullptr));
        dig9PushButton->setText(QApplication::translate("MainWindow", "9", nullptr));
        abc->setText(QApplication::translate("MainWindow", "ABC", nullptr));
        jkl->setText(QApplication::translate("MainWindow", "JKL", nullptr));
        dig2PushButton->setText(QApplication::translate("MainWindow", "2", nullptr));
        dig6PushButton->setText(QApplication::translate("MainWindow", "6", nullptr));
        ghi->setText(QApplication::translate("MainWindow", "GHI", nullptr));
        plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        dig4PushButton->setText(QApplication::translate("MainWindow", "4", nullptr));
        dig3PushButton->setText(QApplication::translate("MainWindow", "3", nullptr));
        dig5PushButton->setText(QApplication::translate("MainWindow", "5", nullptr));
        deletePushButton->setText(QApplication::translate("MainWindow", "\342\214\253", nullptr));
        background->setText(QString());
        callPushButton->setText(QApplication::translate("MainWindow", "\342\234\206", nullptr));
        contactsLabel->setText(QApplication::translate("MainWindow", "Contacts", nullptr));
        background2->setText(QString());
        label->setText(QString());
        menuMenu->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
