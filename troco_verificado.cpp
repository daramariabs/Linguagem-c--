#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double preco_uni, dinheiro, pagar, troco;
    int quantidade;

    cout << "Preco unitario: R$";
    cin >> preco_uni;

    cout << "Quantidade: ";
    cin >> quantidade;

    cout << "Dinheiro: R$";
    cin >> dinheiro;

    pagar = preco_uni * quantidade;

    cout << fixed << setprecision(2);
    if (dinheiro > pagar)
    {
        troco = dinheiro - pagar;

        cout << "TROCO = R$" << troco;
    }else
    {
        troco = abs(dinheiro - pagar);

        cout << "DINHEIRO INSUFICIENTE. FALTAM  " << troco << " REAIS.";
    }
    
    return 0;
}