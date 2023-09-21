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
    nomeDoCurso = name;
}

string LivroDeNotas::getNomeDoCurso(){
    return nomeDoCurso;
}

void LivroDeNotas::mostrarMensagem(){
    cout << "Bem vindo ao curso de C++ " << nomeDoCurso;
}

