/*
Confeccionar un subprograma que, dados dos vectores de números
enteros liste el contenido de ambos pero en forma ordenada. 
Utilice el algoritmo de apareo.
*/

#include <iostream>
using namespace std;

// Subprograma para ordenar un vector usando burbuja
void ordenarVector(int vector[], int tamanio) {
    for (int i = 0; i < tamanio - 1; i++) {
        for (int j = 0; j < tamanio - i - 1; j++) {
            if (vector[j] > vector[j + 1]) {
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
}

// Subprograma de apareo: combina dos vectores ordenados en uno ordenado
void aparearVectores(int vector1[], int tam1, int vector2[], int tam2, int vectorResultado[]) {
    int i = 0, j = 0, k = 0;
    
    // Comparar elementos de ambos vectores y tomar el menor
    while (i < tam1 && j < tam2) {
        if (vector1[i] <= vector2[j]) {
            vectorResultado[k] = vector1[i];
            i++;
        } else {
            vectorResultado[k] = vector2[j];
            j++;
        }
        k++;
    }
    
    // Copiar elementos restantes del vector1 (si los hay)
    while (i < tam1) {
        vectorResultado[k] = vector1[i];
        i++;
        k++;
    }
    
    // Copiar elementos restantes del vector2 (si los hay)
    while (j < tam2) {
        vectorResultado[k] = vector2[j];
        j++;
        k++;
    }
}

// Subprograma para mostrar un vector
void mostrarVector(int vector[], int tamanio) {
    cout << "[";
    for (int i = 0; i < tamanio; i++) {
        cout << vector[i];
        if (i < tamanio - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main(){
    const int TAM1 = 5, TAM2 = 4;
    int vector1[TAM1] = {5, 2, 8, 1, 9};
    int vector2[TAM2] = {3, 7, 4, 6};
    int vectorResultado[TAM1 + TAM2];
    
    cout << "Vector 1 original: ";
    mostrarVector(vector1, TAM1);
    
    cout << "Vector 2 original: ";
    mostrarVector(vector2, TAM2);
    
    // Ordenar ambos vectores
    ordenarVector(vector1, TAM1);
    ordenarVector(vector2, TAM2);
    
    cout << "\nVector 1 ordenado: ";
    mostrarVector(vector1, TAM1);
    
    cout << "Vector 2 ordenado: ";
    mostrarVector(vector2, TAM2);
    
    // Aparear los vectores ordenados
    aparearVectores(vector1, TAM1, vector2, TAM2, vectorResultado);
    
    cout << "\nVector resultado (apareado): ";
    mostrarVector(vectorResultado, TAM1 + TAM2);
    
    return 0;
}