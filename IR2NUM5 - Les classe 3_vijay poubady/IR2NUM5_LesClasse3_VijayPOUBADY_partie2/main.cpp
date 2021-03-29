#include <QCoreApplication>
#include<iostream>
#include"calculator.h"
#include"calculator.cpp"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Calculator<int>* pt1= new Calculator<int>();


    pt1->ModifNum1(20);
    pt1->ModifNum2(10);
    pt1->DisplayResult();
    delete pt1;
    return a.exec();
}
