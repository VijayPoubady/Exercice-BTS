#include <QCoreApplication>
#include <iostream>

double *tableau = new double [10];


using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    for(int i = 1 ; i < 11 ; i++){
       tableau[i]=i*i;
        cout << "valeur du tableau:  " << tableau[i] << "   " << &tableau[i] << endl;
    }

//    for(int i = 1 ; i < 11 ; i++){
//        cout << "valeur du tableau:  " << tableau[i] << "   " << &tableau[i] << endl;

//    }
    delete[] tableau;

    return a.exec();
}
