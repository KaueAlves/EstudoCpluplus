// Livro de Notes 
// Definição de Classe

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class LivroDeNotas{
    public:
    LivroDeNotas(string name){
        setNomeDoCurso( name );
    }

    void setNomeDoCurso( string name )
    {
        nomeDoCurso = name;
    }
    
    string getNomeDoCurso(){
        return nomeDoCurso;
    }

    void mostrarMensagem(){
        cout << "Bem vindo ao curso de C++ " << nomeDoCurso;
    }

    private:
        string nomeDoCurso;
};
