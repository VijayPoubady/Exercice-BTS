#include <QCoreApplication>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
char lettres [20];
int i;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    cout << "veuillez tapez 20 caracteres" << endl;
    cin >> lettres[0];
    cout << "Nombre de caracteres" << strlen(lettres) << endl;

    while( strlen(lettres) != 20)
    {
         cout << "veuillez tapez 20 caracteres " << endl;
         cin >> lettres ;
         cout << "Nombre de caracteres : " << strlen(lettres) << endl;
         if( strlen(lettres) == 20)
         {
             cout << "bien vue bg" << endl;
         }

    }
    ofstream monFlux("E:/test.txt");
      //Déclaration d'un flux permettant d'écrire dans le fichier
      // E:/2020-2021/IR/TP Numérique/IR2TP1-Manipulation de fichiers/Vijay.txt
    if(monFlux)
        {
            monFlux << lettres << endl;
           /* monFlux << 42.1337 << endl;
            int age(23);
            monFlux << "J'ai " << age << " ans." << endl;*/
        }

    return a.exec();
}
