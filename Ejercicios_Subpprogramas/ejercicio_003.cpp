/*
Confeccione una función que reciba un número entero n y devuelva el 
factorial de dicho número.
*/

#include <iostream>
using namespace std;

int factorialDe(int& valor){
    int modulo;
    
    if(valor < 0){
        modulo = valor * -1;
    }else{
        modulo = valor;
    }
    
    return modulo;
}

int main(){
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    int factorial = factorialDe(numero);

    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}


