#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <vector>
using std::vector;

void outputVector( const vector <int> & );
void inputVector( vector <int> &);

int main(){

    vector< int > integers1( 7 );
    vector< int > integers2( 10 );

    // imprime o tamanho e o conteúdo de intergs1
    cout << "Size of vector integers1 is " << integers1.size() << "\nvector after initialization:" << endl;
    outputVector( integers1 );

    // imprime o tamanho e o contéudo de integers 2
    cout << "Size of vector integers2 is " << integers2.size() << "\nvector after initialization:" << endl;
    outputVector( integers2 );

    // insere e imprime integers1 e integers2
    cout << "\nEnter 17 integers:" << endl;
    inputVector (integers1);
    inputVector (integers2);

    cout << "\nAfter input, the vectors contain:\n" << "integers1" << endl;
    cout << "intergers2:" << endl;
    outputVector( integers1 );
    cout << "integers2:" << endl;
    inputVector( integers2 );

    if (integers1 != integers2)
        cout << "integers1 and integers2 are not equal" << endl;

    // Cria o vector integers 3 utilizando integers1 como um
    // inicializador; imprimi o tamanho do conteúdo
    vector< int > integers3(integers1);

    cout << "\nSize of vector integers3 is " << integers3.size() << "\nvector after initialization:" << endl;
    outputVector( integers3 );

    // utiliza operador atribuição = sobrecarregado
    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2;

    cout << "integers1" << endl;
    outputVector(integers1);
    cout << "integers2" << endl;
    outputVector(integers2);

    // Utiliza operador de igualdade ( == ) com objetos vector
    cout << "\nEvaluating integers1 == integers2" << endl;

    if(integers1 == integers2 )
        cout << "integers1 and integers2 are equal" << endl;

    // utiliza conchetes para criar rvalue
    cout << "\nintegers1[5] is " << integers1[5];

    // utiliza o colchetes para criar lvalue[]
    cout << "\nAssingning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1:" << endl;
    outputVector(integers1);

    // tentativa de utilizar subscrito fora do intervalo
    // cout << "\nTentativa de fefinir 1000 no vector integers1.at(15)" << endl;
    // integers1.at(15) = 1000; // Erro fora do intervalo
    return 0;
} // fim de main

void outputVector(const vector<int> &array){
    size_t i;
    
    for (i = 0; i < array.size(); i++)
    {
        cout << setw(12) << array[i];

        if((i+1)%4 == 0)
            cout << endl;
    }

    if(i % 4 !=0)
        cout << endl;
    
}

void inputVector( vector<int> &array){
    for (size_t i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }
    
}