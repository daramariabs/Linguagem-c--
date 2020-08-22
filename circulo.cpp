#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double raio, area;

    cout << "Informe o valor do raio: ";
    cin >> raio;

    area = M_PI * (pow(raio,2));

    cout << "AREA = " << fixed << setprecision(3) << area ;
    return 0 ;
}