#ifndef LIVRO_DE_NOTAS_H
#define LIVRO_DE_NOTAS_H

#include <string>
using std::string;

class LivroDeNotas {
    public:      
        LivroDeNotas(string);
        void setNomeDoCurso(string);
        string getNomeDoCurso();
        void mostrarMensagem();
        void determineMédia();

    private:
        string nomeDoCurso;
};

#endif