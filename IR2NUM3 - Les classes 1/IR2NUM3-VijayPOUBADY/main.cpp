#include <QCoreApplication>
#include <iostream>
#include "rectangle.h"
#include "rectangle.cpp"
#include "string.h"

using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    rectangle *rectangle1 = new rectangle;
    rectangle *rectangle2 = new rectangle (2 , 4);
    rectangle *rectangle3 = new rectangle (3 , 5 , "rect3sur5");

    rectangle1->affiche();
    rectangle2->affiche();
    rectangle3->affiche();

    rectangle1->elargirRectangle(10);
    rectangle2->grandirRectangle(10);
    rectangle3->grossirRectangle(10);

    rectangle1->affiche();
    rectangle2->affiche();
    rectangle3->affiche();

    rectangle rec1(2,10);
    rectangle rec2(3,20);
    rectangle rec3;

    rec3 = rec1 + rec2;

    rec3.affiche();

    delete rectangle1;
    delete rectangle2;
    delete rectangle3;
    return a.exec();
}
