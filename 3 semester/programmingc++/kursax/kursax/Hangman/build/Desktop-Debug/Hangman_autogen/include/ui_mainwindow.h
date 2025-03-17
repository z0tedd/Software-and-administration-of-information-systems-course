/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
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
    QPushButton *HumanHuman_2;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_8;
    QPushButton *HumanHuman;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *verticalLayout_9;
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
    QPushButton *SetLetter;
    QPushButton *EnterFullWord;
    QWidget *PlayersPlays;
    QLabel *PlayersWord;
    QTextEdit *PlayersEdit;
    QStackedWidget *PlayersAnimate;
    QWidget *page_22;
    QLabel *label_25;
    QWidget *page_23;
    QLabel *label_26;
    QWidget *page_24;
    QLabel *label_27;
    QWidget *page_25;
    QLabel *label_28;
    QWidget *page_26;
    QLabel *label_29;
    QWidget *page_27;
    QLabel *label_30;
    QWidget *page_28;
    QLabel *label_31;
    QLabel *CurrentPlayer;
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
    QPushButton *SetWord;
    QWidget *PlayersWords;
    QWidget *verticalLayoutWidget_11;
    QVBoxLayout *verticalLayout_10;
    QTextEdit *Player1;
    QWidget *verticalLayoutWidget_12;
    QVBoxLayout *verticalLayout_11;
    QTextEdit *Player2;
    QLabel *lbPlayer1;
    QLabel *lbPlayer2;
    QPushButton *SaveButton;
    QWidget *page;
    QPushButton *SetWord_2;
    QPushButton *EnterFullWord_2;
    QStackedWidget *Animate_3;
    QWidget *page_15;
    QLabel *label_17;
    QWidget *page_16;
    QLabel *label_18;
    QWidget *page_17;
    QLabel *label_19;
    QWidget *page_18;
    QLabel *label_20;
    QWidget *page_19;
    QLabel *label_21;
    QWidget *page_20;
    QLabel *label_22;
    QWidget *page_21;
    QLabel *label_23;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *textEdit_2;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_7;
    QTextEdit *textEdit_4;
    QMenuBar *menubar;

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
        Screens->setAutoFillBackground(false);
        Screens->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0,0,0);"));
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
        verticalLayoutWidget_6->setGeometry(QRect(350, 30, 191, 61));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        HumanHuman_2 = new QPushButton(verticalLayoutWidget_6);
        HumanHuman_2->setObjectName("HumanHuman_2");

        verticalLayout_5->addWidget(HumanHuman_2);

        verticalLayoutWidget_9 = new QWidget(GameMenu);
        verticalLayoutWidget_9->setObjectName("verticalLayoutWidget_9");
        verticalLayoutWidget_9->setGeometry(QRect(350, 180, 191, 61));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        HumanHuman = new QPushButton(verticalLayoutWidget_9);
        HumanHuman->setObjectName("HumanHuman");

        verticalLayout_8->addWidget(HumanHuman);

        verticalLayoutWidget_10 = new QWidget(GameMenu);
        verticalLayoutWidget_10->setObjectName("verticalLayoutWidget_10");
        verticalLayoutWidget_10->setGeometry(QRect(80, 90, 191, 61));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_10);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        CompHuman = new QPushButton(verticalLayoutWidget_10);
        CompHuman->setObjectName("CompHuman");

        verticalLayout_9->addWidget(CompHuman);

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

        SetLetter = new QPushButton(PlayScreen);
        SetLetter->setObjectName("SetLetter");
        SetLetter->setGeometry(QRect(340, 210, 81, 26));
        EnterFullWord = new QPushButton(PlayScreen);
        EnterFullWord->setObjectName("EnterFullWord");
        EnterFullWord->setGeometry(QRect(340, 180, 91, 26));
        Screens->addWidget(PlayScreen);
        PlayersPlays = new QWidget();
        PlayersPlays->setObjectName("PlayersPlays");
        PlayersWord = new QLabel(PlayersPlays);
        PlayersWord->setObjectName("PlayersWord");
        PlayersWord->setGeometry(QRect(50, 20, 269, 78));
        PlayersWord->setFont(font);
        PlayersEdit = new QTextEdit(PlayersPlays);
        PlayersEdit->setObjectName("PlayersEdit");
        PlayersEdit->setGeometry(QRect(50, 170, 267, 76));
        PlayersEdit->setFont(font);
        PlayersAnimate = new QStackedWidget(PlayersPlays);
        PlayersAnimate->setObjectName("PlayersAnimate");
        PlayersAnimate->setGeometry(QRect(620, 10, 219, 259));
        page_22 = new QWidget();
        page_22->setObjectName("page_22");
        label_25 = new QLabel(page_22);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(0, 0, 259, 296));
        label_25->setFont(font);
        PlayersAnimate->addWidget(page_22);
        page_23 = new QWidget();
        page_23->setObjectName("page_23");
        label_26 = new QLabel(page_23);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(0, 0, 259, 296));
        label_26->setFont(font);
        PlayersAnimate->addWidget(page_23);
        page_24 = new QWidget();
        page_24->setObjectName("page_24");
        label_27 = new QLabel(page_24);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(0, 0, 259, 261));
        label_27->setFont(font);
        PlayersAnimate->addWidget(page_24);
        page_25 = new QWidget();
        page_25->setObjectName("page_25");
        label_28 = new QLabel(page_25);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(0, 0, 259, 296));
        label_28->setFont(font);
        PlayersAnimate->addWidget(page_25);
        page_26 = new QWidget();
        page_26->setObjectName("page_26");
        label_29 = new QLabel(page_26);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(0, 0, 259, 296));
        label_29->setFont(font);
        PlayersAnimate->addWidget(page_26);
        page_27 = new QWidget();
        page_27->setObjectName("page_27");
        label_30 = new QLabel(page_27);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(0, 0, 259, 296));
        label_30->setFont(font);
        PlayersAnimate->addWidget(page_27);
        page_28 = new QWidget();
        page_28->setObjectName("page_28");
        label_31 = new QLabel(page_28);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(0, 0, 259, 296));
        label_31->setFont(font);
        PlayersAnimate->addWidget(page_28);
        CurrentPlayer = new QLabel(PlayersPlays);
        CurrentPlayer->setObjectName("CurrentPlayer");
        CurrentPlayer->setGeometry(QRect(410, 20, 57, 18));
        Screens->addWidget(PlayersPlays);
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
        label_4->setGeometry(QRect(0, 0, 259, 296));
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
        SetWord = new QPushButton(Plays);
        SetWord->setObjectName("SetWord");
        SetWord->setGeometry(QRect(300, 60, 81, 26));
        Screens->addWidget(Plays);
        PlayersWords = new QWidget();
        PlayersWords->setObjectName("PlayersWords");
        verticalLayoutWidget_11 = new QWidget(PlayersWords);
        verticalLayoutWidget_11->setObjectName("verticalLayoutWidget_11");
        verticalLayoutWidget_11->setGeometry(QRect(70, 70, 291, 80));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_11);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        Player1 = new QTextEdit(verticalLayoutWidget_11);
        Player1->setObjectName("Player1");
        Player1->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);;\n"
"background-color: rgb(222, 221, 218);"));

        verticalLayout_10->addWidget(Player1);

        verticalLayoutWidget_12 = new QWidget(PlayersWords);
        verticalLayoutWidget_12->setObjectName("verticalLayoutWidget_12");
        verticalLayoutWidget_12->setGeometry(QRect(510, 70, 291, 80));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_12);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        Player2 = new QTextEdit(verticalLayoutWidget_12);
        Player2->setObjectName("Player2");
        Player2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(222, 221, 218);"));

        verticalLayout_11->addWidget(Player2);

        lbPlayer1 = new QLabel(PlayersWords);
        lbPlayer1->setObjectName("lbPlayer1");
        lbPlayer1->setGeometry(QRect(190, 40, 57, 18));
        lbPlayer1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbPlayer2 = new QLabel(PlayersWords);
        lbPlayer2->setObjectName("lbPlayer2");
        lbPlayer2->setGeometry(QRect(630, 40, 57, 18));
        lbPlayer2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        SaveButton = new QPushButton(PlayersWords);
        SaveButton->setObjectName("SaveButton");
        SaveButton->setGeometry(QRect(380, 220, 81, 26));
        SaveButton->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);\n"
"color: rgb(0, 0, 0);"));
        Screens->addWidget(PlayersWords);
        page = new QWidget();
        page->setObjectName("page");
        SetWord_2 = new QPushButton(page);
        SetWord_2->setObjectName("SetWord_2");
        SetWord_2->setGeometry(QRect(290, 50, 81, 26));
        EnterFullWord_2 = new QPushButton(page);
        EnterFullWord_2->setObjectName("EnterFullWord_2");
        EnterFullWord_2->setGeometry(QRect(290, 190, 91, 26));
        Animate_3 = new QStackedWidget(page);
        Animate_3->setObjectName("Animate_3");
        Animate_3->setGeometry(QRect(590, 0, 219, 259));
        page_15 = new QWidget();
        page_15->setObjectName("page_15");
        label_17 = new QLabel(page_15);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(0, 0, 259, 296));
        label_17->setFont(font);
        Animate_3->addWidget(page_15);
        page_16 = new QWidget();
        page_16->setObjectName("page_16");
        label_18 = new QLabel(page_16);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(0, 0, 259, 296));
        label_18->setFont(font);
        Animate_3->addWidget(page_16);
        page_17 = new QWidget();
        page_17->setObjectName("page_17");
        label_19 = new QLabel(page_17);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(0, 0, 259, 261));
        label_19->setFont(font);
        Animate_3->addWidget(page_17);
        page_18 = new QWidget();
        page_18->setObjectName("page_18");
        label_20 = new QLabel(page_18);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(0, 0, 259, 296));
        label_20->setFont(font);
        Animate_3->addWidget(page_18);
        page_19 = new QWidget();
        page_19->setObjectName("page_19");
        label_21 = new QLabel(page_19);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(0, 0, 259, 296));
        label_21->setFont(font);
        Animate_3->addWidget(page_19);
        page_20 = new QWidget();
        page_20->setObjectName("page_20");
        label_22 = new QLabel(page_20);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(0, 0, 259, 296));
        label_22->setFont(font);
        Animate_3->addWidget(page_20);
        page_21 = new QWidget();
        page_21->setObjectName("page_21");
        label_23 = new QLabel(page_21);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(0, 0, 259, 296));
        label_23->setFont(font);
        Animate_3->addWidget(page_21);
        verticalLayoutWidget_7 = new QWidget(page);
        verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
        verticalLayoutWidget_7->setGeometry(QRect(10, 180, 269, 78));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        textEdit_2 = new QTextEdit(verticalLayoutWidget_7);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setFont(font);

        verticalLayout_6->addWidget(textEdit_2);

        verticalLayoutWidget_8 = new QWidget(page);
        verticalLayoutWidget_8->setObjectName("verticalLayoutWidget_8");
        verticalLayoutWidget_8->setGeometry(QRect(10, 20, 269, 78));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        textEdit_4 = new QTextEdit(verticalLayoutWidget_8);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setFont(font);

        verticalLayout_7->addWidget(textEdit_4);

        Screens->addWidget(page);

        verticalLayout_3->addWidget(Screens);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 911, 23));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);
        QObject::connect(GetPath, &QPushButton::clicked, path, qOverload<>(&QLabel::clear));

        Screens->setCurrentIndex(0);
        Animate->setCurrentIndex(0);
        PlayersAnimate->setCurrentIndex(0);
        Animate_2->setCurrentIndex(0);
        Animate_3->setCurrentIndex(1);


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
        HumanHuman_2->setText(QCoreApplication::translate("MainWindow", "\320\247\320\265\320\273\320\276\320\262\320\265\320\272 vs \320\247\320\265\320\273\320\276\320\262\320\265\320\272", nullptr));
        HumanHuman->setText(QCoreApplication::translate("MainWindow", "\320\247\320\265\320\273\320\276\320\262\320\265\320\272 vs  \320\247\320\265\320\273\320\276\320\262\320\265\320\272", nullptr));
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
        SetLetter->setText(QCoreApplication::translate("MainWindow", "hint", nullptr));
        EnterFullWord->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\273\320\276\320\265 \321\201\320\273\320\276\320\262\320\276", nullptr));
        PlayersWord->setText(QCoreApplication::translate("MainWindow", "~~~~~~", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_26->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_27->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_28->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_29->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_30->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_31->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        CurrentPlayer->setText(QCoreApplication::translate("MainWindow", "Player 1", nullptr));
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
        SetWord->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        lbPlayer1->setText(QCoreApplication::translate("MainWindow", "Player 1", nullptr));
        lbPlayer2->setText(QCoreApplication::translate("MainWindow", "Player 2", nullptr));
        SaveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        SetWord_2->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        EnterFullWord_2->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\273\320\276\320\265 \321\201\320\273\320\276\320\262\320\276", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_18->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_19->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_20->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_21->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_22->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
        label_23->setText(QCoreApplication::translate("MainWindow", "<html lang=\"en\">\n"
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
