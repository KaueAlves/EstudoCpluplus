#include "LivroDeNotas.h"
#include <iostream>

// Implementação do construtor
LivroDeNotas::LivroDeNotas(std::string nome) {
    definirNome(nome);
}

// Implementação do método para definir o nome do livro
void LivroDeNotas::definirNome(std::string nome) {
    nomeDoLivro = nome;
}

// Implementação do método para exibir o nome do livro
void LivroDeNotas::exibirNome() const {
    std::cout << "Nome do Livro: " << nomeDoLivro << std::endl;
}