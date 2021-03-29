#ifndef FORME_H
#define FORME_H


class forme
{
public:
    forme();
    virtual ~forme();
    virtual void Surface();
    virtual void Perimetre();
    void affiche();

protected:
    float surface;
    float perimetre;
};

#endif // FORME_H
