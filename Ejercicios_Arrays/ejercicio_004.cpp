/*
Diseñar un algoritmo recursivo, que permita invertir el contenido de un vector.
Como indica el ejemplo:
    Vector original: 28 35 12 43 56 77
    Vector invertido: 77 56 43 12 35 28
    El algoritmo no podrá usar un vector auxiliar.
*/

#include <iostream>
using namespace std;

// Función recursiva para invertir el vector
void invertirVector(int vector[], int inicio, int fin) {
    // Caso base: si inicio es mayor o igual a fin, ya terminamos
    if (inicio >= fin) {
        return;
    }
    
    // Intercambiar elementos en las posiciones inicio y fin
    int temp = vector[inicio];
    vector[inicio] = vector[fin];
    vector[fin] = temp;
    
    // Llamada recursiva con posiciones más cercanas al centro
    invertirVector(vector, inicio + 1, fin - 1);
}

// Función para mostrar el vector
void mostrarVector(int vector[], int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        cout << vector[i];
        if (i < tamanio - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    const int TAMANIO = 6;
    int numeros[TAMANIO] = {28, 35, 12, 43, 56, 77};
    
    cout << "Vector original: ";
    mostrarVector(numeros, TAMANIO);
    
    // Invertir el vector usando recursión
    invertirVector(numeros, 0, TAMANIO - 1);
    
    cout << "Vector invertido: ";
    mostrarVector(numeros, TAMANIO);
    
    return 0;
}  