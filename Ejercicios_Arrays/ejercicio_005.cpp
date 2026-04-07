/*
Hacer un programa que permita realizar la suma y el producto de dos 
vectores. El usuario deberá poder elegir el tamaño del vector
(entre 2 y 10 valores).
*/

#include <iostream>
using namespace std;

int main(){
    int tamanio;
    
    // Validar tamaño del vector
    do {
        cout << "Ingrese el tamaño de los vectores (entre 2 y 10): ";
        cin >> tamanio;
        
        if (tamanio < 2 || tamanio > 10) {
            cout << "Error: El tamaño debe estar entre 2 y 10." << endl;
        }
    } while (tamanio < 2 || tamanio > 10);
    
    // Declarar los vectores
    int vector1[10];
    int vector2[10];
    int vectorSuma[10];
    int vectorProducto[10];
    
    // Leer el primer vector
    cout << "\nIngrese los elementos del primer vector:" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> vector1[i];
    }
    
    // Leer el segundo vector
    cout << "\nIngrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> vector2[i];
    }
    
    // Calcular suma y producto
    for (int i = 0; i < tamanio; i++) {
        vectorSuma[i] = vector1[i] + vector2[i];
        vectorProducto[i] = vector1[i] * vector2[i];
    }
    
    // Mostrar resultados
    cout << "\n--- RESULTADOS ---" << endl;
    
    cout << "Vector 1:     ";
    for (int i = 0; i < tamanio; i++) {
        cout << vector1[i];
        if (i < tamanio - 1) cout << " ";
    }
    cout << endl;
    
    cout << "Vector 2:     ";
    for (int i = 0; i < tamanio; i++) {
        cout << vector2[i];
        if (i < tamanio - 1) cout << " ";
    }
    cout << endl;
    
    cout << "Suma:         ";
    for (int i = 0; i < tamanio; i++) {
        cout << vectorSuma[i];
        if (i < tamanio - 1) cout << " ";
    }
    cout << endl;
    
    cout << "Producto:     ";
    for (int i = 0; i < tamanio; i++) {
        cout << vectorProducto[i];
        if (i < tamanio - 1) cout << " ";
    }
    cout << endl;

    return 0;
}