#include <iostream>

using namespace std;

int main(){
    int num1, num2, num3, menor;

    cout << "Primeiro numero: ";
    cin >> num1;

    cout << "Segundo numero: ";
    cin >> num2;

    cout << "Terceiro numero: ";
    cin >> num3;

    if ( num1 < num2 and num1 < num3)
    {
        menor = num1;
    }else
    {
        if (num2 < num3)
        {
            menor = num2;
        }else
        {
            menor = num3;
        }       
    }
    
    cout << "MENOR = " << menor;
    return 0;
}