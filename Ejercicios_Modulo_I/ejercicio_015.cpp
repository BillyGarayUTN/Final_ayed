/*
Se ingresa un valor numérico entero, se pide calcular e informar su factorial.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "ingrese un numero entero: " << endl;

    cin >> n;

    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial = factorial * i;
    }

    cout << "El factorial es: " << factorial << endl;
    return 0;
}