#include "LivroDeNotas.h"
#include <iostream>
using std::cout;

int main() {
    // Criar uma instância da classe LivroDeNotas
    LivroDeNotas meuLivro("Meu Livro de Anotações");
    cout << meuLivro.getNomeDoCurso();

    return 0;
}