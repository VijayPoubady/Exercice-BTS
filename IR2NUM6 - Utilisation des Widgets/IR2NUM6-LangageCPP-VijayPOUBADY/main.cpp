#include "mainwindow.h"
#include "iostream"
#include "QPushButton"
#include <QApplication>
#include "mainwindow.h"

using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    QWidget* w = new QWidget;
    QPushButton* BP1 = new QPushButton("Quitter l'application", w);
    w->resize(300,200);
    BP1->setGeometry(80,70,150,30);
    w->show();
    QObject::connect(BP1,SIGNAL(clicked()),qApp,SLOT (quit()));





    return a.exec();
}
