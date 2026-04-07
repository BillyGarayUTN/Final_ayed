/*
Se ingresa un valor numérico entero n, se pide desarrollar un algoritmo 
que muestre por consola los primeros n números naturales.
*/

#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << "ingrese un numero entero: " << endl;
    cin >> n;


    for(int i= 1; i<=n ;i++){
        cout << i << endl;
    }

    return 0;
}