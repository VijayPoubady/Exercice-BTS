#include "carre.h"
#include <iostream>
#include "roue.h"

using namespace std;

Carre::Carre(float valeur_A)
{
    cote = valeur_A;
    maRoue1.setDiametre(cote);
    maRoue2.setDiametre(cote);
    cout<<"Creation d'un carre : cote = "<<cote<<endl;
    cout<<"Diametre de la roue1 = " << maRoue1.getDiametre() << endl;
    cout<<"Diametre de la roue2 = " << maRoue2.getDiametre() << endl;


}
Carre::~Carre()
{
    cout<<"Destruction d'un carre"<<endl;
}
void Carre::Surface()
{
    surface = cote*cote;
}
void Carre::Perimetre()
{
    perimetre = 4*cote;
}

