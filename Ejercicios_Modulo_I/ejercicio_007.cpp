/*
Dada una terna de números naturales que representan el día, el mes y el año 
de una determinada fecha informarla como un solo número natural de 8 dígitos (aaaammdd).
*/

#include <iostream>
using namespace std;

int main(){
    int dia , mes, anio;
    cout << "Ingrese el día (dd): ";
    cin >> dia;
    cout << "Ingrese el mes (mm): ";
    cin >> mes;
    cout << "Ingrese el año (aaaa): ";
    cin >> anio;

    int fecha;

    fecha = anio * 10000 + mes * 100 + dia;

    cout << "La fecha en formato aaaammdd es: " << fecha << endl;

    return 0;
}