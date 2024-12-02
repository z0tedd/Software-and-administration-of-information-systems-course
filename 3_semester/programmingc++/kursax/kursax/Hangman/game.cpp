#include "game.h"
#include <QChar>
#include <string>
#include <ui_mainwindow.h>
#include <QLineEdit>
#include <QDialog>

class Game {
    private:
        std::unordered_map<char, bool> usedLetters;
        std::string wordToGuess;
        std::string guessed;
        int attemptsLeft;
        int maxAttempts;
        int difficulty;
    Ui::MainWindow *ui;


    public:
    Game(){
        ui = nullptr;
        wordToGuess = "Test";
        guessed = "~~~~";
        attemptsLeft =difficulty =maxAttempts = 0;
    }
        Game(Ui::MainWindow *ui,
            const std::string& word, int maxAttempts, int difficulty)
            :ui(ui), wordToGuess(word), maxAttempts(maxAttempts), difficulty(difficulty) {
            attemptsLeft = maxAttempts;
            guessed.resize(word.size(), '~');

            std::transform(wordToGuess.begin(), wordToGuess.end(), wordToGuess.begin(),::toupper);
        }

        void Start() {
            while (attemptsLeft > 0 && !IsWordGuessed()) {
                DisplayGameState();

                QTextEdit* textbox = ui->textEdit;
                std::string input = textbox->toPlainText().toStdString();
                if (input == "" || input == "\n")
                    continue;

                if (input.length() != 1) {
                    continue;
                }

                char letter = std::toupper(input[0]);
                if (usedLetters[letter]) {
                    continue;
                }

                usedLetters[letter] = true;
                if (IsLetterInWord(letter)) {
                    UpdateGuessedWord(letter);
                } else {
                    attemptsLeft--;
                }
                ui->textEdit->setText(QString::fromStdString(""));
            }

            DisplayGameState();
             EndGame();
        }
        void Check() {

            if (attemptsLeft > 0 && !IsWordGuessed()) {
            DisplayGameState(guessed,attemptsLeft,maxAttempts);

                QTextEdit* textbox = ui->textEdit;
                std::string input = textbox->toPlainText().toStdString();
                //qDebug()<<input << " "<< wordToGuess;
                if (input == "" || input == "\n"){
                    qDebug()<< "dolboeb";
                    return;
                }
                if (input.length() != 1) {
                    ui->textEdit->setText(QString::fromStdString(""));
                    return;
                }

                char letter = std::toupper(input[0]);
                if (usedLetters[letter]) {
                    ui->textEdit->setText(QString::fromStdString(""));
                    return;
                }

                usedLetters[letter] = true;
                if (IsLetterInWord(letter)) {
                    UpdateGuessedWord(letter);
                } else {
                    attemptsLeft--;
                }
                ui->textEdit->setText(QString::fromStdString(""));
            }else{

            DisplayGameState(guessed,attemptsLeft,maxAttempts);
            EndGame();
            }


        }
        void DecreaseAttempts(){
            attemptsLeft--;
        }


    private:
        bool IsLetterInWord(char letter) {
            return wordToGuess.find(letter) != std::string::npos;
        }

        void UpdateGuessedWord(char letter) {
            for (size_t i = 0; i < wordToGuess.size(); ++i) {
                if (wordToGuess[i] == letter) {
                    guessed[i] = letter;
                }
            }
        }

        bool IsWordGuessed() {
            return std::all_of(guessed.begin(), guessed.end(), [](char c) { return c != '~'; });
        }

        void DisplayGameState() {
            ui->label_2->setText(QString::fromStdString(guessed));
        }
        void DisplayGameState( std::string guessed, int attemptsLeft, int maxAttempts) {
        int numFrames = 7;

        ui ->label_2->setText(QString::fromStdString(guessed));

        int stageIndex = maxAttempts - attemptsLeft;
        double gap = static_cast<double>(maxAttempts) / (numFrames - 2);
        // (numFrames - 2): reserve last frame for final failure.

        if (attemptsLeft == 0) {
            ui->Animate->setCurrentIndex(numFrames-1);
        } else {
            for (int i = 0; i < numFrames; ++i) {
            if (static_cast<double>(stageIndex) <= gap * i) {
            ui->Animate->setCurrentIndex(i);
                break;
            }
            }
        }

        }

        void EndGame() {

            QDialog win = QDialog();
            QHBoxLayout layout = QHBoxLayout(&win);
            std::string result;


            if (IsWordGuessed()) {


                result =  "Вы угадали слово: " + wordToGuess;
            }else{
               result =  "Вы проиграли! Загаданное слово было: " + wordToGuess;
            }
            QLabel text = QLabel(result.c_str());
            layout.addWidget(&text);

            win.exec();
            ui -> Screens->setCurrentIndex(0);
        }
};
