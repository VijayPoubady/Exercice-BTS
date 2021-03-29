#ifndef ROND_H
#define ROND_H
#include "forme.h"


class Rond:public forme
{
public:
    Rond(float valeur_A);
    ~Rond();
    void Surface();
    void Perimetre();

private:
   float diametre;
};

#endif // ROND_H
