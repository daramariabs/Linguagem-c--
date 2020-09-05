#include <iostream>

using namespace std;

int main(){
    int x, y, soma;

    cout << "Digite dois numeros: " << endl;
    cin >> x;
    cin >> y;

    if (x < y)
    {
        soma = 0;
        for (int i = x ; i < y ; i++)
        {
            if (i % 2 != 0)
            {
                soma = soma + i;
            }      
        }
        cout << "SOMA DOS IMPARES = " << soma << endl;

    }else
    {
        soma = 0;
        for (int i = x - 1 ; i > y ; i--)
        {
             if (i % 2 != 0)
            {
                soma = soma + i;
            }         
        }
        cout << "SOMA DOS IMPARES = " << soma << endl;
    }
    
    
    return 0;
}