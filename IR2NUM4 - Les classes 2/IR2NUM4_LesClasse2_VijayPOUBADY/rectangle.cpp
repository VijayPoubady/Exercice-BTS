#include "rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(float valeur_A, float valeur_B)
{
    hauteur = valeur_A;
    largeur = valeur_B;
    cout<<"Creation d'un rectangle :hauteur ="<<hauteur <<" largeur = " <<   largeur<<endl;

}
Rectangle::~Rectangle()
{
    cout<<"Destruction d'un rectangle"<<endl;
}
void Rectangle::Surface()
{
    surface = hauteur*largeur;
}
void Rectangle::Perimetre()
{
    perimetre = 2*(hauteur/largeur);
}

