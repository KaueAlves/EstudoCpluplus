#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int volumeCubo( int largura = 1, int altura = 1, int profundidade = 1);

int main(int argc, char const *argv[])
{

    cout << "Valor base do cubo é:  " << volumeCubo() << endl;
    cout << "Valor do cubo com parametro largura " << volumeCubo(5) << endl;
    cout << "Valor do cubo com parametro largura e altura " << volumeCubo(5,5) << endl;
    cout << "Valor do cubo com parametro largura,altura e profundidade " << volumeCubo(5,5,5) << endl;

    return 0;
}

int volumeCubo(int largura, int altura, int profundidade){
    return largura * altura * profundidade;
}