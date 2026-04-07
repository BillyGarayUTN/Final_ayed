/*
Elabore un procedimiento que reciba tres parámetros, n1, n2 y mayor. 
A través del parámetro “mayor” devuelva el mayor número entre n1 y n2.
*/

#include <iostream>
using namespace std;

int elMayorEntre(int n1,int n2, int mayor){

    if(n2>n1){
        mayor=n2;
    }else{
        mayor=n1;
    }

    return mayor;
}

int main(){
    int valor1, valor2, mayor;
    cout << "Ingrese el primer valor: ";
    cin >> valor1;

    cout << "Ingrese el segundo valor: ";
    cin >> valor2;
    
    mayor = elMayorEntre(valor1,valor2,mayor);

    return 0;
}