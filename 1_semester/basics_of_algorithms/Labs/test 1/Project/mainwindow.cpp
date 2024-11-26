#include "mainwindow.h"
#include <iostream>
#include "./ui_mainwindow.h"
#include <cstdlib>
#include <QWidget>
#include <QMouseEvent>
#include <QDebug>
#include <QMessageLogger>
#include <qpushbutton.h>
#include <QRandomGenerator>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMainWindow)
{
    ui-> setupUi(this);
    /*while(true){
        qDebug()<< QCursor :: pos();
    }
*/
    /*
    pushButton = new QPushButton("Нажми меня", this);
    pushButton->setGeometry(QRect(QPoint(100, 100), QSize(90, 25)));
    pushButton -> setMouseTracking(true);
    //qDebug()<<hasMouseTracking() ;
*/
    //qputenv("QT_ASSUME_STDERR_HAS_CONSOLE", "1");

}
MainWindow::~MainWindow()
{
    //qDebug()<< QCursor :: pos();
    //QWidget::setMouseTracking(true);
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QWidget::close();
}
//void MainWindow::
void MainWindow::mouseMoveEvent(QMouseEvent *event){

    QPoint mousePos = (event -> pos());
    QPoint buttonPos =  ui -> pushButton->pos();
    QSize WindowSize = this -> size();
    QSize buttonSize = ui -> pushButton -> size();
    quint64 RX = QRandomGenerator::global()->bounded(0, WindowSize.width() - buttonSize.width());
    quint64 RY = QRandomGenerator::global()->bounded(0, WindowSize.height() - buttonSize.height()-23);
    if ((mousePos.x() >= buttonPos.x() && mousePos.x() <= buttonPos.x()+buttonSize.width()) && (mousePos.y() <= buttonPos.y()+buttonSize.height() && mousePos.y() >= buttonPos.y())){
            MainWindow::ui -> pushButton ->setGeometry(QRect(QPoint(RX, RY), QSize(buttonSize.width(), buttonSize.height())));
    }

    //qDebug() << (event -> pos());//(event -> pos());
    //

}

