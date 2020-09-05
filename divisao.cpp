#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n, num, den;
    double divisao;
    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    for (int i = 0; i < n ; i++)
    {
        cout << "Numerador: ";
        cin >> num;

        cout << "Denominador: ";
        cin >> den;    

        if (den == 0)
        {
            cout << "DIVISAO IMPOSSIVEL! " << endl;
            
        }else
        {
            divisao = (double) num / den;
            cout << "DIVISAO = " << fixed << setprecision(2) << divisao << endl;
        }

           
    }
    
    return 0;
}