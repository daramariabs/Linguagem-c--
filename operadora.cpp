#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int minutos;
    double pagar;
    cout << "Minutos utilizados: ";
    cin >> minutos;

    if (minutos > 100)
    {
        pagar = 50.0 + ((minutos - 100) * 2);
        cout << "VALOR A PAGAR = R$" << fixed << setprecision(2) << pagar;
    }else 
    {
        cout << "VALOR A PAGAR = R$50.00";
    }
    
    return 0;
}