#ifndef ROUE_H
#define ROUE_H
#include "forme.h"


class Roue
{
public:
    Roue();
    ~Roue();
    void setDiametre(int cote);
    int getDiametre();
private:
   int diametre;

};

#endif // ROUE_H
