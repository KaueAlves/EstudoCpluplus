#include <iostream>
using std::cout;
using std::endl;

int squareByValue(int);
void squareByReference(int &);

int main(int argc, char const *argv[])
{
    {
        int x = 2;
        int z = 4;

        cout << "X = " << x <<" Antes da função squareByValue" << endl;
        cout << "X = " << squareByValue(x) <<" Depois da função squareByValue" << endl;

        cout << "X = " << z << " Antes da função squareByReference" << endl;
        squareByReference(z);
        cout << "X = " << z << " Antes da função squareByReference" << endl;
    }
    cout << "----------------------" << endl;
    {
        int y = 10;
        int &refY = y;

        cout << "Esse é o valor de Y: " << y << " Esse é o valor da referencia " << refY << endl;

        
        squareByReference(refY);

        cout << "Esse é o valor de Y: " << squareByValue(y) << " Esse é o valor da referencia " << refY << endl;
    }

    return 0;
}

int squareByValue(int number)
{
    return number *= number;
}

void squareByReference( int &numberRef )
{
    numberRef *= numberRef;
}