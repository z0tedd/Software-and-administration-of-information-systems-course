#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv) ;
    qputenv("QT_ASSUME_STDERR_HAS_CONSOLE", "1");
    MainWindow w;
    w.show();
    return a.exec();
}
