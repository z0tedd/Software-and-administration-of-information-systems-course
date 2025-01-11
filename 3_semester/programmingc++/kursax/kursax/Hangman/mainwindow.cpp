#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "nlohmann/json.hpp" // Include the nlohmann::json library
#include <QDebug>
#include <QFileDialog>
#include <QLineEdit>
#include <QString>
#include <fstream>
#include <iostream>
using json = nlohmann::json;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() {
  delete ui;
  delete settings;
  delete Kostyl;
}
//+
void MainWindow::on_PlayButton_clicked() { ui->Screens->setCurrentIndex(2); }

//+
void MainWindow::on_pushButton_clicked() {
  QString fileName = QFileDialog::getOpenFileName(
      this, tr("Open file"), "/home/z0tedd", tr("JsonFiles Files (*.json)"));
  std::string file_path = fileName.toStdString();
  ui->Screens->currentWidget()->findChild<QLabel *>("path")->setText(fileName);
  std::ifstream file(fileName.toStdString());
  if (!file) {
    std::cerr << "Error opening file: " << fileName.toStdString() << std::endl;
    return;
  }

  json data; // This will hold the parsed JSON data
  try {
    file >> data; // Parse the JSON content from the file into 'data'
  } catch (json::parse_error &e) {
    std::cerr << "JSON parse error: " << e.what() << std::endl;
    return;
  }
  std::string Test = "|";
  for (auto var : data.items()) {
    Test += var.key() + "|\n|";
    qDebug() << var.key();
  }
  Test.pop_back();
  ui->Options->setText(QString::fromStdString(Test));
  settings->SetPath(fileName.toStdString());

  // for (auto var: data){
  //     qDebug() << var.front();
  // }
  // for (auto var : data["easy"]) {
  //     std::cout << var["name"] << '\n' << var["age"] << '\n';
  // }

  qDebug() << settings->GetPath();
}

//+
void MainWindow::on_SettingsButton_clicked() {
  ui->Screens->setCurrentIndex(1);
}

void MainWindow::on_ExitButton_clicked() { QCoreApplication::quit(); }

void MainWindow::on_pushButton_2_clicked() { ui->Screens->setCurrentIndex(0); }

void MainWindow::on_HumanComp_clicked() { ui->Screens->setCurrentIndex(5); }

void MainWindow::on_CompHuman_clicked() {
  auto wordAndHint = GetRandomWord();
  context["hint"] = wordAndHint.second;
  ui->Screens->setCurrentWidget(ui->PlayScreen);
  std::string LabelString = "";
  for (size_t i = 0; i < wordAndHint.first.size(); i++) {
    LabelString += "~";
  }

  ui->label_2->setText(QString::fromStdString(LabelString));
  localGame =  new Game(ui, QString::fromStdString(wordAndHint.first), 7, 3);
  // localGame.Start();
}

void MainWindow::on_ReturnToMainMenu_clicked() {
  ui->Screens->setCurrentIndex(0);
}

void MainWindow::on_GetPath_clicked() {
  QString fileName = QFileDialog::getOpenFileName(
      this, tr("Open file"), "/home/z0tedd", tr("JsonFiles Files (*.json)"));
  std::string file_path = fileName.toStdString();
  ui->Screens->currentWidget()->findChild<QLabel *>("path")->setText(fileName);
  std::ifstream file(fileName.toStdString());
  if (!file) {
    std::cerr << "Error opening file: " << fileName.toStdString() << std::endl;
    return;
  }

  json data; // This will hold the parsed JSON data
  try {
    file >> data; // Parse the JSON content from the file into 'data'
  } catch (json::parse_error &e) {
    std::cerr << "JSON parse error: " << e.what() << std::endl;
    return;
  }
  std::string Test = "|";
  for (auto var : data.items()) {
    Test += var.key() + "|\n|";
    qDebug() << var.key();
  }
  Test.pop_back();
  ui->Options->setText(QString::fromStdString(Test));
  settings->SetPath(fileName.toStdString());

  // for (auto var: data){
  //     qDebug() << var.front();
  // }
  // for (auto var : data["easy"]) {
  //     std::cout << var["name"] << '\n' << var["age"] << '\n';
  // };

  qDebug() << settings->GetPath();
}

std::vector<std::string> split(const std::string &str, char delimiter) {
  std::vector<std::string> tokens;
  std::string token;
  std::istringstream tokenStream(str);

  while (std::getline(tokenStream, token, delimiter)) {
    tokens.push_back(token);
  }

  return tokens;
}

void MainWindow::on_SaveSettings_clicked() {
  std::string input = ui->DifficultyField->toPlainText().toStdString();
  if (input.empty()) {
    input = "Demo";
  }
  while (input.back() == '\n') {

    input.pop_back();
  }

  if (input.empty()) {

    input = "standart";
    qDebug() << input;
  }
  settings->SetDifficulty(input);
  qDebug() << settings->GetDifficulty();
}

void MainWindow::on_textEdit_textChanged() {
  if (context["hint"] == "Подсказка уже была использована") {
    localGame->DecreaseAttempts();
  }
  localGame -> Check();
}

void MainWindow::on_SetLetter_clicked() {
  QDialog hint = QDialog();
  QHBoxLayout layout = QHBoxLayout(&hint);

  QLabel text = QLabel(context["hint"].c_str());
  layout.addWidget(&text);
  context["hint"] = "Подсказка уже была использована";

  hint.exec();
}

void MainWindow::onEnterFullWord() { localGame->FullWord(Kostyl->toPlainText()); }

void MainWindow::on_EnterFullWord_clicked() {
  QDialog word = QDialog();
  QHBoxLayout layout = QHBoxLayout(&word);

  // QLabel text = QLabel(context["hint"].c_str());
  QTextEdit text = QTextEdit();
  QPushButton exit = QPushButton();
  exit.setText("Set word");
  layout.addWidget(&text);
  layout.addWidget(&exit);
  Kostyl = &text;

  QObject::connect(&exit, &QPushButton::clicked, this, &MainWindow::onEnterFullWord);
  QObject::connect(&exit, &QPushButton::clicked, &word, &QDialog::close);

  word.exec();
}

void MainWindow::on_HumanHuman_clicked() {
  ui->Screens->setCurrentWidget(ui->page);
}

void MainWindow::on_SetWord_2_clicked() {
  localGame =new Game(ui, ui->textEdit_4->toPlainText(), 7, 7);
  localGame ->UpdateLabel(ui->textEdit_4);
  ui->Screens->setCurrentWidget(ui->page);
}

void MainWindow::on_textEdit_2_textChanged() {
  // QTextEdit *f = ui->textEdit_2;
  localGame -> Check(ui->textEdit_2, ui->Animate_3, ui->textEdit_4);
}

void MainWindow::on_EnterFullWord_2_clicked() {

  QDialog word = QDialog();
  QHBoxLayout layout = QHBoxLayout(&word);

  // QLabel text = QLabel(context["hint"].c_str());
  QTextEdit text = QTextEdit();
  QPushButton exit = QPushButton();
  exit.setText("Set word");
  layout.addWidget(&text);
  layout.addWidget(&exit);
  Kostyl = &text;

  QObject::connect(&exit, &QPushButton::clicked, this, &MainWindow::onEnterFullWord);
  QObject::connect(&exit, &QPushButton::clicked, &word, &QDialog::close);

  word.exec();
}

void MainWindow::on_SetWord_clicked() {
  localGame = new Game(ui, ui->textEdit_3->toPlainText(), 15, 15);

  // ComputerPlayer player;
  Computer player;
  localGame ->Check(player, ui->Animate_2, ui->textEdit_3);
}


void MainWindow::on_Player1_selectionChanged()
{
    qDebug()<<"bebra";
}

void MainWindow::on_Player1_textChanged()
{
    QString input = ui->Player1->toPlainText();
    if (input.back() != '\n'){
        qDebug()<<"Player 1 word" << input;
        return;
    }
    input.chop(1);
    ui->Player1->setText("~~~~~~");
    PlayersGames.first = new Game(ui, input, 7,7);


}

void MainWindow::on_Player2_textChanged()
{
    QString input = ui->Player2->toPlainText();

    if (input.back() != '\n'){
        qDebug()<<"Player 2 word" << input;
        return;
    }

    input.chop(1);
    DefaultWords.push_back({input.toStdString(),""});
    ui->Player2->setText("~~~~~~");
    PlayersGames.second = new Game(ui, input, 7,7);



}

void MainWindow::on_SaveButton_clicked()
{
    ui->Screens->setCurrentWidget(ui->PlayersPlays);
    ui->PlayersWord->setText(PlayersGames.first->GetGuessed());
}

void MainWindow::on_PlayersEdit_textChanged()
{
    if (((localGame == PlayersGames.first) || (localGame == PlayersGames.second)) && localGame->GetAttempts()){
        currentPlayer++;
        ui->CurrentPlayer->setText("Player"+ QString::number((currentPlayer-1)%2 +1));
    }
    if (currentPlayer %2 ==0){
        localGame = PlayersGames.first;
    }  else{
        localGame = PlayersGames.second;
    }

    // if
    // PlayersGames.first->Check(ui->PlayersEdit, ui->PlayersAnimate,ui->PlayersWord);

       localGame->Check(ui->PlayersEdit,ui->PlayersAnimate,ui->PlayersWord);
}


void MainWindow::on_HumanHuman_2_clicked()
{
    ui->Screens->setCurrentWidget(ui->PlayersWords);
}

