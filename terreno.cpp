#include <bits/stdc++.h>

using namespace std;

int main(){
    double largura, comprimento, valor_metro, area, preco_terreno;

    cout << "Digite a largura do terreno: ";
    cin >> largura;

    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;

    cout << "Digite o valor do metro quadrado: ";
    cin >> valor_metro;

    area = largura * comprimento;

    preco_terreno = area * valor_metro;

    cout << fixed << setprecision(2);
    cout << "AREA DO TERRENO = " << area << endl;
    cout << "PRECO DO TERRENO = " << preco_terreno ;

    return 0;
}