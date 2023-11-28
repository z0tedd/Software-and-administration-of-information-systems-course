#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ExecuteButton1_clicked()
{
    QString input_text = ui->InputBox1->toPlainText();
    qDebug()<< input_text ;


    QStringList list = input_text.split(" ",Qt::SkipEmptyParts);
    QVector<int> integerVector;

    foreach(QString num, list)
        qDebug() << num.toInt();
    /*
    if(input_text.isEmpty())
        return;

    //Check for letters or symbols
    for (int i = 0; i < input_text.length(); i++)
        if(input_text.at(i).isLetter() || input_text.at(i).isSymbol() || input_text.at(i).isPunct())
            return;

    //Split input in parts around 'space'
    QStringList input_list = input_text.split(" ", QString::SkipEmptyParts);

    //Copy those parts to array as integers
    for (int i = 0; i < input_list.length() && i < current_array_size; i++)
        array.replace(i, input_list.at(i).toInt() );
    */
}


void MainWindow::on_ExecuteButton2_clicked()
{

}

