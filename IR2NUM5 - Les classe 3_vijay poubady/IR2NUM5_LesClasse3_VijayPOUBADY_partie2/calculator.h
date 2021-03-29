#ifndef CALCULATOR_H
#define CALCULATOR_H

template<typename Gen>
class Calculator
{
public:
    Calculator();
    ~Calculator();
    Calculator(Gen X, Gen Y);
    Gen Add();
    Gen Sous();
    Gen Mult();
    Gen Div();
    void DisplayResult();
    Gen ModifNum1(Gen chiffre1);
    Gen ModifNum2(Gen chiffre2);


private:
    Gen num1;
    Gen num2;
};

#endif // CALCULATOR_H
