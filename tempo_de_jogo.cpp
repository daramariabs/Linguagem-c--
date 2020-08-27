#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int hora_inicial, hora_final, duracao;

    cout << "Inicio do jogo: ";
    cin >> hora_inicial;

    cout << "Final do jogo: ";
    cin >> hora_final;

    if (hora_inicial < hora_final)
    {
        duracao = abs(hora_inicial - hora_final);
    }
    else
    {
        duracao = 24 - hora_inicial + hora_final ;
    }
    
    cout << "O JOGO DUROU " << duracao << " hora(s).";

    return 0;
}