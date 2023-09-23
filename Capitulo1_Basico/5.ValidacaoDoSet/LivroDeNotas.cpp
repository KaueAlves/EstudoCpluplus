// Livro de Notes 
// Definição de Classe
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "LivroDeNotas.h"
LivroDeNotas::LivroDeNotas(string name){
    setNomeDoCurso( name );
}

void LivroDeNotas::setNomeDoCurso( string name )
{
    if(name.length() <= 25)
        this->nomeDoCurso  = name;

    if(name.length() > 25){
        this->nomeDoCurso  = name.substr(0,25);
        cout << "Nome \"" 
        << name
        << "\" excede a quantidade maxima de (25).\n" 
        << "Limitando o nome aos primeiros 25 caracteres.\n" << endl;
    }
}

string LivroDeNotas::getNomeDoCurso(){
    return this->nomeDoCurso ;
}

void LivroDeNotas::mostrarMensagem(){
    cout << "Bem vindo ao curso de C++ " << this->nomeDoCurso ;
}

