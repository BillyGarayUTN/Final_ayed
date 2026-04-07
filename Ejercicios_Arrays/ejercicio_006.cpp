/*
Realice un subprograma que muestre el contenido de un vector en forma ordenada
descendentemente. El tamaño del array es informado por parámetro.
*/

#include <iostream>
using namespace std;

// Subprograma para ordenar el vector de forma descendente
void ordenarDescendente(int vector[], int tamanio) {
    int aux;

    // Algoritmo de ordenamiento burbuja descendente
    for (int i = 0; i < tamanio; i++) {
        for (int j = 0; j < tamanio; j++) {
            if (vector[j] > vector[j + 1]) {
                // Intercambiar elementos
                aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }
}

// Subprograma para mostrar el contenido del vector
void mostrarVector(int vector[], int tamanio) {
    cout << "Vector ordenado descendentemente: ";
    for (int i = 0; i < tamanio; i++) {
        cout << vector[i];
        if (i < tamanio - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

int main(){
    int tamanio;
    cout << "Ingrese el tamaño del vector: ";
    cin >> tamanio;

    if (tamanio <= 0) {
        cout << "Error: El tamaño debe ser mayor a 0." << endl;
        return 1;
    }

    int vector[100]; // Usamos tamaño fijo para evitar problemas
    
    // Llenar el vector
    cout << "Ingrese los elementos del vector:" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> vector[i];
    }
    
    // Mostrar vector original
    cout << "\nVector original: ";
    for (int i = 0; i < tamanio; i++) {
        cout << vector[i];
        if (i < tamanio - 1) cout << " ";
    }
    cout << endl;
    
    // Ordenar el vector de forma descendente
    ordenarDescendente(vector, tamanio);
    
    // Mostrar el vector ordenado
    mostrarVector(vector, tamanio);

    return 0;
}