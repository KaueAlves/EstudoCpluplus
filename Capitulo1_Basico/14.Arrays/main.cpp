#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <iomanip>
using std::setw;

int main(int argc, char const *argv[])
{
    // Primeiro exemplo - 
    int n[] = {1,2,3,4,5,6,7,8,9,10};

    for (unsigned short i = 0; i < (sizeof(n) / sizeof(n[0])) ; i++)
    {
        cout << setw(3) << n[i];
       
    }
    
    cout << endl;

    // Segundo exemplo - 
    int tam = 5;
    int m[] = {1,2,3,4,5};

    for (unsigned short i = 0; i < tam; i++)
    {
        cout << setw(3) << m[i];
    }

    cout << endl;
    
    // Terceiro exemplo
    const int tamX = 2;
    const int tamY = 2;

    int matriz[tamX][tamY] = {1,2,3,4};

    for (unsigned short i = 0; i < tamX; i++)
        for (unsigned short l = 0; l < tamY; l++)
            cout << setw(3) << matriz[i][l];
        
    

    
    return 0;
}


