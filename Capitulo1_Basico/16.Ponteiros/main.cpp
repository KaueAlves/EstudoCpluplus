#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Cria-se os protótipos das funções e seus respectivos ponteiros
// As funções Quadruplicar e Calcular mostram 2 maneiras de se passarem funções como argumento.
// Os ponteiros podem ser definidos dentro de um escopo {}
int Dobrar( int );
int (*ptrDobrar)( int );

int Triplicar ( int );
int (*ptrTriplicar)( int );

typedef int (*FuncaoInt)(int);
int Quadruplicar ( int , FuncaoInt); 
int (*ptrQuadruplicar)( int , FuncaoInt);

int Calcular( int , int (*)(int));
int (*ptrCalcular)( int , int (*)(int));


int main(int argc, char const *argv[])
{

    // Cria uma variavel int constante
    // Cria um ponteiro int constante para uma variavel constante
    const int a = 10;
    const int* const ptrA = &a;

    // Cria uma variavel, mutavel.
    // Cria um ponteiro int constante para uma variavel mutavel
    int b = 10;
    const int *ptrB = &b;

    // Cria uma variavel de array
    // Cria um ponteiro que aponta para um array
    // As variaveis de Array por padrão, apontam para o primeiro endereço de memoria da sequencia alocada por ele.
    // Por isso, na declaração podemos utilizar o operador de atribuição ( = ) para apontar diretamente para a variavel do Array.
    int c[] = {1,2,3,4,5,6};
    int *ptrC = c;

    // Cria uma variavel matriz
    // O C++ não permite criar um ponteiro sem passar o valor das colunas.
    // Então a declaração de um ponteiro para uma matriz bidimensional segue outro padrão.
    int d[2][3] = 
                {
                   {1,2,3},
                   {4,5,6}
                };
    int (*ptrD)[3] = d;
    
    cout << *ptrD[0] << " " << *ptrD[0]+1 << " " << *ptrD[0]+2 << endl;
    cout << *ptrD[1] << " " << *ptrD[1]+1 << " " << *ptrD[1]+2 << endl;

    // EXEMPLO DE DEFINIÇÃO DE PONTEIRO DE FUNÇÃO DENTRO DA MAIN()
    /*
        int (*ptrDobrar)( int ) = Dobrar;
        int (*ptrTriplicar)( int ) =  Triplicar;
        int (*ptrQuadruplicar)( int , FuncaoInt) =  Quadruplicar;
        int (*ptrCalcular)( int , int (*)(int)) = Calcular;
    */

    // Atribui o ponteiro a função
    ptrDobrar = Dobrar;
    ptrTriplicar = Triplicar;
    ptrQuadruplicar = Quadruplicar;
    ptrCalcular = Calcular;
    int (*f[2])(int) = {Dobrar,Triplicar};

    cout << "Função Dobrar utilizando o ponteiro 'ptrDobrar', resultado: " << ptrDobrar(4) << endl;
    cout << "Função Triplicar utilizando o ponteiro 'ptrTriplicar', resultado: " <<  ptrTriplicar(5) << endl;
    cout << "Função Quadruplicar utilizando o ponteiro 'ptrQuadruplicar', resultado: " << ptrQuadruplicar(5,ptrDobrar) << endl;
    cout << "Função Calcular utilizando o ponteiro 'ptrCalcular', resultado: " << ptrCalcular(5,ptrDobrar) << endl; 
    cout << "Função Dobrar utilizando array de ponteiro f[2], resultado:" << f[0](4) << endl;
    cout << "Função Triplicar utilizando array de ponteiro f[2], resultado:" << f[1](5) << endl;

    return 0;
}

// Declaração

int Dobrar( int numero){
    return numero * 2;
}
int Quadruplicar( int numero, FuncaoInt func){
    return func(func(numero));
}
int Triplicar ( int numero){
    return numero * 3;
}
int Calcular( int numero, int (*Duplicar)(int)){
    return (*Duplicar)(numero);
}
