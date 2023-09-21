#include <iostream>
using std::endl;
using std::cout;

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

int main()
{

  LivroDeNotas livroDeNotas("Portugues");
  livroDeNotas.mostrarMensagem();

  return 0;
}