#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "forme.h"


class Rectangle:public forme
{
public:
    Rectangle(float valauer_A, float valeur_A);
    ~Rectangle();
    void Surface();
    void Perimetre();

private:
   float hauteur;
   float largeur;
};

#endif // RECTANGLE_H
