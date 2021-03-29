#include <QCoreApplication>
#include <iostream>
#include "forme.h"
#include "carre.h"
#include "rectangle.h"
#include "triangle.h"
#include "rond.h"



using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    forme *P1, *P2, *P3, *P4;

    P1 = new Carre(12) ;
    P1->Surface();
    P1->Perimetre();
    P1->affiche();
    cout<<""<<endl;
    P2 = new Rond(10);
    P2->Surface();
    P2->Perimetre();
    P2->affiche();
    cout<<""<<endl;
    P3 = new Triangle(7, 8);
    P3->Surface();
    P3->Perimetre();
    P3->affiche();
    cout<<""<<endl;
    P4 = new Rectangle(8 , 12);
    P4->Surface();
    P4->Perimetre();
    P4->affiche();
    cout<<""<<endl;
    delete P1;
    delete P2;
    delete P3;
    delete P4;


    return a.exec();
}
