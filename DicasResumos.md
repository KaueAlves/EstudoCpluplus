# Resumos e dicas

---
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

---
    // setw - Define quantidade de caracteres exibidos na saida
        #include <iomanip>
        using std::setw;
        cout << setw(10) << 120; 

---
    // rand - Seleciona numeros aleatórios, de 1 ao numero definido após o %
        #include <cstdlib>
        using std::rand;
        int randomizarInt(int x){
            return (1+rand() % x);
        }

        // Randomiza valores double
        #include <random>
        using std::uniform_real_distribution;
        double randomizarDouble(double x, double y)
        {
            std::random_device rd;
            std::default_random_engine generator(rd());  
            uniform_real_distribution<double> distribution(x,y);
            return distribution(generator);
        }
----
    // Criando um alias ou apelido para a variavel.
    // &refY faz referencia ao endereço de memoria de Y, fazendo com que toda operação que utilize o &refY, esteja na verdade utilizando o y.
        int y = 10;
        int &refY = y;
