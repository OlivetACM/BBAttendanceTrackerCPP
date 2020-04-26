/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionChange_Font;
    QAction *actionBlackboard_Address;
    QAction *actionLate_Threshold;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *leftSide;
    QVBoxLayout *upperLayout;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btnLogin;
    QVBoxLayout *middleLayout;
    QComboBox *comboClasses;
    QHBoxLayout *startLayout;
    QLabel *lblStartTime;
    QLabel *txtStartTime;
    QHBoxLayout *lateLayout;
    QLabel *lblLateTime;
    QLabel *txtLateTime;
    QHBoxLayout *endLayout;
    QLabel *lblEndTime;
    QLabel *txtEndTime;
    QVBoxLayout *bottomLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnSubmit;
    QPushButton *btnLogout;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menuBBAttendanceTracker;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1168, 1067);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionQuit->setCheckable(true);
        actionChange_Font = new QAction(MainWindow);
        actionChange_Font->setObjectName(QString::fromUtf8("actionChange_Font"));
        actionBlackboard_Address = new QAction(MainWindow);
        actionBlackboard_Address->setObjectName(QString::fromUtf8("actionBlackboard_Address"));
        actionLate_Threshold = new QAction(MainWindow);
        actionLate_Threshold->setObjectName(QString::fromUtf8("actionLate_Threshold"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        leftSide = new QVBoxLayout();
        leftSide->setSpacing(20);
        leftSide->setObjectName(QString::fromUtf8("leftSide"));
        leftSide->setSizeConstraint(QLayout::SetFixedSize);
        upperLayout = new QVBoxLayout();
        upperLayout->setSpacing(10);
        upperLayout->setObjectName(QString::fromUtf8("upperLayout"));
        upperLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        upperLayout->addItem(verticalSpacer_3);

        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        QFont font;
        font.setPointSize(18);
        btnLogin->setFont(font);

        upperLayout->addWidget(btnLogin);


        leftSide->addLayout(upperLayout);

        middleLayout = new QVBoxLayout();
        middleLayout->setSpacing(5);
        middleLayout->setObjectName(QString::fromUtf8("middleLayout"));
        middleLayout->setSizeConstraint(QLayout::SetFixedSize);
        comboClasses = new QComboBox(centralwidget);
        comboClasses->addItem(QString());
        comboClasses->addItem(QString());
        comboClasses->addItem(QString());
        comboClasses->setObjectName(QString::fromUtf8("comboClasses"));
        comboClasses->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(17);
        comboClasses->setFont(font1);

        middleLayout->addWidget(comboClasses);

        startLayout = new QHBoxLayout();
        startLayout->setObjectName(QString::fromUtf8("startLayout"));
        lblStartTime = new QLabel(centralwidget);
        lblStartTime->setObjectName(QString::fromUtf8("lblStartTime"));
        sizePolicy.setHeightForWidth(lblStartTime->sizePolicy().hasHeightForWidth());
        lblStartTime->setSizePolicy(sizePolicy);
        lblStartTime->setFont(font);

        startLayout->addWidget(lblStartTime);

        txtStartTime = new QLabel(centralwidget);
        txtStartTime->setObjectName(QString::fromUtf8("txtStartTime"));
        sizePolicy.setHeightForWidth(txtStartTime->sizePolicy().hasHeightForWidth());
        txtStartTime->setSizePolicy(sizePolicy);
        txtStartTime->setFont(font);
        txtStartTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        startLayout->addWidget(txtStartTime);


        middleLayout->addLayout(startLayout);

        lateLayout = new QHBoxLayout();
        lateLayout->setObjectName(QString::fromUtf8("lateLayout"));
        lblLateTime = new QLabel(centralwidget);
        lblLateTime->setObjectName(QString::fromUtf8("lblLateTime"));
        sizePolicy.setHeightForWidth(lblLateTime->sizePolicy().hasHeightForWidth());
        lblLateTime->setSizePolicy(sizePolicy);
        lblLateTime->setFont(font);

        lateLayout->addWidget(lblLateTime);

        txtLateTime = new QLabel(centralwidget);
        txtLateTime->setObjectName(QString::fromUtf8("txtLateTime"));
        sizePolicy.setHeightForWidth(txtLateTime->sizePolicy().hasHeightForWidth());
        txtLateTime->setSizePolicy(sizePolicy);
        txtLateTime->setFont(font);
        txtLateTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        lateLayout->addWidget(txtLateTime);


        middleLayout->addLayout(lateLayout);

        endLayout = new QHBoxLayout();
        endLayout->setObjectName(QString::fromUtf8("endLayout"));
        lblEndTime = new QLabel(centralwidget);
        lblEndTime->setObjectName(QString::fromUtf8("lblEndTime"));
        sizePolicy.setHeightForWidth(lblEndTime->sizePolicy().hasHeightForWidth());
        lblEndTime->setSizePolicy(sizePolicy);
        lblEndTime->setFont(font);

        endLayout->addWidget(lblEndTime);

        txtEndTime = new QLabel(centralwidget);
        txtEndTime->setObjectName(QString::fromUtf8("txtEndTime"));
        sizePolicy.setHeightForWidth(txtEndTime->sizePolicy().hasHeightForWidth());
        txtEndTime->setSizePolicy(sizePolicy);
        txtEndTime->setFont(font);
        txtEndTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        endLayout->addWidget(txtEndTime);


        middleLayout->addLayout(endLayout);


        leftSide->addLayout(middleLayout);

        bottomLayout = new QVBoxLayout();
        bottomLayout->setSpacing(25);
        bottomLayout->setObjectName(QString::fromUtf8("bottomLayout"));
        bottomLayout->setSizeConstraint(QLayout::SetFixedSize);
        bottomLayout->setContentsMargins(-1, -1, -1, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        bottomLayout->addItem(verticalSpacer_2);

        btnSubmit = new QPushButton(centralwidget);
        btnSubmit->setObjectName(QString::fromUtf8("btnSubmit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnSubmit->sizePolicy().hasHeightForWidth());
        btnSubmit->setSizePolicy(sizePolicy1);
        btnSubmit->setFont(font);

        bottomLayout->addWidget(btnSubmit);

        btnLogout = new QPushButton(centralwidget);
        btnLogout->setObjectName(QString::fromUtf8("btnLogout"));
        sizePolicy1.setHeightForWidth(btnLogout->sizePolicy().hasHeightForWidth());
        btnLogout->setSizePolicy(sizePolicy1);
        btnLogout->setFont(font);

        bottomLayout->addWidget(btnLogout);


        leftSide->addLayout(bottomLayout);


        gridLayout->addLayout(leftSide, 0, 0, 1, 1);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 5, __qtablewidgetitem19);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        tableWidget->setFont(font2);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setEditTriggers(QAbstractItemView::SelectedClicked);
        tableWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        tableWidget->setShowGrid(false);
        tableWidget->setSortingEnabled(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setHighlightSections(false);

        gridLayout->addWidget(tableWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1168, 22));
        menubar->setDefaultUp(true);
        menubar->setNativeMenuBar(true);
        menuBBAttendanceTracker = new QMenu(menubar);
        menuBBAttendanceTracker->setObjectName(QString::fromUtf8("menuBBAttendanceTracker"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuBBAttendanceTracker->menuAction());
        menuBBAttendanceTracker->addAction(actionBlackboard_Address);
        menuBBAttendanceTracker->addAction(actionLate_Threshold);
        menuBBAttendanceTracker->addAction(actionChange_Font);
        menuBBAttendanceTracker->addSeparator();
        menuBBAttendanceTracker->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "BBAttendanceTracker", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionChange_Font->setText(QCoreApplication::translate("MainWindow", "Change Font", nullptr));
        actionBlackboard_Address->setText(QCoreApplication::translate("MainWindow", "Blackboard Address", nullptr));
        actionLate_Threshold->setText(QCoreApplication::translate("MainWindow", "Late Threshold", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Login to Blackboard", nullptr));
        comboClasses->setItemText(0, QCoreApplication::translate("MainWindow", "Select Authorized Class", nullptr));
        comboClasses->setItemText(1, QCoreApplication::translate("MainWindow", "CS 380", nullptr));
        comboClasses->setItemText(2, QCoreApplication::translate("MainWindow", "CS 450", nullptr));

        lblStartTime->setText(QCoreApplication::translate("MainWindow", "Class Start Time", nullptr));
        txtStartTime->setText(QCoreApplication::translate("MainWindow", "12:20 PM", nullptr));
        lblLateTime->setText(QCoreApplication::translate("MainWindow", "Class Late Time", nullptr));
        txtLateTime->setText(QCoreApplication::translate("MainWindow", "12:30 PM", nullptr));
        lblEndTime->setText(QCoreApplication::translate("MainWindow", "Class End Time", nullptr));
        txtEndTime->setText(QCoreApplication::translate("MainWindow", "1:40 PM", nullptr));
        btnSubmit->setText(QCoreApplication::translate("MainWindow", "Submit Attendance", nullptr));
        btnLogout->setText(QCoreApplication::translate("MainWindow", "Logout of Blackboard", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Student ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Present", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Late", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Absent", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "53363", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "David", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Lewis", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "12:40 PM", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 4);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "12:50 PM", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 5);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(1, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "53314", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(1, 1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Susanne", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(1, 2);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Lewis", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(1, 3);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "1:50 PM", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(1, 4);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "2:00 PM", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(1, 5);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        menuBBAttendanceTracker->setTitle(QCoreApplication::translate("MainWindow", "BBAttendanceTracker", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
