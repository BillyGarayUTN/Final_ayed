/*
Leer una lista de 10 valores enteros listarlos por pantalla en sentido 
inverso al que ingresaron.
*/

#include <iostream>
using namespace std;

int main(){
    int numeros[10];

    for(int i= 0 ;i<10 ; i++){
        cout<<"Ingrese un numero entero: ";
        cin>>numeros[i];
    }

    cout<<"Los numeros en orden inverso son: "<<endl;

    for(int j=10 ; j>0 ; j--){
        cout<<numeros[j]<<endl;
    }
    return 0;
}
