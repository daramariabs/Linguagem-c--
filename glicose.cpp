#include <iostream>

using namespace std;

int main(){
    double glicose;

    cout << "Media da glicose: ";
    cin >> glicose;

    if (glicose <= 100)
    {
        cout << "CLASSIFICAÇÃO: NORMAL";
    }else if(glicose <= 140)
    {
        cout << "CLASSIFICAÇÃO: ELEVADO";
    }else
     {
          cout << "CLASSIFICAÇÃO: DIABETES";
     }
           
   
    return 0;
}