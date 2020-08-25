#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double nota1, nota2, nota_final;

    cout << "Informe a primeira nota: ";
    cin >> nota1;

    cout << "Informe a segunda nota: ";
    cin >> nota2;

    nota_final = nota1 + nota2;

    cout << "NOTA FINAL = " << fixed << setprecision(1) << nota_final << endl;

    if (nota_final < 60)
    {
        cout << "REPROVADO!";
    }
    
    return 0;
}