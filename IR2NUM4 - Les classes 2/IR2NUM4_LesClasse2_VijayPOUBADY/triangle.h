#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "forme.h"

class Triangle:public forme
{
public:
    Triangle(float valeur_A, float valeur_B);
    ~Triangle();
    void Surface();
    void Perimetre();

private:
   float coteOpose;
   float coteAdjacent;
};

#endif // TRIANGLE_H
