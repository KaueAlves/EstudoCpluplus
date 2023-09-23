#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

#include <iomanip>
using std::setw;

int rolarDados();
int randomizarInt(int);

int main()
{
    enum Status { CONTINUE, GANHOU, PERDEU };
    int meusPontos;
    Status gameStatus;

    srand(time(0));

    int somaDosDados = rolarDados();

    switch (somaDosDados)
    {
    case 7:
    case 11:
        gameStatus = GANHOU;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = PERDEU;
        break;
    default:
        gameStatus = CONTINUE;
        meusPontos = somaDosDados;
        cout << "Meus pontos são: " << meusPontos << endl; 
        break;
    }

    while( gameStatus == CONTINUE){
        somaDosDados = rolarDados();

        if(somaDosDados == meusPontos){
            gameStatus = GANHOU;
        }else{
            if(somaDosDados == 7)
                gameStatus = PERDEU;
        }
    }

    if(gameStatus == GANHOU)
        cout << "Jogador Venceu !!" << endl;
    else
        cout << "Jogador Perdeu" << endl;

    return 0;

}

int rolarDados(){

    int dado1 = randomizarInt(6);
    int dado2 = randomizarInt(6);

    int soma = dado1 + dado2;

    cout << "O Jogador rolou: " << setw(2) << dado1 << " + " << setw(2) << dado2 << " = " << setw(2) <<soma <<endl;
    return soma; 
}

int randomizarInt(int x){
    return (1+rand() % x);
}