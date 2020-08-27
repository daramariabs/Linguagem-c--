#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int codigo, quantidade;
    double pagar;
    cout << "Informe o codigo do produto [1..5]: ";
    cin >> codigo;

    cout << "Quantidade desejada: ";
    cin >> quantidade;

    if (codigo == 1)
    {
        pagar =  5.00 * quantidade;

    }else if (codigo == 2)
    {
        pagar = 3.50 * quantidade;

    }else if(codigo == 3)
    {
        pagar = 4.80 * quantidade;

    }else if (codigo == 4)
    {
        pagar = 8.90 * quantidade;

    }else if (codigo == 5)
    {
       pagar = 7.32 * quantidade;
    }
    
     
     cout << "VALOR A PAGAR = R$" << fixed << setprecision(2) << pagar;
    return 0;
}