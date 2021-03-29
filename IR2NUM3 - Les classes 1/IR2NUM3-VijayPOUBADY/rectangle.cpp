#include "rectangle.h"
#include <iostream>
#include <string.h>
using namespace std;

rectangle::rectangle()
{
    hauteur = 0;
    largeur = 0;
    nom[0] = 0;
    cout<<"Rectangle cree avec H = " <<hauteur<< " et L = "<<largeur<<endl;
}
rectangle::rectangle(double h , double l)
{
    hauteur = h;
    largeur = l;
    nom[0] = 0;
    cout<<"Rectangle cree avec H = " <<h<< " et L = "<<l<<endl;
}
rectangle::rectangle(double h , double l , char const name[30])
{
    hauteur = h;
    largeur = l;
    cout<<"Rectangle cree avec H = " <<h<< " et L = "<<l<<endl;
    strcpy(nom, name);
}
rectangle:: ~rectangle()
{
    cout<<"Rectangle detruit"<<endl;
}
void rectangle:: grossirRectangle(float coef)
{
    hauteur *= coef;
    largeur *= coef;
}
void rectangle:: elargirRectangle(float coefL)
{
    largeur *= coefL;
}
void rectangle:: grandirRectangle(float coefH)
{
    largeur *= coefH;
}
void rectangle::affiche()
{
    cout << "Hauteur du rectangle : "<<hauteur<<endl;
    cout << "Largeur du rectangle : "<<largeur<<endl;
    cout << "Nom du rectangle : "<<nom<<endl;
    cout << "Surface du rectangle : "<<hauteur*largeur<<endl;
    cout << "Perimetre du rectangle : "<<2*(hauteur*largeur)<<endl<<endl;
}
rectangle rectangle::operator+(rectangle r)
{
    rectangle z;
    z.hauteur = hauteur + r.hauteur;
    z.largeur = largeur + r.largeur;
    return r;
}
rectangle rectangle::operator-(rectangle r)
{
    rectangle z;
    z.hauteur = hauteur - r.hauteur;
    z.largeur = largeur - r.largeur;
    return r;
}

