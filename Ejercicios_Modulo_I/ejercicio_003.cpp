/*
Dado valor numérico entero que se ingresa por teclado, se pide informar:
     La quinta parte de dicho valor,
     el resto de la división por 5 y
     la séptima parte de la quinta parte.  
*/
#include <iostream>
using namespace std;

int main(){
    int valor;
    cout << "Ingrese un valor numérico entero: ";
    cin >> valor;

    cout << "La quinta parte de " << valor << " es: " << valor / 5.0 << endl;
    cout << "El resto de la división por 5 es: " << valor % 5 << endl;
    cout << "La séptima parte de la quinta parte es: " << (valor / 5.0) / 7.0 << endl;

    return 0;
}