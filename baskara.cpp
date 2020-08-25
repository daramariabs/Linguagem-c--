#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, x1, x2, delta;

    cout << "Coeficiente A: ";
    cin >> a;

    cout << "Coeficiente B: ";
    cin >> b;

    cout << "Coeficiente C: ";
    cin >> c;

    delta = exp2(b) - 4 * a * c;
    ///cout << "Delta " << delta;

    if (delta < 0)
    {
        cout << "Esta equacao nao possui raizes." << endl ;
    }
    else{
        x1 = - b + sqrt(delta) / 2*a;
        cout << "X1 = " << fixed << setprecision(4) << x1 << endl;

        x2 = -b - sqrt(delta) / 2*a;
        cout << "X2 = " << fixed << setprecision(4) << x2 << endl;
    }
    
    return 0;
}