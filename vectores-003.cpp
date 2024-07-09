#include <iostream>

using namespace std;
/*
-Ingresar un valor entero N (<20) . A continuacion ingresar un conjuntio VEC de N componentes.
A partir de este conjutno generar otro FACT en el quye cada elemento sea el factorial del
elemento homologo de VEC . Finalmente imprimir ambos vectores a razon de un valor de cada
uno por reglon.
*/
void bienvenida(){
    cout<<"********* Hola bienvenido al programa de BG *********"<< endl;
    cout<<"*************************************************************";
}

int calcularFactorial(int numero){
    if (numero == 0) {
        return 1;
    } else {
        return numero * calcularFactorial(numero - 1);
    }
}

int main( ){
    bienvenida();
    
    int n;
    cout << "Ingresa un valor N (<20): ";
    cin >> n;

   // 
    int VEC[n];
    int FACT[n];
    int valor;

    // pedir valores 
    for(int i=0; i < n ; i++){

    cout << "Ingresa un valor ";
    cin>> valor;
    VEC[i] = valor;
    FACT[i] = calcularFactorial(valor);
    }

    // Mostrar resultyados
    for( int j = 0; j<n ;j++ ){
    cout << "el valor de " <<VEC[j] << " su factorial es "<<FACT[j]<<endl;

    }
}