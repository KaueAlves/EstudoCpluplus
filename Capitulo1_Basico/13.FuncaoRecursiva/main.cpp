#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

unsigned long factorial (unsigned long);

int main(int argc, char const *argv[])
{
    int numFatorial = 1;
    cout << "\nDigite o numero que deseja verificar o fatorial: " << endl;
    cin >> numFatorial;

    for (short i = 0; i <= numFatorial; i++)
        cout << setw(2) << i << "! = " << factorial(i) << endl;
    return 0;
}

unsigned long factorial (unsigned long number){
    if(number <= 1)
        return 1;
    else
        return number * factorial (number - 1);
}

