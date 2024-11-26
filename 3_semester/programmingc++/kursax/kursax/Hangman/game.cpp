#include "game.h"
#include <QChar>
#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <ui_mainwindow.h>
#include <QLineEdit>

game::game() {
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
        Game(Ui::MainWindow *ui,
            const std::string& word, int maxAttempts, int difficulty)
            :ui(ui), wordToGuess(word), maxAttempts(maxAttempts), difficulty(difficulty) {
            attemptsLeft = maxAttempts;
            guessed.resize(word.size(), '~');
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
            std::string s = EndGame();
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

        std::string EndGame() {
            if (IsWordGuessed()) {
                ui -> Screens->setCurrentIndex(0);
                return "Вы угадали слово: " + wordToGuess;
            }
            return "Вы проиграли! Загаданное слово было: " + wordToGuess;
        }
    };
}
