#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Settings.cpp"
#include "game.cpp"
#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private slots:
    void on_PlayButton_clicked();
    void on_pushButton_clicked();
    void on_SettingsButton_clicked();
    void on_ExitButton_clicked();
    void on_pushButton_2_clicked();
    void on_HumanComp_clicked();
    void on_CompHuman_clicked();
    void on_ReturnToMainMenu_clicked();
    void on_GetPath_clicked();
    void on_SaveSettings_clicked();
    void on_textEdit_textChanged();
    void on_SetLetter_clicked();
    void on_EnterFullWord_clicked();
    void on_HumanHuman_clicked();
    void on_SetWord_2_clicked();
    void on_textEdit_2_textChanged();
    void on_EnterFullWord_2_clicked();
    void on_SetWord_clicked();
    void on_Player1_selectionChanged();
    void on_Player1_textChanged();
    void on_SaveButton_clicked();
    void on_Player2_textChanged();
    void onEnterFullWord();
    void on_PlayersEdit_textChanged();
    void on_HumanHuman_2_clicked();

signals:
    void myVariableChanged(int value);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void DisplayGameState(std::ostream &out, const std::vector<char> &guessed, int attemptsLeft, int maxAttempts);
    void DisplayGameState(std::string guessed, int attemptsLeft, int maxAttempts);
private:
    Game *localGame;
    QTextEdit *Kostyl;
    QPair<Game *, Game *> PlayersGames;
    std::pair<std::string, std::string> GetRandomWord();
    Settings *settings = new Settings();
    int currentPlayer = 0;
    Ui::MainWindow *ui;
    std::map<std::string,std::string> context;
    std::vector<std::pair<std::string, std::string>> DefaultWords = {{{"anekdot", "joke"}}};

};
#endif // MAINWINDOW_H
