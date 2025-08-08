/*
Ejercicio 2 
Dados  dos  valores  numéricos  enteros  a  y  b  calcular  e  informar  el  cosiente  a/b.  Considere  que  b  puede  ser  
cero. En ese caso mostrar el correspondiente mensaje de error

*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    if (b != 0) {
        cout << "El cociente a/b es: " << a / b << endl;
    } else {
        cout << "Error: Division por cero no permitida." << endl;
    }

    return 0;
}