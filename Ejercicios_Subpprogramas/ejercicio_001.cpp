/*
Confeccione una función que , dado un valor por parámetro, devuelva el módulo de dicho
valor a través de su invocación. Que devuelva un valor a través de su invocación quiere 
decir que tiene que tiene que devolver dicho valor a través del return.
*/

#include <iostream>
using namespace std;

int funcionModulo(int valor){  // Valor pasado por referencia
    int modulo;
    
    if(valor < 0){
        modulo = valor * -1;
    }else{
        modulo = valor;
    }
    
    return modulo;
}

int main(){
    int valor;
    cout << "Ingrese un valor: ";
    cin >> valor;

    int modulo = funcionModulo(valor);

    cout << "El modulo del valor ingresado es: " << modulo << endl;

    return 0;
}

