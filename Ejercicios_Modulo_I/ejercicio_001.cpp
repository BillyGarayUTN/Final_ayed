#include <iostream>

using namespace std;

/* 
Ejercicio 1 
Dados dos valores numéricos enteros a y b, calcular e informar
la suma: a+b, la diferencia: a-b, y el producto: 
a*b entre dichos valores.
*/


int main() {
    
    int a,b;
    cout << "Ingrese el primer valor entero: ";
    cin >> a;
    cout << "Ingrese el segundo valor entero: ";
    cin >> b;

    cout << "La suma es: " << a + b << endl;
    cout << "La diferencia es: " << a - b << endl;
    cout << "El producto es: " << a * b << endl;

    return 0;
}

