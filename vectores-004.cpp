#include <iostream>

using namespace std;
/*
*/

void bienvenida(){
    cout<<"********* Hola bienvenido al programa de BG *********"<< endl;
    cout<<"*************************************************************"<< endl;
}

int main(){
    bienvenida();

    cout<< " Ingrese un valor que sera tamanio del vector";
    int tamanio;
    cin >> tamanio;

    int valor;

    // Creamos el array
    int VEC[tamanio];
    int total = 0;

    // la carga de dtos al vector VEC
    for(int j=0; j < tamanio ; j++){

    cout << "Ingresa un valor ";
    cin>> valor;

    VEC[j] = valor;
    }


    // Suma de los componentes
    for(int i=0;i<tamanio ;i++){
        total = VEC[i] + total;
    }


    int i = 0; // par
    // int j = 1;  impar

    if(total>0){
        // imprimir las de indice impar
        for(int j = 1 ;j<tamanio ;j+=2){
            cout<<"Aca imprimimos los impares "<< VEC[j]<<endl;
        }
        
    }else{
        // imprimir las de indice par
    }


}