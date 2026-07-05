/*
Ejercicio de Integración: Mayor, Menor y Posición (Bloque 4)
Este desafío es fundamental para dominar la lógica imperativa. El enunciado dice:
Se ingresa un valor n (cantidad de números a procesar).
Luego, se ingresan esos n números uno por uno.

Al finalizar, el programa debe informar:

1. Cuál fue el número mayor y en qué posición se ingresó.
2. Cuál fue el número menor y en qué posición se ingresó.

*/

#include <iostream>
using namespace std;

int main(){
    int numeroMayor;
    int numeroMenor;

    cout <<"Ingrese un valor n (cantidad de numeros a procesar): ";
    int cantidad;
    cin >> cantidad;

    int numero = 0;

    int contadorMenor = 1;
    int contadorMayor = 1;

    numeroMayor = numero;
    numeroMenor = numero;

    for(int contador=1;contador<=cantidad;contador++){
    cout << "ingrese un numero: ";
    cin>> numero;

        // 3. Inicialización en la primera vuelta (if (contador == 1))
        if (contador == 1) {
            numeroMayor = numero;
            contadorMayor = contador;
            numeroMenor = numero;
            contadorMenor = contador;
        } else {
            // Comparaciones para las vueltas siguientes
            if (numero > numeroMayor) {
                numeroMayor = numero;
                contadorMayor = contador;
            }
            if (numero < numeroMenor) {
                numeroMenor = numero;
                contadorMenor = contador;
            }
        }

    }
    cout<<"el numero mayor es: "<< numeroMayor <<" se encuentra en la posicion "<<contadorMayor<<endl;
    cout<<"el numero menor es: "<< numeroMenor <<" se encuentra en la posicion "<<contadorMenor;

    return 0;
}