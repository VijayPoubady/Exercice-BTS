#include <QCoreApplication>
#include <iostream>

using namespace std;

template <typename tableauDeGenerique>
tableauDeGenerique somme(tableauDeGenerique tab[], int nbr);


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   //int tab1[5] = {10,20,30,40,50};
   int* tab1 = new int[5]{10,20,30,40,50};
   cout << "tab1[5] = {10,20,30,40,50};" << endl;
   int nbr1=5;
   cout<<"maSomme1 = "<<somme<int>(tab1,nbr1)<<endl;

   //float tab2[7] = {10.5,20.4,30,40,50,60,70};
   float* tab2 = new float [7]{10.5,20.4,30,40,50,60,70};
   cout << "tab2[7] = {10.5,20.4,30,40,50,60,70};" << endl;
   int nbr2=7;
   cout<<"maSomme2 = "<<somme<float>(tab2,nbr2)<<endl;

   delete[] tab1;
   delete[] tab2;
   return a.exec();
}

template <typename tableauDeGenerique>
tableauDeGenerique somme(tableauDeGenerique tab[], int nbr)
{
    tableauDeGenerique somme = 0;
    for(int i(0); i<nbr; ++i)
    {
        somme += tab[i];
    }

    return somme;
}
