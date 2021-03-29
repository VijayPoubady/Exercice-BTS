#ifndef RECTANGLE_H
#define RECTANGLE_H


class rectangle
{
public:
    rectangle();
    rectangle(double h , double l);
    rectangle(double h , double l , char const name[30]);
    ~rectangle();
    void grossirRectangle (float coef);
    void elargirRectangle (float coefL);
    void grandirRectangle (float coefH);
    void affiche();
    rectangle operator+(rectangle r);
    rectangle operator-(rectangle r);


private:
    double hauteur;
    double largeur;
    char nom[30];

};


#endif // RECTANGLE_H
