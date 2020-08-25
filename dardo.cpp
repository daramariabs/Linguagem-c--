#include <iostream>

using namespace std;

int main(){
    double tentativa1, tentativa2, tentativa3, maior;

    cout << "Tentativas: " << endl;
    cin >> tentativa1;
    cin >> tentativa2;
    cin >> tentativa3;

    if (tentativa1 > tentativa2 and tentativa1 > tentativa3)
    {
        maior = tentativa1;
    }else
    {
        if (tentativa2 > tentativa3)
        {
            maior = tentativa2;
        }else 
        {
            maior = tentativa3;
        }   
    }

    cout << "MAIOR DISTANCIA = " << maior;
    
    
    return 0;
}