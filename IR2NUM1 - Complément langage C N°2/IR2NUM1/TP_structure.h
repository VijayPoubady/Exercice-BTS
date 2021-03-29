#ifndef TP_STRUCTURE_H
#define TP_STRUCTURE_H

#endif // TP_STRUCTURE_H
typedef enum{BLEU, BLANC, VERT, ROUGE, VIOLET, NOIR, GRIS, JAUNE, MARRON}typeCouleur;
typedef enum{Diesel, Essence, GPL, Electrique}typeMotorisation;
typedef struct{
    char marque[50];
    char type[30];
    typeMotorisation motorisation;
    int annee;
    long kilometrage;
    typeCouleur couleur;
}voiture;

typedef struct{
    char nom[30];
    char adresse[100];
    int nombreMecanicien;
    voiture voitureDansGarage [20];
}garage;
