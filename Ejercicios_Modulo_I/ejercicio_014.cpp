/*
Dados dos valores numéricos enteros, calcular e informar su producto 
mediante sumas sucesivas.
*/

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Ingrese el primer valor entero: ";
    cin >> a;
    cout << "Ingrese el segundo valor entero: ";
    cin >> b;
    int sumatoria= 0;

    for(int i = 1; i<=b ;i++){
        sumatoria = a + sumatoria;
    }

    cout << "El producto es: " << sumatoria << endl;
    return 0;
}
