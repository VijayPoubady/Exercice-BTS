#include "roue.h"
#include <iostream>

using namespace std;

Roue::Roue()
{
    diametre = 0;
    cout<<"Creation d'une roue" <<endl;

}
Roue::~Roue()
{
    cout<<"Destruction d'une roue"<<endl;
}
void Roue::setDiametre(int cote)
{
    diametre = cote/4;
}

int Roue::getDiametre()
{
    return diametre;
}
