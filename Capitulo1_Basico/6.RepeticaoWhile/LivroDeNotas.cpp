// Livro de Notes 
// Definição de Classe
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include "LivroDeNotas.h"
LivroDeNotas::LivroDeNotas(string name){
    setNomeDoCurso( name );
}

void LivroDeNotas::setNomeDoCurso( string name )
{
    if(name.length() <= 25){
        this->nomeDoCurso  = name;
    }else{
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
    cout << "\nBem vindo ao curso de C++ " << this->nomeDoCurso ;
}

void LivroDeNotas::determineMédia(){
    int total;
    int gradeCounter;
    int grade;
    int media;

    total = 0;
    gradeCounter = 1;

    while (gradeCounter <= 10)
    {
        cout << "Enter grade:";
        cin >> grade;
        total += grade;
        gradeCounter++;
    }
    
    media = total / 10;

    cout << "\nTotal das 10 notas é " << total << endl;
    cout << "Média da Classe é " << media << endl;
}