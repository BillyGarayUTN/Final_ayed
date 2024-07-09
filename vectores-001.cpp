#include <iostream>

using namespace std;
/*
1- ingresar un valor N (<25) .Generar un arreglo de N componentes en el cual las 
mismas contengan los primeros numeros naturales pares e imprimirlos

*/

int main() {
    int N;

    cout << "Ingresa un valor N (<25): ";
    cin >> N;

    int arr[N];

    // Generar el arreglo con los primeros N números naturales pares
    for (int i = 0, num = 2; i < N; num += 2, i++) {
        arr[i] = num;
    }

    // Imprimir los elementos del arreglo
    cout << "Los primeros " << N << " números naturales pares son: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}