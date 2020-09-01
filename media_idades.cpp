#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int idade, qtd;
    double soma, media;
    cout << "Digite uma idade: ";
    cin >> idade;

    if (idade < 0) 
    {
        cout << "IMPOSSIVEL CALCULAR!" << endl;
    }else
    {
        soma = 0;
        qtd = 0;
        while (idade > 0)
        {
            soma = soma + idade;
            qtd++;
            
            cout << "Digite uma idade: ";
            cin >> idade;
        }
        
        media = soma / qtd;

        cout << "A MEDIA DE IDADES E = " << fixed << setprecision(2) << media << endl;
        
    }
    
    
    return 0;
}