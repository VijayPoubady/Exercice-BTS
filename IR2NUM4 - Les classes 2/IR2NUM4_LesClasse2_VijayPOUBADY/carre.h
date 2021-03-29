#ifndef CARRE_H
#define CARRE_H
#include "forme.h"
#include "roue.h"

class Carre:public forme
{
public:
    Carre(float valeur_A);
    ~Carre();
    void Surface();
    void Perimetre();


private:
   float cote ;
   Roue maRoue1;
   Roue maRoue2;
};

#endif // CARRE_H
