#include <iostream>
using std::cout;
using std::endl;

#include "LivroDeNotas.h"

int main(int argc, char const *argv[])
{
    LivroDeNotas livrodenotas("Matematica");
    LivroDeNotas livrodenotas2("Historia");

    cout << "Aqui temos o livros de: " << livrodenotas.getNomeDoCurso() << " e " << livrodenotas2.getNomeDoCurso();
    return 0;
}
