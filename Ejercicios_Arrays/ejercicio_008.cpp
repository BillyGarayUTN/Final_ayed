/*
Convertir una tabla de 6 x 5 en un vector ordenado de mayor a menor.
*/

/*
Convertir una tabla de 6 x 5 en un vector ordenado de mayor a menor.
*/

#include <iostream>
using namespace std;

// Subprograma para convertir tabla a vector
void tablaAVector(int tabla[6][5], int vector[]) {
    int indice = 0;
    
    // Recorrer la tabla fila por fila
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            vector[indice] = tabla[i][j];
            indice++;
        }
    }
}

// Subprograma para ordenar vector de mayor a menor (burbuja descendente)
void ordenarDescendente(int vector[], int tamanio) {
    for (int i = 0; i < tamanio - 1; i++) {
        for (int j = 0; j < tamanio - i - 1; j++) {
            if (vector[j] < vector[j + 1]) {  // Para orden descendente
                // Intercambiar elementos
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
}

// Subprograma para mostrar la tabla
void mostrarTabla(int tabla[6][5]) {
    cout << "Tabla original 6x5:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "| ";
        for (int j = 0; j < 5; j++) {
            cout << tabla[i][j] << "\t";
        }
        cout << "|" << endl;
    }
    cout << endl;
}

// Subprograma para mostrar el vector
void mostrarVector(int vector[], int tamanio) {
    cout << "Vector ordenado de mayor a menor:" << endl;
    cout << "[";
    for (int i = 0; i < tamanio; i++) {
        cout << vector[i];
        if (i < tamanio - 1) cout << ", ";
    }
    cout << "]" << endl;
}

// Subprograma para cargar datos en la tabla
void cargarTabla(int tabla[6][5]) {
    cout << "Ingrese los valores para la tabla 6x5:" << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> tabla[i][j];
        }
    }
}

int main() {
    const int FILAS = 6;
    const int COLUMNAS = 5;
    const int TOTAL_ELEMENTOS = FILAS * COLUMNAS;  // 30 elementos
    
    int tabla[FILAS][COLUMNAS];
    int vector[TOTAL_ELEMENTOS];
    
    // Cargar datos en la tabla
    cargarTabla(tabla);
    
    // Mostrar tabla original
    mostrarTabla(tabla);
    
    // Convertir tabla a vector
    tablaAVector(tabla, vector);
    
    // Ordenar vector de mayor a menor
    ordenarDescendente(vector, TOTAL_ELEMENTOS);
    
    // Mostrar vector ordenado
    mostrarVector(vector, TOTAL_ELEMENTOS);
    
    return 0;
}