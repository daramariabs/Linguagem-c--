#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, quadrado, triangulo, trapezio;

    cout << "Informe a media A: ";
    cin >> a;

    cout << "Informe a medida B: ";
    cin >> b;

    cout << "Informe a media C: ";
    cin >> c;

    quadrado = pow(a,2);
    triangulo = (a * b) / 2;
    trapezio = (c * (a + b)) / 2;

    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << quadrado << endl;
    cout << "AREA DO TRIANGULO RETANGULO = " << triangulo << endl;
    cout << "AREA DO TRAPEZIO = " << trapezio ;
    return 0;
}