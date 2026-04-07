/*
Dados tres valores numéricos diferentes, indicar cual es el menor, 
cual está en el medio y cual es el mayor.
*/

#include <iostream>
using namespace std;

int main(){
    int valor1, valor2, valor3;
    cout << "Ingrese el primer valor numérico: ";
    cin >> valor1;
    cout << "Ingrese el segundo valor numérico: ";
    cin >> valor2;
    cout << "Ingrese el tercer valor numérico: ";
    cin >> valor3;

    int menor, medio, mayor;

    if (valor1 < valor2) {
        if (valor1 < valor3) {
            menor = valor1;
            if (valor2 < valor3) { medio = valor2; mayor = valor3; }
            else { medio = valor3; mayor = valor2; }
        } else {
            menor = valor3; medio = valor1; mayor = valor2;
        }
    } else {
        if (valor2 < valor3) {
            menor = valor2;
            if (valor1 < valor3) { medio = valor1; mayor = valor3; }
            else { medio = valor3; mayor = valor1; }
        } else {
            menor = valor3; medio = valor2; mayor = valor1;
        }
    }

    cout << "Menor: " << menor << "\nMedio: " << medio << "\nMayor: " << mayor << endl;
    return 0;
}