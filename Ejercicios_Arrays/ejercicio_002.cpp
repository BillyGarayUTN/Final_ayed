/*
Dado un vector 15 valores, hacer un programa que pueda obtener, 
y sacar por pantalla:
− el mayor de los valores
− el menor de los valores
− el más próximo al promedio
*/

#include <iostream>
using namespace std;

int main(){
    int numeros[15];
    int maximo = 0;
    int minimo = 999999;

    for(int i=0;i<15 ;i++){
        cout<<"Ingrese un numero entero: ";
        cin>>numeros[i];

        if(numeros[i] >= maximo){
            maximo = numeros[i];
        }
        if (numeros[i]<=minimo){
            minimo = numeros[i];
        }
    }

    cout<<"El numero mayor es: "<<maximo<<endl;
    cout<<"El numero menor es: "<<minimo<<endl;

    return 0;
}