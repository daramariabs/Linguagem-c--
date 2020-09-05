#include <iostream>

using namespace std;

int main(){
    double x, y;

    cout << "Coordenadas X e Y:" << endl;
    cin >> x;
    cin >> y;

    while (x != 0 && y != 0)
    {
        if (x > 0 && y > 0)
        {
           cout << "QUADRANTE 1" << endl;

        }else if (x < 0 && y > 0)
        {
            cout << "QUADRANTE 2" << endl;

        } else if (x < 0 && y < 0)
        {
            cout << "QUADRANTE 3" << endl;

        } else if (x > 0 && y < 0)
        {
            cout << "QUADRANTE 4" << endl;
        }
        
        cout << "Coordenadas X e Y: " << endl;
        cin >> x;
        cin >> y;   
        
    }
    
    return 0;
}