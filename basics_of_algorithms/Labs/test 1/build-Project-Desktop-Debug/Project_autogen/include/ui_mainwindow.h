/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MyMainWindow)
    {
        if (MyMainWindow->objectName().isEmpty())
            MyMainWindow->setObjectName("MyMainWindow");
        MyMainWindow->resize(800, 600);
        MyMainWindow->setMouseTracking(true);
        MyMainWindow->setAutoFillBackground(false);
        MyMainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 185, 255);"));
        centralwidget = new QWidget(MyMainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMouseTracking(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 440, 90, 25));
        pushButton->setCursor(QCursor(Qt::CrossCursor));
        pushButton->setMouseTracking(true);
        pushButton->setFocusPolicy(Qt::ClickFocus);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(61, 56, 70);"));
        MyMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MyMainWindow);
        statusbar->setObjectName("statusbar");
        MyMainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MyMainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 800, 23));
        MyMainWindow->setMenuBar(menuBar);

        retranslateUi(MyMainWindow);

        QMetaObject::connectSlotsByName(MyMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MyMainWindow)
    {
        MyMainWindow->setWindowTitle(QCoreApplication::translate("MyMainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MyMainWindow", "\320\235\320\260\320\266\320\274\320\270 \320\274\320\265\320\275\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyMainWindow: public Ui_MyMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
