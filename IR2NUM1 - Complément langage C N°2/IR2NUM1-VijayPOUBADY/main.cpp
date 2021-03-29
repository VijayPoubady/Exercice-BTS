#include <QCoreApplication>
#include <TP_structure.h>
#include <iostream>
void affiche(garage *p2);
void saisieGarage(garage *p, int nbGarage);
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int nbGarage(2);
    garage tousLesGarages[5];
    saisieGarage(&tousLesGarages[0],nbGarage );
    affiche(&tousLesGarages[0]);
    return a.exec();
}
void saisieGarage(garage *p, int nbGarage){
    for(int i=0; i<nbGarage; i++){
        garage garage1;
        garage garage2;
        cout << "Veulliez saisir les information d'un garage"  << endl;
        cout << "nom:";
        cin >> *(p+i)->nom;
        cout << "adresse:";
        cin >> *(p+i)->adresse;
        cout << "nombre de mecanicien:";
        cin >> (p+i)->nombreMecanicien;
        cout << endl << "Veulliez saisir les information des deux voitures"  << endl;
        cout << "marque:";
        cin >> (p+i)->voitureDansGarage[0].marque;
        cout << "type:";
        cin >> (p+i)->voitureDansGarage[0].type;
        cout << "motorisation:";
        int motor;
        cout << "choisissez le carburant 0:Diesel 1:Essence 2:GPL 3:Electrique" << endl;
        cin >> motor;
        for(int i=0; i<4; i++){
            if(motor == i){
               (p+i)->voitureDansGarage[0].motorisation = typeMotorisation(i);
            }
        }
        cout << "annee:";
        cin >> (p+i)->voitureDansGarage[0].annee;
        cout << "kilometrage:";
        cin >> (p+i)->voitureDansGarage[0].kilometrage;
        int clr;
        cout << "choisissez la couleur de la voiture : 0:BLEU, 1:BLANC, 2:VERT, 3:ROUGE, 4:VIOLET, 5:NOIR, 6:GRIS, 7:JAUNE, 8:MARRON" << endl;
        cin >> clr;
        for(int i=0; i<9; i++){
            if(clr == i){
               (p+i)->voitureDansGarage[0].couleur = typeCouleur(i);
            }
        }
        return ;
    }
}

void affiche(garage *p2){
    int i=0;
    cout << "Nom du garage:" << *(p2+i)->nom << endl;
    cout << "adresse du garage:" << *(p2+i)->adresse << endl;
    cout << "Nombre de mecanicien:" << (p2+i)->nombreMecanicien << endl;
    cout << "Marque de la voiture:" << *(p2+i)->voitureDansGarage[0].marque << endl;
    cout << "Type de la voiture:" << *(p2+i)->voitureDansGarage[0].type << endl;
    cout << "Moteur de la voiture:" << (p2+i)->voitureDansGarage[0].motorisation << endl;
    cout << "Annee de la voiture:" << (p2+i)->voitureDansGarage[0].annee << endl;
    cout << "Kilometrage de la voiture:" << (p2+i)->voitureDansGarage[0].kilometrage << endl;
    cout << "Couleur de la voiture:" << (p2+i)->voitureDansGarage[0].couleur << endl;
}
