#include "forme.h"
#include <iostream>

using namespace std;

forme::forme()
{
    surface = 0;
    perimetre = 0;
    cout<<"Creation d'une forme"<<endl;
}
forme::~forme()
{
    cout<<"Destruction d'une forme"<<endl;
}
void forme::Surface()
{

}
void forme::Perimetre()
{

}

void forme::affiche()
{
    cout<<"La surface est de :"<<surface<<endl;
    cout<<"Le perimetre est de :"<<perimetre<<endl;
}
