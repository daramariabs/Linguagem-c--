#include <iostream>

using namespace std;

int main(){
    int n, i;

    cout << "Deseja a tabuada para qual valor? ";
    cin >> n;

    for ( i = 1; i <= 10; i++)
    {
        cout << n << " X " << i << " = " << n * i  << endl;
    }
    
    return 0;
}