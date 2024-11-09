#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Settings.cpp"
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

signals:
    void myVariableChanged(int value);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    std::pair<std::string, std::string> GetRandomWord(const std::string& difficulty, const std::string& path);
    Settings *settings;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
