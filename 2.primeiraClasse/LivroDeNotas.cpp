#include <iostream>
#include <string>

using namespace std;

class LivroDeNotas{
    public:
        void DisplayName(){
            cout << "Bem vindo ao Livro de Notas";
        }
};


int main (){
  LivroDeNotas livroDeNotas;
  livroDeNotas.DisplayName();  
}