#include "mainwindow.h"
#include "iostream"
#include "QPushButton"
#include <QApplication>
#include "mainwindow.h"
#include "QSlider"
#include "QLCDNumber"
#include "QGridLayout"

using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    QWidget* w = new QWidget;
    QWidget* wd = new QWidget;
    QPushButton* BP1 = new QPushButton("Quitter l'application", w);
    w->resize(300,200);
    BP1->setGeometry(80,130,150,30);

    QObject::connect(BP1,SIGNAL(clicked()),qApp,SLOT (quit()));
    QSlider* monSlide = new QSlider(Qt::Horizontal, w);
    monSlide->setValue(50);
    monSlide->move(30,40);
    QLCDNumber* monLCD = new QLCDNumber(w);
    monLCD->display(50);
    monLCD->move(190,40);
    QObject::connect(monSlide,SIGNAL(valueChanged(int)),monLCD,SLOT (display(int)));
    QGridLayout* layout = new QGridLayout;
    layout->addWidget(monSlide,0,1,1,2);
    layout->addWidget(monLCD,0,0,1,1);
    layout->addWidget(BP1,1,0,1,3);
    w->setLayout(layout);
    w->show();


    w->show();

    return a.exec();
}
