#include <QChar>
#include "Computer.cpp"
#include <QDialog>
#include <QLineEdit>
#include <string>
#include <ui_mainwindow.h>

class Game {
private:
  std::unordered_map<QChar, bool> usedLetters;
  QString wordToGuess;
  QString guessed;
  int attemptsLeft;
  int maxAttempts;
  int difficulty;
  bool attemptsChanged;
  Ui::MainWindow *ui;

public:
  Game() {
    ui = nullptr;
    wordToGuess = "Test";
    guessed = "~~~~";
    attemptsLeft = difficulty = maxAttempts = 0;
  }
  Game(Ui::MainWindow *ui, const QString &word, int maxAttempts, int difficulty)
      : ui(ui), wordToGuess(word), maxAttempts(maxAttempts),
        difficulty(difficulty) {
    attemptsLeft = maxAttempts;
    guessed.resize(word.size(), '~');

    wordToGuess = wordToGuess.toUpper();
  }
  void UpdateLabel(QTextEdit *textbox) { textbox->setText(guessed); }

  QString GetGuessed(){return guessed;}
  void Start() {
    while (attemptsLeft > 0 && !IsWordGuessed()) {
      DisplayGameState();

      QTextEdit *textbox = ui->textEdit;
      QString input = textbox->toPlainText();
      if (input == "" || input == "\n")
        continue;

      if (input.length() != 1) {
        continue;
      }

      QChar letter = input.toUpper()[0];
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
      DisplayGameState(guessed, attemptsLeft, maxAttempts);

      QTextEdit *textbox = ui->textEdit;
      QString input = textbox->toPlainText().toUpper();
      // qDebug()<<input << " "<< wordToGuess;
      if (input == "" || input == "\n") {
        // qDebug()<< "";
        return;
      }
      if (input.length() != 1) {
        ui->textEdit->setText(QString::fromStdString(""));
        return;
      }

      QChar letter = input[0];
      qDebug()<< "ch num: "<<letter;
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
    } else {

      DisplayGameState(guessed, attemptsLeft, maxAttempts);
      EndGame();
    }
  }

  void Check(QTextEdit *textbox, QStackedWidget *Animate, QTextEdit *Label) {

      attemptsChanged = false;
    if (attemptsLeft > 0 && !IsWordGuessed()) {
      DisplayGameState(Label, Animate, guessed, attemptsLeft, maxAttempts);

      QString input = textbox->toPlainText().toUpper();

       qDebug()<<input << " "<< wordToGuess;
      if (input == "" || input == "\n") {
        return;
      }
      if (input.length() != 1) {
        textbox->setText(QString::fromStdString(""));
        return;
      }

      QChar letter = input[0];
      if (usedLetters[letter]) {
        textbox->setText(QString::fromStdString(""));
        return;
      }

      usedLetters[letter] = true;
      qDebug()<< "ch num: "<<letter;
      if (IsLetterInWord(letter)) {
        UpdateGuessedWord(letter);
      } else {
          attemptsChanged = true;
        attemptsLeft--;
      }
      textbox->setText(QString::fromStdString(""));
    } else {

      DisplayGameState(guessed, attemptsLeft, maxAttempts);
      EndGame(Animate);
    }
  }


  void Check(QTextEdit *textbox, QStackedWidget *Animate, QLabel *Label) {

      attemptsChanged = false;
    if (attemptsLeft > 0 && !IsWordGuessed()) {
      DisplayGameState(Label, Animate, guessed, attemptsLeft, maxAttempts);

      QString input = textbox->toPlainText().toUpper();

       qDebug()<<input << " "<< wordToGuess;
      if (input == "" || input == "\n") {
        return;
      }
      if (input.length() != 1) {
        textbox->setText(QString::fromStdString(""));
        return;
      }

      QChar letter = input[0];
      if (usedLetters[letter]) {
        textbox->setText(QString::fromStdString(""));
        return;
      }

      usedLetters[letter] = true;
      qDebug()<< "ch num: "<<letter;
      if (IsLetterInWord(letter)) {
        UpdateGuessedWord(letter);
      } else {
          attemptsChanged = true;
        attemptsLeft--;
      }
      textbox->setText(QString::fromStdString(""));
    } else {

      DisplayGameState(guessed, attemptsLeft, maxAttempts);
      EndGame(Animate);
    }
  }
  bool GetAttempts(){
      return attemptsChanged;
  }


  void Check(Computer player, QStackedWidget *Animate, QTextEdit *Label) {

    while (attemptsLeft > 0 && !IsWordGuessed()) {
      DisplayGameState(Label, Animate, guessed, attemptsLeft, maxAttempts);
      player.setWordPattern((guessed));
      QString input = QString(QChar(player.guessNextLetter()));
      qDebug() << input << " " << wordToGuess;
      if (input == "" || input == "\n") {
        continue;
      }
      if (input.length() != 1) {
        continue;
      }

      QChar letter = input[0];
      qDebug()<< "ch num: "<<letter;
      if (usedLetters[letter]) {
        continue;
      }

      usedLetters[letter] = true;
      if (IsLetterInWord(letter)) {
        UpdateGuessedWord(letter);
      } else {
        attemptsLeft--;
      }
    }

    DisplayGameState(guessed, attemptsLeft, maxAttempts);
    EndGame(Animate);
  }
  void DecreaseAttempts() { attemptsLeft--; }
  void FullWord(QString text) {
    text = text.toUpper();
    // std::transform(text.begin(), text.end(), text.begin(),::toupper);
    if (text == wordToGuess) {
      guessed = text;
    } else {
      attemptsLeft = 0;
    }
    DisplayGameState();
    EndGame();
  }


  private slots:
  void on_pushButton_3_clicked();

  private:
  bool IsLetterInWord(QChar letter) {
      qDebug()<<"I"<< wordToGuess.contains(letter);
      qDebug()<<"J"<<letter<<wordToGuess;

      return wordToGuess.contains(letter);
  }

  void UpdateGuessedWord(QChar letter) {
    for (size_t i = 0; i < wordToGuess.size(); ++i) {
          //qDebug() << wordToGuess[i] << letter;
      if (wordToGuess[i] == letter) {
        guessed[i] = letter;
      }
    }
  }

  bool IsWordGuessed() { return !guessed.contains(QChar('~')); }

  void DisplayGameState() { ui->label_2->setText((guessed)); }
  void DisplayGameState(QString guessed, int attemptsLeft, int maxAttempts) {
    int numFrames = 7;

    ui->label_2->setText((guessed));

    int stageIndex = maxAttempts - attemptsLeft;
    double gap = static_cast<double>(maxAttempts) / (numFrames - 2);
    // (numFrames - 2): reserve last frame for final failure.

    if (attemptsLeft == 0) {
      ui->Animate->setCurrentIndex(numFrames - 1);
    } else {
      for (int i = 0; i < numFrames; ++i) {
        if (static_cast<double>(stageIndex) <= gap * i) {
          ui->Animate->setCurrentIndex(i);
          break;
        }
      }
    }
  }
  void DisplayGameState(QTextEdit *label, QStackedWidget *Animate,
                        QString guessed, int attemptsLeft, int maxAttempts) {
    int numFrames = 7;

    label->setText((guessed));

    int stageIndex = maxAttempts - attemptsLeft;
    double gap = static_cast<double>(maxAttempts) / (numFrames - 2);
    // (numFrames - 2): reserve last frame for final failure.

    if (attemptsLeft == 0) {
      Animate->setCurrentIndex(numFrames - 1);
    } else {
      for (int i = 0; i < numFrames; ++i) {
        if (static_cast<double>(stageIndex) <= gap * i) {
          Animate->setCurrentIndex(i);
          break;
        }
      }
    }
  }

  void DisplayGameState(QLabel *label, QStackedWidget *Animate,
                        QString guessed, int attemptsLeft, int maxAttempts) {
    int numFrames = 7;

    label->setText((guessed));

    int stageIndex = maxAttempts - attemptsLeft;
    double gap = static_cast<double>(maxAttempts) / (numFrames - 2);
    // (numFrames - 2): reserve last frame for final failure.

    if (attemptsLeft == 0) {
      Animate->setCurrentIndex(numFrames - 1);
    } else {
      for (int i = 0; i < numFrames; ++i) {
        if (static_cast<double>(stageIndex) <= gap * i) {
          Animate->setCurrentIndex(i);
          break;
        }
      }
    }
  }
  void EndGame() {

    QDialog win = QDialog();
    QHBoxLayout layout = QHBoxLayout(&win);
    QString result;

    if (IsWordGuessed()) {
      result = "Вы угадали слово: " + wordToGuess;
    } else {
      result = "Вы проиграли! Загаданное слово было: " + wordToGuess;
    }
    QLabel text = QLabel(result);
    layout.addWidget(&text);

    win.exec();
    ui->Screens->setCurrentIndex(0);
  }
  void EndGame(QStackedWidget *Animate) {

    QDialog win = QDialog();
    QHBoxLayout layout = QHBoxLayout(&win);
    QString result;

    if (IsWordGuessed()) {
      result = "Вы угадали слово: " + wordToGuess;
    } else {
      result = "Вы проиграли! Загаданное слово было: " + wordToGuess;
    }
    QLabel text = QLabel(result);
    layout.addWidget(&text);

    win.exec();
    Animate->setCurrentIndex(0);
    ui->Screens->setCurrentIndex(0);
  }
};
