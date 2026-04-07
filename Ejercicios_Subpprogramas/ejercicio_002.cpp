/*
Modifique el programa anterior para convertir el subprograma en un procedimiento 
(return void). El valor absoluto debe aplicarse directamente sobre el parámetro
actual (pasaje por referencia).
*/

#include <iostream>
using namespace std;

void procedimientoModulo(int &valor){  // Valor pasado por referencia
    if(valor < 0){
        valor = valor * -1;
    }
}


int main(){
    int valor;
    cout << "Ingrese un valor: ";
    cin >> valor;

    procedimientoModulo(valor);

    cout << "El modulo del valor ingresado es: " << valor << endl;


    return 0;
}