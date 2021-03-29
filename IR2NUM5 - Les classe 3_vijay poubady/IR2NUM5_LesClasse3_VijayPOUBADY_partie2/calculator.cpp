#include "calculator.h"
#include<iostream>

using namespace std;

template<typename Gen>
Calculator<Gen>::Calculator()
{
    num1 = 0;
    num2 = 0;
    cout<<"num1 ="<<num1<<"num2 ="<<num2<<endl;
}

template<typename Gen>
Calculator<Gen>::Calculator(Gen X, Gen Y)
{
    num1 = X;
    num2 = Y;
    cout<<"num1 ="<<num1<<"num2 ="<<num2<<endl;
}

template<typename Gen>
Calculator<Gen>::~Calculator()
{
    cout<<"Fin de Calculator"<<endl;
}

template<typename Gen>
Gen Calculator<Gen>::Add()
{
    Gen resultat1;
    resultat1 = num1 + num2;
    return resultat1;
}
template<typename Gen>
Gen Calculator<Gen>::Sous()
{
    Gen resultat2;
    resultat2 = num1 - num2;
    return resultat2;
}

template<typename Gen>
Gen Calculator<Gen>::Mult()
{
    Gen resultat3;
    resultat3 = num1 * num2;
    return resultat3;
}

template<typename Gen>
Gen Calculator<Gen>::Div()
{
    Gen resultat4;
    resultat4 = num1 / num2;
    return resultat4;
}

template<typename Gen>
void Calculator<Gen>::DisplayResult()
{
    cout<<"Le resultat de l'addition est :"<<Add()<<endl;
    cout<<"Le resultat de la soustraction est :"<<Sous()<<endl;
    cout<<"Le resultat de la multiplication est :"<<Mult()<<endl;
    cout<<"Le resultat de la division est :"<<Div()<<endl;


}

template<typename Gen>
Gen Calculator<Gen>::ModifNum1(Gen chiffre1)
{
    cin>>chiffre1;
    num1 = chiffre1;

}

template<typename Gen>
Gen Calculator<Gen>::ModifNum2(Gen chiffre2)
{
    cin>>chiffre2;
    num2 = chiffre2;

}
