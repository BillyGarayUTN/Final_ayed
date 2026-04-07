/*
Dado un triángulo representado por sus lados lado1, lado2 y lado3,
determinar e indicar según corresponda: “equilátero”, “isósceles” o “escálenos”.
*/

#include <iostream>
using namespace std;

int main(){
    float lado1, lado2, lado3;
    cout << "Ingrese el valor del lado 1: ";
    cin >> lado1;
    cout << "Ingrese el valor del lado 2: ";
    cin >> lado2;
    cout << "Ingrese el valor del lado 3: ";
    cin >> lado3;

    if(lado1 == lado2 && lado2 == lado3){
        cout << "El triángulo es equilátero." << endl;
    } else if(lado2 != lado1 && lado3 != lado1 && lado3 != lado2){
        cout << "El triángulo es escáleno." << endl;
    } else {
        cout << "El triángulo es escáleno." << endl;
    }

    return 0;
}