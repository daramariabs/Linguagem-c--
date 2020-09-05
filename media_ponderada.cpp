#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    double v1, v2, v3, media;
    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Digite tres numeros: " << endl;
        cin >> v1 >> v2 >> v3;

        media = ((v1 * 2) + (v2 * 3) + (v3 * 5)) / (2 + 3 + 5);

        cout << "MEDIA = " << fixed << setprecision(1) << media << endl;
    }
    
}