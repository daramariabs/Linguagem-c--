#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double salario, novo_salario, aumento;
    int porcetagem;

    cout << "Informe o valor do salario: R$";
    cin >> salario;

    if (salario <= 1000)
    {
        porcetagem = 20;
        aumento = (porcetagem * salario) / 100;
        novo_salario = salario + aumento;

    } else if(salario <= 3000)
    {
        porcetagem = 15;
        aumento = (porcetagem * salario) / 100;
        novo_salario = salario + aumento;

    } else if(salario <= 8000)
    {
        porcetagem = 10;
        aumento = (porcetagem * salario) / 100;
        novo_salario = salario + aumento;
    } else 
    {
        porcetagem = 5;
        aumento = (porcetagem * salario) / 100;
        novo_salario = salario + aumento;
    }
    


    cout << fixed << setprecision(2) << endl;
    cout << "NOVO SALARIO = R$" << novo_salario << endl;
    cout << "VALOR DO AUMENTO = R$" << aumento << endl;
    cout << "PORCENTAGEM = " << porcetagem << "%" << endl;
    
    return 0;
}