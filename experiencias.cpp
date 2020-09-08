#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    int qtd_cobaia, n, rato, sapo, coelho, total;
    double perc_rato, perc_sapo, perc_coelho;
    char cobaia;

    cout << "Quantos casos ira digitar? ";
    cin >> n;

    rato = 0;
    sapo = 0;
    coelho = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Quantidade de cobaias: ";
        cin >> qtd_cobaia;
        cout << "Tipo de cobaia: ";
        cin >> cobaia;

        if (cobaia == 'r')
        {
            rato = rato + qtd_cobaia;

        }else if (cobaia == 's')
        {
            sapo = sapo + qtd_cobaia;

        }else if (cobaia == 'c')
        {
            coelho = coelho + qtd_cobaia;

        }
          
    }

    total = rato + sapo + coelho;

    perc_rato = (double) (rato * 100) / total;
    perc_sapo = (double) (sapo * 100) / total;
    perc_coelho = (double) (coelho * 100) / total;

    cout << fixed << setprecision(2);
    cout << "TOTAL DE COBAIAS = " << total << endl;
    cout << "QUANTIDADE DE RATOS = " << rato << endl;
    cout << "PERCENTUAL DE RATOS = " << perc_rato << endl;
    cout << "QUANTIDADE DE SAPOS = " << sapo << endl;
    cout << "PERCENTUAL DE SAPOS = " << perc_sapo << endl;
    cout << "QUANTIDADE DE COELHOS = " << coelho << endl;
    cout << "PERCENTUAL DE COELHOS = " << perc_coelho << endl;

    return 0;
}