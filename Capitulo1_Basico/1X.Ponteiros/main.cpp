#include <iostream>

// Adiantei o contéudo irei adicionar na ordem correta nos proximos commits

int main(int argc, char const *argv[])
{

    // O ponteiro aponta para o endereço de memoria de outra variavel de mesmo tipo.

    // Quando se tratam de variaveis simples a declaração deve ser feita da seguinte forma: 
    int *p = nullptr;
    int number = 30;
    p = &number; // &  indica que você deseja trabalhar com o endereço da variavel number e não com o seu valor.
    std::cout << "Quando quero trabalhar com o valor de um ponteiro eu uso: *Ponteiro: " << *p << std::endl; 
    std::cout << "Quando quero trabalhar com o endereço de um ponteiro eu uso: Ponteiro: " << p << std::endl;
    
    
    // int age[] = {1,2,3,4,5};

    // p = age;

    // std::cout << *p << std::endl;
    // p++;
    // std::cout << *(p + 2) << std::endl;

    return 0;
}
