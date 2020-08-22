#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double troco, preco_uni, dinheiro;
    int quantidade;

    cout << "Valor do produto: R$";
    cin >> preco_uni;

    cout << "Quantidade: ";
    cin >> quantidade;

    cout << "Valor em dinheiro: R$";
    cin >> dinheiro;

    troco = abs((preco_uni * quantidade) - dinheiro) ;

    cout << "TROCO = R$" << fixed << setprecision(2) << troco ;

    return 0;
}