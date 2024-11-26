/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *Screens;
    QWidget *MainScreen;
    QWidget *gridLayoutWidget_2;
    QGridLayout *MenuButtons;
    QPushButton *ExitButton;
    QPushButton *PlayButton;
    QPushButton *SettingsButton;
    QWidget *SettingsScreen;
    QPushButton *pushButton;
    QWidget *PlayScreen;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *Widget;
    QStackedWidget *Animate;
    QWidget *page_1;
    QLabel *label;
    QWidget *page_2;
    QLabel *label_3;
    QWidget *page_3;
    QLabel *label_9;
    QWidget *page_4;
    QLabel *label_8;
    QWidget *page_5;
    QLabel *label_7;
    QWidget *page_6;
    QLabel *label_6;
    QWidget *page_7;
    QLabel *label_5;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(911, 334);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Screens = new QStackedWidget(centralwidget);
        Screens->setObjectName("Screens");
        Screens->setGeometry(QRect(-30, 10, 1131, 401));
        Screens->setToolTipDuration(-1);
        Screens->setAutoFillBackground(true);
        MainScreen = new QWidget();
        MainScreen->setObjectName("MainScreen");
        gridLayoutWidget_2 = new QWidget(MainScreen);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(50, 10, 281, 251));
        MenuButtons = new QGridLayout(gridLayoutWidget_2);
        MenuButtons->setObjectName("MenuButtons");
        MenuButtons->setSizeConstraint(QLayout::SetMinimumSize);
        MenuButtons->setVerticalSpacing(20);
        MenuButtons->setContentsMargins(0, 0, 0, 0);
        ExitButton = new QPushButton(gridLayoutWidget_2);
        ExitButton->setObjectName("ExitButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ExitButton->sizePolicy().hasHeightForWidth());
        ExitButton->setSizePolicy(sizePolicy);

        MenuButtons->addWidget(ExitButton, 3, 0, 1, 1);

        PlayButton = new QPushButton(gridLayoutWidget_2);
        PlayButton->setObjectName("PlayButton");
        sizePolicy.setHeightForWidth(PlayButton->sizePolicy().hasHeightForWidth());
        PlayButton->setSizePolicy(sizePolicy);

        MenuButtons->addWidget(PlayButton, 0, 0, 1, 1);

        SettingsButton = new QPushButton(gridLayoutWidget_2);
        SettingsButton->setObjectName("SettingsButton");
        sizePolicy.setHeightForWidth(SettingsButton->sizePolicy().hasHeightForWidth());
        SettingsButton->setSizePolicy(sizePolicy);
        SettingsButton->setMaximumSize(QSize(279, 16777215));

        MenuButtons->addWidget(SettingsButton, 2, 0, 1, 1);

        Screens->addWidget(MainScreen);
        SettingsScreen = new QWidget();
        SettingsScreen->setObjectName("SettingsScreen");
        pushButton = new QPushButton(SettingsScreen);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 70, 81, 26));
        Screens->addWidget(SettingsScreen);
        PlayScreen = new QWidget();
        PlayScreen->setObjectName("PlayScreen");
        verticalLayoutWidget_2 = new QWidget(PlayScreen);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(700, 0, 221, 261));
        Widget = new QVBoxLayout(verticalLayoutWidget_2);
        Widget->setObjectName("Widget");
        Widget->setContentsMargins(0, 0, 0, 0);
        Animate = new QStackedWidget(verticalLayoutWidget_2);
        Animate->setObjectName("Animate");
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        label = new QLabel(page_1);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 259, 296));
        QFont font;
        font.setFamilies({QString::fromUtf8("0xProto Nerd Font")});
        font.setPointSize(20);
        label->setFont(font);
        Animate->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 259, 296));
        label_3->setFont(font);
        Animate->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 0, 259, 261));
        label_9->setFont(font);
        Animate->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_8 = new QLabel(page_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 0, 259, 296));
        label_8->setFont(font);
        Animate->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_7 = new QLabel(page_5);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 0, 259, 296));
        label_7->setFont(font);
        Animate->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        label_6 = new QLabel(page_6);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 0, 259, 296));
        label_6->setFont(font);
        Animate->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        label_5 = new QLabel(page_7);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 0, 259, 296));
        label_5->setFont(font);
        Animate->addWidget(page_7);

        Widget->addWidget(Animate);

        verticalLayoutWidget = new QWidget(PlayScreen);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(60, 10, 271, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        verticalLayoutWidget_3 = new QWidget(PlayScreen);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(60, 160, 269, 78));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget_3);
        textEdit->setObjectName("textEdit");
        textEdit->setFont(font);

        verticalLayout_2->addWidget(textEdit);

        Screens->addWidget(PlayScreen);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 911, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        Animate->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ExitButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        PlayButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        SettingsButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
"<head>\n"
"    <meta charset=\"UTF-8\">\n"
"    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
"    <title>ASCII Art in HTML</title>\n"
"</head>\n"
"<body>\n"
"    <pre>\n"
"     _______\n"
"     |    \\|\n"
"           |\n"
"           |\n"
"           |\n"
"          /|\n"
"  ===========\n"
"    </pre>\n"
"</body>\n"
"</html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
"<head>\n"
"    <meta charset=\"UTF-8\">\n"
"    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
"    <title>ASCII Art in HTML</title>\n"
"</head>\n"
"<body>\n"
"    <pre>\n"
"     _______\n"
"     |    \\|\n"
"     O     |\n"
"           |\n"
"           |\n"
"          /|\n"
"  ===========\n"
"    </pre>\n"
"</body>\n"
"</html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
"<head>\n"
"    <meta charset=\"UTF-8\">\n"
"    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
"    <title>ASCII Art in HTML</title>\n"
"</head>\n"
"<body>\n"
"    <pre>\n"
"     _______\n"
"     |    \\|\n"
"     O     |\n"
"     |     |\n"
"           |\n"
"          /|\n"
"  ===========\n"
"    </pre>\n"
"</body>\n"
"</html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
"<head>\n"
"    <meta charset=\"UTF-8\">\n"
"    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
"    <title>ASCII Art in HTML</title>\n"
"</head>\n"
"<body>\n"
"    <pre>\n"
"     _______\n"
"     |    \\|\n"
"     O     |\n"
"    /|     |\n"
"           |\n"
"          /|\n"
"  ===========\n"
"    </pre>\n"
"</body>\n"
"</html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
"<head>\n"
"    <meta charset=\"UTF-8\">\n"
"    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
"    <title>ASCII Art in HTML</title>\n"
"</head>\n"
"<body>\n"
"    <pre>\n"
"     _______\n"
"     |    \\|\n"
"     O     |\n"
"    /|\\    |\n"
"           |\n"
"          /|\n"
"  ===========\n"
"    </pre>\n"
"</body>\n"
"</html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
"<head>\n"
"    <meta charset=\"UTF-8\">\n"
"    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
"    <title>ASCII Art in HTML</title>\n"
"</head>\n"
"<body>\n"
"    <pre>\n"
"     _______\n"
"     |    \\|\n"
"     O     |\n"
"    /|\\    |\n"
"    /      |\n"
"          /|\n"
"  ===========\n"
"    </pre>\n"
"</body>\n"
"</html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
"<head>\n"
"    <meta charset=\"UTF-8\">\n"
"    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
"    <title>ASCII Art in HTML</title>\n"
"</head>\n"
"<body>\n"
"    <pre>\n"
"     _______\n"
"     |    \\|\n"
"     O     |\n"
"    /|\\    |\n"
"    / \\    |\n"
"          /|\n"
"  ===========\n"
"    </pre>\n"
"</body>\n"
"</html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
