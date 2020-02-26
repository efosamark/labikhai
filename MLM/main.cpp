#include "mainwindow.h"
#include <QLabel>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QLabel *label = new QLabel ("<h2><i>Hello,</i> " "<font color = red > Qt! </font> </h2>");
    label->show( );

    w.show();
    return a.exec();
}
