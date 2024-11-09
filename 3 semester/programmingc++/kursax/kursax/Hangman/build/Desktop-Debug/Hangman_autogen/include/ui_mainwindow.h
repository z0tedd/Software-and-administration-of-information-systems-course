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
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *Screens;
    QWidget *MainScreen;
    QWidget *gridLayoutWidget_2;
    QGridLayout *MenuButtons;
    QPushButton *ExitButton;
    QPushButton *PlayButton;
    QPushButton *SettingsButton;
    QWidget *SettingsScreen;
    QPushButton *GetPath;
    QTextEdit *DifficultyField;
    QLabel *path;
    QPushButton *ReturnToMainMenu;
    QLabel *Options;
    QPushButton *SaveSettings;
    QWidget *GameMenu;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_4;
    QPushButton *HumanComp;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_5;
    QPushButton *CompHuman;
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
    QWidget *Plays;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *Widget_2;
    QStackedWidget *Animate_2;
    QWidget *page_8;
    QLabel *label_4;
    QWidget *page_9;
    QLabel *label_10;
    QWidget *page_10;
    QLabel *label_11;
    QWidget *page_11;
    QLabel *label_12;
    QWidget *page_12;
    QLabel *label_13;
    QWidget *page_13;
    QLabel *label_14;
    QWidget *page_14;
    QLabel *label_15;
    QLabel *label_16;
    QTextEdit *textEdit_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(911, 334);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        Screens = new QStackedWidget(centralwidget);
        Screens->setObjectName("Screens");
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
        GetPath = new QPushButton(SettingsScreen);
        GetPath->setObjectName("GetPath");
        GetPath->setGeometry(QRect(280, 40, 141, 51));
        DifficultyField = new QTextEdit(SettingsScreen);
        DifficultyField->setObjectName("DifficultyField");
        DifficultyField->setGeometry(QRect(40, 120, 201, 70));
        QFont font;
        font.setFamilies({QString::fromUtf8("0xProto Nerd Font")});
        font.setPointSize(20);
        DifficultyField->setFont(font);
        path = new QLabel(SettingsScreen);
        path->setObjectName("path");
        path->setGeometry(QRect(50, 30, 211, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("0xProto Nerd Font")});
        font1.setPointSize(15);
        path->setFont(font1);
        ReturnToMainMenu = new QPushButton(SettingsScreen);
        ReturnToMainMenu->setObjectName("ReturnToMainMenu");
        ReturnToMainMenu->setGeometry(QRect(760, 240, 81, 26));
        Options = new QLabel(SettingsScreen);
        Options->setObjectName("Options");
        Options->setGeometry(QRect(260, 100, 411, 131));
        Options->setFont(font);
        SaveSettings = new QPushButton(SettingsScreen);
        SaveSettings->setObjectName("SaveSettings");
        SaveSettings->setGeometry(QRect(40, 240, 81, 26));
        Screens->addWidget(SettingsScreen);
        GameMenu = new QWidget();
        GameMenu->setObjectName("GameMenu");
        verticalLayoutWidget_5 = new QWidget(GameMenu);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(630, 90, 191, 61));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        HumanComp = new QPushButton(verticalLayoutWidget_5);
        HumanComp->setObjectName("HumanComp");

        verticalLayout_4->addWidget(HumanComp);

        verticalLayoutWidget_6 = new QWidget(GameMenu);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(80, 90, 191, 61));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        CompHuman = new QPushButton(verticalLayoutWidget_6);
        CompHuman->setObjectName("CompHuman");

        verticalLayout_5->addWidget(CompHuman);

        Screens->addWidget(GameMenu);
        PlayScreen = new QWidget();
        PlayScreen->setObjectName("PlayScreen");
        verticalLayoutWidget_2 = new QWidget(PlayScreen);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(590, 0, 221, 261));
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
        Plays = new QWidget();
        Plays->setObjectName("Plays");
        verticalLayoutWidget_4 = new QWidget(Plays);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(630, 0, 221, 261));
        Widget_2 = new QVBoxLayout(verticalLayoutWidget_4);
        Widget_2->setObjectName("Widget_2");
        Widget_2->setContentsMargins(0, 0, 0, 0);
        Animate_2 = new QStackedWidget(verticalLayoutWidget_4);
        Animate_2->setObjectName("Animate_2");
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        label_4 = new QLabel(page_8);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-10, -10, 259, 296));
        label_4->setFont(font);
        Animate_2->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName("page_9");
        label_10 = new QLabel(page_9);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(0, 0, 259, 296));
        label_10->setFont(font);
        Animate_2->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName("page_10");
        label_11 = new QLabel(page_10);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(0, 0, 259, 261));
        label_11->setFont(font);
        Animate_2->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName("page_11");
        label_12 = new QLabel(page_11);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, 0, 259, 296));
        label_12->setFont(font);
        Animate_2->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName("page_12");
        label_13 = new QLabel(page_12);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(0, 0, 259, 296));
        label_13->setFont(font);
        Animate_2->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName("page_13");
        label_14 = new QLabel(page_13);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(0, 0, 259, 296));
        label_14->setFont(font);
        Animate_2->addWidget(page_13);
        page_14 = new QWidget();
        page_14->setObjectName("page_14");
        label_15 = new QLabel(page_14);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(0, 0, 259, 296));
        label_15->setFont(font);
        Animate_2->addWidget(page_14);

        Widget_2->addWidget(Animate_2);

        label_16 = new QLabel(Plays);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(70, 200, 251, 61));
        label_16->setFont(font);
        textEdit_3 = new QTextEdit(Plays);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(70, 40, 221, 70));
        textEdit_3->setFont(font);
        Screens->addWidget(Plays);

        verticalLayout_3->addWidget(Screens);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 911, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(GetPath, &QPushButton::clicked, path, qOverload<>(&QLabel::clear));

        Animate->setCurrentIndex(0);
        Animate_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ExitButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        PlayButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        SettingsButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        GetPath->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        path->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        ReturnToMainMenu->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\202\320\275\320\276", nullptr));
        Options->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        SaveSettings->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        HumanComp->setText(QCoreApplication::translate("MainWindow", "\320\247\320\265\320\273\320\276\320\262\320\265\320\272 vs \320\232\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200", nullptr));
        CompHuman->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200 vs  \320\247\320\265\320\273\320\276\320\262\320\265\320\272", nullptr));
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
        label_4->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_10->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_11->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_12->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_13->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_14->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_15->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_16->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
