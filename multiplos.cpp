#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout << "Informe dois numeros inteiros: " << endl;
    cin >> num1;
    cin >> num2;

    if( num1 % num2 == 0 || num2 % num1 == 0)
    {
        cout << "SAO MULTIPLIOS! ";
    }else
    {
        cout << "NAO SAO MULTIPLIOS! ";
    }
    return 0;
}