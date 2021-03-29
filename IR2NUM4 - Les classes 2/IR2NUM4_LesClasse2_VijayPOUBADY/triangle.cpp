#include "triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle(float valeur_A, float valeur_B)
{
    coteOpose = valeur_A;
    coteAdjacent = valeur_B;
    cout<<"Creation d'un Triangle : coteOpose = "<<coteOpose<<" coteAdjacent =  "<<  coteAdjacent<<endl;


}
Triangle::~Triangle()
{
    cout<<"Destruction d'un Triangle"<<endl;
}
void Triangle::Surface()
{
    surface = coteOpose*(coteAdjacent/2);
}
void Triangle::Perimetre()
{
    perimetre = coteOpose + coteAdjacent;
}

