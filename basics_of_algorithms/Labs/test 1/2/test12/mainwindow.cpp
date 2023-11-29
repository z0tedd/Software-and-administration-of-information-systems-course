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
    //qDebug()<< input_text ;
    if(input_text.isEmpty())
        return;

    //Check for letters or symbols
    for (int i = 0; i < input_text.length(); i++)
        if(input_text.at(i).isLetter() || input_text.at(i).isSymbol() || input_text.at(i).isPunct())
            return;

    QStringList list = input_text.split(" ",Qt::SkipEmptyParts);
    int n = 16, k = 1, kmax =0;
    int MaxLen = 0, IndMax = 0;
    QVector<int> m(n+1,-INT_MAX);
    int i=0;
    foreach(QString num, list){
        if (i==n){
            break;
        }
        m[i++] = num.toInt();
    }
    //int m[n];
    //vector<int> m(n);

    for (int i = 0; i<n; i++){
        if (m[i]<m[i+1]){
            k+=1;

        }
        else{
            if (k>kmax){
                kmax = k;
                IndMax = i+1;
            }
            k = 1;
        }
    }


    //cout << kmax << " "<< IndMax << " " << IndMax - kmax << endl;
    for (int i = IndMax - kmax; i< IndMax; i++){
        m[i] = 0;
    }
    QString output_text;
    output_text.reserve(n*2);

    for (int i = 0; i<n; i++){
        output_text.append(QString::number(m[i]));
        output_text.append(" ");
    }
    ui->Answer1->setText(output_text);


   /*


    //Split input in parts around 'space'
    QStringList input_list = input_text.split(" ", QString::SkipEmptyParts);

    //Copy those parts to array as integers
    for (int i = 0; i < input_list.length() && i < current_array_size; i++)
        array.replace(i, input_list.at(i).toInt() );
    */
}


void MainWindow::on_ExecuteButton2_clicked()
{

    QString input_text = ui->InputBox2->toPlainText();

    if(input_text.isEmpty())
        return;

    //Check for letters or symbols
    for (int i = 0; i < input_text.length(); i++)
        if(input_text.at(i).isLetter() || input_text.at(i).isSymbol() || input_text.at(i).isPunct())
            return;

    QStringList list = input_text.split(" ",Qt::SkipEmptyParts);
    int n = 16, k = 0, kmax =0;
    QVector<int> m(n);
    int i=0;
    foreach(QString num, list){
        if (i==n){
            break;
        }
        m[i++] = num.toInt();
    }
    //int m[n];
    //vector<int> m(n);


    int Moda = 0;
    for (int i=0; i<n;i++){
        k = 0;
        for (int j=0; j<n;j++){
            if (m[i] == m[j] && i!=j){
                k+=1;
            }
        }
        if (kmax<k){
            Moda = i;
        }

    }


    ui->Answer2->setText(QString::number(m[Moda]));
}

