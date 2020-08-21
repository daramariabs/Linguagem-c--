#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main(){
    int idade;
    double salario, altura;
    char genero;
    string nome;

    cout << "Digite um nome: ";
    getline(cin, nome);

    cout << "Informe o sexo [F/M]: ";
    cin >> genero;

    cout << "Informe a idade: ";
    cin >> idade;

    cout << "Informe o salario: ";
    cin >> salario;
    
    cout << fixed << setprecision(2);
    cout << "A funcionaria " << nome << ", do sexo " << genero << 
        ", Ganha " << salario << " e tem " << idade << " anos.";
    return 0;
}