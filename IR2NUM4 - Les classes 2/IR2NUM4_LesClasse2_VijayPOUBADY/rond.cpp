#include "rond.h"
#include <iostream>

using namespace std;

Rond::Rond(float valeur_A)
{
    diametre = valeur_A;
    cout<<"Creation d'un rond : diametre = "<<diametre<<endl;

}
Rond::~Rond()
{
    cout<<"Destruction d'un rond"<<endl;
}
void Rond::Surface()
{
    surface = 3.14 *(diametre/2)*(diametre/2);
}
void Rond::Perimetre()
{
    perimetre = 3.14*diametre;
}
