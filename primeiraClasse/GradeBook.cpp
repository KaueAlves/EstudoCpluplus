#include <iostream>
#include <string>

using namespace std;

class GradeBook{
    public:
        void DisplayName(){
            cout << "Bem vindo ao Livro de Notas";
        }
};


int main (){
  GradeBook livroDeNotas;
  livroDeNotas.DisplayName();  
}