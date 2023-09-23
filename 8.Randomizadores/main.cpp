#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <iomanip>
using std::setw;

// Randomizador simples
#include <cstdlib>
using std::rand;
using std::srand;

// Randomizador complexo/preciso
#include <random>
using std::uniform_real_distribution;


double randomizarDouble(double,double);
int    randomizarInt(int);

int main(){

    // Gerara valores a partir desta semente, e eles serão sempre os mesmos.
    // só funciona para a função rand
    srand(10);

    for (int i = 1; i <= 20; i++)
    {
     
        // Comnete as funções para testar
        // Escolhe um numero inteiro aleatório de 1 a 6
        cout << setw(10) << randomizarInt(6);

        // Escolhe um numero flutuante aleatório de 0 a 100
        cout << setw(10) << randomizarDouble(0.0,10.0);

        if(i % 5 == 0){
            cout << endl;
        }
    }
    
    return 0;

};

double randomizarDouble(double x, double y){
    std::random_device rd;
    std::default_random_engine generator(rd());  
    uniform_real_distribution<double> distribution(x,y);

    return distribution(generator);
}

int randomizarInt(int x){
    return (1+rand() % x);
}