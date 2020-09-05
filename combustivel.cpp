#include <iostream>

using namespace std;

int main(){
    int tipo, alcool, gasolina, diesel ;

    cout << "Informe um codigo (1.Alcool, 2.Gasolina, 3.Diesel) ou 4 para parar: ";
    cin >> tipo;

    alcool = 0;
    gasolina = 0;
    diesel = 0;
    while (tipo != 4)
    {
        if (tipo == 1)
        {
            alcool++;

        }else if (tipo == 2)
        {
           gasolina++;

        }else if (tipo == 3)
        {
            diesel++;
        }

        cout << "Informe um codigo (1.Alcool, 2.Gasolina, 3.Diesel) ou 4 para parar: ";
        cin >> tipo;
        
    }
    
    cout << "MUITO OBRIGADA! " << endl;
    cout << "ALCOOL = " << alcool << endl;
    cout << "GASOLINA = " << gasolina << endl;
    cout << "DIESEL = " << diesel << endl;
    return 0;
}