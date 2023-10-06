#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

 int main(int argc, char const *argv[])
 {
    Time t;

    cout << "Valor inicial do objeto tempo t é ";
    t.printUniversal();
    cout << endl;
    cout << "Valor padrão do tempo é ";
    t.printStandard();

    t.setTime( 13, 27, 6);

    cout << "\n\nUniversal tempo, depois do setTime ";
    t.printUniversal();
    cout << "\nThe initial standard time is ";
    t.printStandard();

    t.setTime(99,99,99);

    // gera saída de valores t depois de especificar valores invalidos
    cout << "\n\nAfter attempting invalid settings:" << "\nUniversal time: ";
    t.printUniversal();
    cout << "\nStandard time: ";
    t.printStandard();
    cout << endl; 

    return 0;
 }
 