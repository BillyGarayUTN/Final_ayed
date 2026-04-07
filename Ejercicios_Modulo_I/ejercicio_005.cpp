/*
Dados dos valores numéricos, informar cual es el mayor y cual es el menor o, si ambos valores son iguales
emitir un mensaje.
*/

#include <iostream>
using namespace std;

int main(){
    int valor1, valor2;
    cout << "Ingrese el primer valor numérico: ";
    cin >> valor1;
    cout << "Ingrese el segundo valor numérico: ";
    cin >> valor2;

    if(valor1 > valor2){
        cout << "El mayor es: " << valor1 << " y el menor es: " << valor2 << endl;
    }else{
        if(valor1 < valor2){
            cout << "El mayor es: " << valor2 << " y el menor es: " << valor1 << endl;
        }else{
            cout << "Ambos valores son iguales." << endl;
        }
    }

    return 0;
}