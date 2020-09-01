#include <iostream>

using namespace std;

int main(){
    int x, y;

    cout << "Informe o valor de X: ";
    cin >> x;

    cout << "Informe o valor de Y: ";
    cin >> y;

    while (x != y)
    {
       if (x < y)
       {
           cout << " CRESCENTE!" << endl;
       }else
       {
           cout << "DECRESCENTE! " << endl;
       }

        cout << "Informe o valor de X: ";
        cin >> x;

        cout << "Informe o valor de Y: ";
        cin >> y;
    }
    
    return 0;
}