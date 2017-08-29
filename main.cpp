#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
//    QApplication::setStyle(QStyleFactory::create("cleanlooks"));
    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();

    return a.exec();
}
