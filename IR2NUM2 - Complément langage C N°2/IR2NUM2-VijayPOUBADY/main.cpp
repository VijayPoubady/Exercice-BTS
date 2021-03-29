#include <QCoreApplication>
#include <iostream>


void minmax(int i, int j, int* max, int* min);

using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int A = 0;
    int B = 0;
    int leMax = 0;
    int leMin = 0;
    int &refDeMax = leMax;
    int &refDeMin = leMin;

    cout << "veuillez proposer deux valeurs pour :" << endl;
    cout << "valeur de A:" << endl;
    cin >> A ;
    cout << "valeur de B:" << endl;
    cin >> B ;
    minmax(A, B, &refDeMax, &refDeMin);

    cout << "Le Max = " << leMax << endl;
    cout << "Le Min = " << leMin << endl;

    return a.exec();
}
void minmax(int i, int j, int* max, int* min){

    if(j < i){
        *max = i;
        *min = j;
        cout << "Le Max = " << i << endl;
        cout << "Le Min = " << j << endl;
    }

    if(j > i){
        *max = j;
        *min = i;
        cout << "Le Max = " << j << endl;
        cout << "Le Min = " << i << endl;
    }

    if(j == i){
        cout << "Les chiffres sont egaux" << endl;
    }

}

