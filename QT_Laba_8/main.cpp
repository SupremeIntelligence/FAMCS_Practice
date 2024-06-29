#include "mainwindow.h"
#include<QIcon>
#include <QApplication>
#include<QTextStream>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle("Currency Converter");
    w.setWindowIcon(QIcon("Icon.ico"));
    w.show();

    return a.exec();
}
