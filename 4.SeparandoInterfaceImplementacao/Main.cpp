#include "classes/LivroDeNotas.h"

int main() {
    // Criar uma instância da classe LivroDeNotas
    LivroDeNotas meuLivro("Meu Livro de Anotações");

    // Exibir o nome do livro
    meuLivro.exibirNome();

    // Definir um novo nome para o livro
    meuLivro.definirNome("Novo Nome do Livro");

    // Exibir o novo nome do livro
    meuLivro.exibirNome();

    return 0;
}