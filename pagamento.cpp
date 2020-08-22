#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string nome;
    double valor_hora, pagamento;
    int qtd_hora_trabalhada;

    cout << "Nome: ";
    getline(cin, nome);

    cout << "Horas trabalhadas: ";
    cin >> qtd_hora_trabalhada;

    cout << "Valor da hora: R$";
    cin >> valor_hora;

    pagamento = valor_hora * qtd_hora_trabalhada;

    cout << "O pagamento de " << nome << " sera de R$" << fixed << setprecision(2) << pagamento ;
    return 0;
}