#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double c, f, temperatura;
    char escala;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)?";
    cin >> escala;

    if(escala == 'c'){
        cout << "Digite a temperatura em Celsius: ";
        cin >> c;

        temperatura = 1.8 * c + 32;

        cout << "Temperatura equivalente em Fahrenheit: " << fixed << setprecision(2) << temperatura;
    }else
    {
        cout << "Digite a temperatura em Fahrenheit:";
        cin >> f;

        temperatura = (f - 32) / 1.8;

        cout << "Temperatura equivalente em Celsius: " << fixed << setprecision(2) << temperatura;
    }
    
    return 0;
}