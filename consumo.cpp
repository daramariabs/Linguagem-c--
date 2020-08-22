#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double distancia, combustivel, consumo;

    cout << "Informe a distancia (km):";
    cin >> distancia;

    cout << "Combustivel gasto: ";
    cin >> combustivel;

    consumo = distancia / combustivel;

    cout << "CONSUMO MEDIO = " << fixed << setprecision(3) << consumo;
    return 0;
}