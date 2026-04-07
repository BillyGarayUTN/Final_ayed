/*
Dados 50 números enteros, informar el promedio de los mayores que 100
y la suma de los menores que –10.
*/

#include <iostream>
using namespace std;

int main(){
    int numero;

    cout << "Ingrese 50 numeros enteros:" << endl;
    cin>> numero;

    int suma_menores_menos10 = 0;
    int suma_mayores_100 = 0;
    int contador = 0;

    if(numero < -10){
        suma_menores_menos10 += numero;
    }
    if(numero > 100){
        suma_mayores_100 += numero;
        contador ++;
    }
    cout << "La suma de los numeros menores a -10 es: " << suma_menores_menos10 << endl;
    cout << "El promedio de los numeros mayores a 100 es: " << suma_mayores_100/contador << endl;

    return 0;
}