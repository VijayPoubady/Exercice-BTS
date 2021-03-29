#include <QCoreApplication>
#include <iostream>
using namespace std;
typedef struct{
 int notes[5][100];
 int noteParMatiere[5];
}TableauxNotes;
typedef struct{
 char Nom[30];
 TableauxNotes notes;
}Eleves

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Eleves eleves[50];
    Eleves *ptr = eleves;
    int reponse1(0), reponse2(0),reponse3(0),nbrNote(0);
    do{
    //*********Choix de l'élève
    do{
    cout << "Donnez le numéro de l'élève concerné (entre 0 et 50) :" << endl;
    cin >> reponse1;
    }while(reponse1 < 0 && reponse1 > 50);
    //*********Choix de la fonction
    do{
    cout << "Que voulez-vous faire ?" << endl;
    cout << " 1 Saisir une note." << endl;
    cout << " 2 Calculer une moyenne." << endl;
    cout << " 3 Visualiserlenom de l'élève." << endl;
    cout << " 4 Saisie du nom de l'élève." << endl;
    cout << " 5 Quitter." << endl;
    cin >> reponse2;
    }while(reponse2 < 1 && reponse2 >5);
    //*********Saisie de notes
    if (reponse2 == 1){
    //*********Choix de la matière
    do{
    cout << "Choisissez la matière :" << endl;
    cout << " 1 Français." << endl;
    cout << " 2 Maths." << endl;
    cout << " 3 HistGeo." << endl;
    cout << " 4 STI." << endl;
    cout << " 5 EPS." << endl;
    cin >> reponse3;
    }while(reponse3 < 1 && reponse3 > 5);
        //*********Choix du nombre de note
         do{
         cout << "Combien de note voulez-vous saisir (<100) ?" << endl;
         cin >> nbrNote;
         }while(nbrNote > 1 && nbrNote < 100);
         ………………………………………………………………….. = …………………;
         //Saisie des notes
         for(int i=0; i<……………………….; i++){
         cout << "Note N°" << (…………) << " = " << endl;
         cin >> …………………………………………………………………;
         }
         }
         //*********Calcul de la moyenne
         else if(……………………………){
         //*********Choix de la matière
         do{
         cout << "Choisissez la matière :" << endl;
         cout << " 1 Français." << endl;
         cout << " 2 Maths." << endl;
         cout << " 3 HistGeo." << endl;
         cout << " 4 STI." << endl;
         cout << " 5 EPS." << endl;
         cin >> reponse3;
         }while(……………………………………….);
         //*********Calcul
         int moyenne(0);
         for(int i=0; i<…………………………………………………………; i++){
         …………………………………………………………………………………;
         }
         ……………………………………………………………………………………….;
         cout << "La moyenne de l'élève = " << …………………………….. << endl;
         }
         //*********Visualiser le nom de l'élève
         else if(……………………………..){
         cout << "Le nom de l'élève est : " << …………………………… << endl;
         }
         //*********Saisie du nom de l'élève
         else if(……………………………..){
         cout << "Saisissez le nom de l'élève (<30 caractères) :" << endl;
         cin >> ……………………………………;
         }
         }while(…………………………………….);
         return 0;
        }


    return a.exec();
}
