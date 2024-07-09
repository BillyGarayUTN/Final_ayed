#include <iostream>

using namespace std;
/*
-  ingresar un valor entero N (<30) y a continuacion un conjunto de N elementos . Si el ultimo 
 elemento del conjunto TIENE UN VALOR MENOR QUE 10 IMPRIMIR LO NEGATIVOS Y EN CASO 
 contrario los demas.

*/
int main(){
    int n;
    cout << "Ingresa un valor N (<30): ";
    cin >> n;

   // int arr[n];
    int arrNegativo[n];
    int arrPositivo[n];

    // pone en donde corresponda el array
    int valor;
    int topePositivo = 0;
    int topeNegativo = 0;

    // pedir valores
    for(int i=0; i < n ; i++){

    cout << "Ingresa un valor ";
    cin>> valor;
    if (valor<0){
        arrNegativo[topeNegativo] = valor;
        topeNegativo++;
    }else{
        arrPositivo[topePositivo] = valor;
        topePositivo++;
    }
    }

    if(arrNegativo[topeNegativo+1] < 10 || arrPositivo[topePositivo+1]<10){
        // imprimier los negativos
        for(int j= 0;j<topeNegativo;j++ ){
            cout << arrNegativo[j] <<endl;
        }
    }else{
        // imprimir los demas 
        for(int j= 0;j<topePositivo;j++ ){
            cout << arrPositivo[j] <<endl;
        }
        // imprimir los demas 
    }



    return 0;
}