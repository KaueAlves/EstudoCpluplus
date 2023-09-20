#include <iostream>
using std::endl;
using std::cout;

#include <string>
using std::string;

class GradeBook{
    public:
    GradeBook(string name){
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

  GradeBook livroDeNotas("Portugues");
  livroDeNotas.mostrarMensagem();

  return 0;
}