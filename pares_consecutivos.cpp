#include <iostream>

using namespace std;

int main(){
    int x, cont, soma;

    cout << "Digite um numero: ";
    cin >> x;

    while (x != 0)
    {
        if (x % 2 == 0)
        {
            soma = 0;
            cont = 0;
            while (cont < 5)
            {
                soma = soma + x;
                x = x + 2;
                cont++;
            }

            cout << "SOMA = " << soma << endl;

        }else
        {
            soma = 0;
            cont = 0;
            x = x + 1;
            while (cont < 5)
            {
                soma = soma + x;
                x = x + 2;
                cont++;
            }

            cout << "SOMA = " << soma << endl;
        }
        
        cout << "Digite um numero: " << endl;
        cin >> x;
    }
    
    return 0;
}