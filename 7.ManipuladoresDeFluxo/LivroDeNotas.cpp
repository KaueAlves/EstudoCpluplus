// Livro de Notes 
// Definição de Classe
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::fixed;

#include <string>
using std::string;

#include <iomanip>
using std::setprecision;

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
    cout << "\nBem vindo ao curso de C++ " << this->nomeDoCurso << endl;
}

void LivroDeNotas::determineMédia(){
    int total;
    int gradeCounter;
    int grade;
    double media;

    total = 0;
    gradeCounter = 0;

    // Fase de entrada    
    cout << "\nEntre o valor da nota ou digite -1 para encerrar a contagem" << endl;
    cin >> grade;
    
    // -1 Será nosso valor sentineala
    while (grade != -1){
        total += grade;
        gradeCounter++;

        // Fase de entrada    
        cout << "\nEntre o valor da nota ou digite -1 para encerrar a contagem" << endl;
        cin >> grade;
    }

    if(grade == 0)
        cout << "\nNenhuma nota foi inserida" << endl;

    // Utilizando um CAST para converter um dos valores em double.
    // Ao fazer uma operação de DOUBLE com um INT, o compilador transforma ambos e retorna um valor do tipo DOUBLE
    media = static_cast<double>(total) / 10;

    cout << "\nTotal das 10 notas é " << total << endl;

    // Setprecicion define quantidade de casas decimais
    // fixed mostra todos os zeros a direita até o limite do setprecision
    cout << "\nMédia da Classe é " << setprecision(2) << fixed << media << endl;
}