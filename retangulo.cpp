#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double base, altura, area, perimetro, diagonal;

    cout << "Base do retangulo: ";
    cin >> base;

    cout << "Altura do retangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(base * base + altura * altura);

    cout << fixed << setprecision(4);
    cout << "AREA DO RETANGULO = " << area << endl;
    cout << "PERIMENTRO DO RETANGULO = " << perimetro << endl;
    cout << "DIAGONAL DO RETANGULO = " << diagonal ;
    return 0;
}