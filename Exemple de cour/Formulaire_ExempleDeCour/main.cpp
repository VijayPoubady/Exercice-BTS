#include "mainwindow.h"
#include<iostream>
#include <QApplication>
#include "QLineEdit"
#include "QPushButton"
#include "QFormLayout"
#include "QWidget"
#include "QButtonGroup"
#include "QRadioButton"
#include "QVBoxLayout"
#include "QHBoxLayout"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *wd = new QWidget;

    QLineEdit *nom = new QLineEdit;
    QLineEdit *prenom = new QLineEdit;
    QLineEdit *age = new QLineEdit;


    QFormLayout *layoutFormulaire = new QFormLayout;

    layoutFormulaire->addRow("Votre nom", nom);
    layoutFormulaire->addRow("Votre prenom", prenom);
    layoutFormulaire->addRow("Votre age", age);

    //***************************************************************************************

    QRadioButton *radio1 = new QRadioButton ("&Bouton radio 1");
    QRadioButton *radio2 = new QRadioButton ("&Bouton radio 2");
    QRadioButton *radio3 = new QRadioButton ("&Bouton radio 3");
    radio1->setChecked(true);

    QButtonGroup *group = new QButtonGroup();
    group->addButton(radio1);
    group->addButton(radio2);
    group->addButton(radio3);

    QVBoxLayout* pt1 = new QVBoxLayout;
    pt1->addWidget(radio1);
    pt1->addWidget(radio2);
    pt1->addWidget(radio3);

    //***************************************************************************************

    QHBoxLayout* pt2 = new QHBoxLayout;
    pt2->addLayout(layoutFormulaire);
    pt2->addLayout(pt1);

    //***************************************************************************************

    QPushButton* Bt1 = new QPushButton("&Bouton1");
    QPushButton* Bt2 = new QPushButton ("&Bouton2");

    QHBoxLayout* pt3 = new QHBoxLayout;

    pt3->addWidget(Bt1);
    pt3->addWidget(Bt2);

    //***************************************************************************************

    QVBoxLayout *layoutTotal = new QVBoxLayout;

    layoutTotal->addLayout(pt2);
    layoutTotal->addLayout(pt3);
    wd->setLayout(layoutTotal);
    wd->show();
    return a.exec();
}
