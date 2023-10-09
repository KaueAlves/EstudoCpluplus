// Exercicio para mostrar a ordem dos construtores e destrutores
// A ordem varia de acordo com a linha do código, se é global ou local, e o quaão interno de um escopo ele está.
// As funções exit,abort,

#include <iostream>
using namespace std;
#include "CreateAndDestroy.h"

void create(void);
CreateAndDestroy first(1,"(global antes da main )"); // Objeto global 

int main(){
    cout << "\nFUNÇÃO MAIN: EXECUÇÃO COMEÇA" << endl;
    CreateAndDestroy second(2, "(local automatic in main)");
    static CreateAndDestroy third(3, "(local static na main)");
    create();

    cout << "\nFUNÇÃO MAIN: EXECUÇÃO CONTINUA" << endl;
    CreateAndDestroy forth(4, "(local automatic in main)");
    cout << "\nFUNÇÃO MAIN: EXECUÇÃO TERMINA" << endl;

    return 0;
}

void create(void){
    cout << "\nCRIA FUNÇÃO: EXECUÇÃO COMEÇA" << endl;
    CreateAndDestroy(5, "(local automatic in create)");
    CreateAndDestroy(6, "(local static in create)");
    CreateAndDestroy(7, "(local automatic in create)");
    cout << "\nCRIA FUNÇÃO: EXECUÇÃO TERMINA" << endl;
}