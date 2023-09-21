#ifndef LIVRO_DE_NOTAS_H
#define LIVRO_DE_NOTAS_H

#include <string>

class LivroDeNotas {
public:
    // Construtor
    LivroDeNotas(std::string nome);

    // Método para definir o nome do livro
    void definirNome(std::string nome);

    // Método para exibir o nome do livro
    void exibirNome() const;

private:
    std::string nomeDoLivro;
};

#endif