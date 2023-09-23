#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int x = 1; // Variavel Global
void useLocal();
void useStaticLocal();
void useGlobal();

int main(){
    int x = 5; //oculta no excopo externo

    cout << "X local dentro da função main é " << x << endl;

    {
        // X(main) != X(Escopo Atual)
        int x = 7;

        cout <<  "X local dentro do escopo é " << x << endl;
    }

    cout << "x local fora do escopo acima" << x << endl;

    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();

    cout << "X local da main é: " << x << endl;
    return 0;

}

void useLocal(){
    int x = 25; // Inicia toda vez que local é chamada.
    cout << "X Local é " << x << "ao entrar na função useLocal" << endl;
    x++;
    cout << "Ao sair do local X é " << x << "ao sair da funçao useLocal" << endl; 
}

void useStaticLocal(){
    static int x = 50; //Inicia na primeiravez que essa variavel é definida.
    cout << "X estático é " << x << " ao entrar na função. useStaticLocal " << endl;
    x++;
    cout << "X estático é" << x << " ao sair da função. useStaticLocal" << endl;
}

void useGlobal(){
    cout << "X global é " << x << " ao entrar na função. useGlobal " << endl;
    x++;
    cout << "X global é " << x << " ao sair da função. useGlobal" << endl;
}


