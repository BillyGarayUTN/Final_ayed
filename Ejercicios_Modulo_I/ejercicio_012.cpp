/*
Se ingresa la edad de un socio de un club, se pide mostrar por pantalla 
alguna de las siguientes leyendas:

 “menor” si la edad es menor o igual a 12,
 “cadete” si la edad está comprendida entre 13 y 18,
 “juvenil” si la edad es mayor que 18 y no supera los 26, y
 “mayor” si no cumple ninguna de las condiciones anteriores.
*/

#include <iostream>
using namespace std;

int main(){

    int edad;
    cout <<"ingrese su edad: " << endl;
    cin >> edad;


    if(edad <=12){
        cout <<"menor" << endl;
    } else if (13< edad && edad <= 18){
        cout <<"cadete" << endl;
    } else if (18< edad && edad <= 26){
        cout <<"juvenil" << endl;
    } else {
        cout <<"mayor" << endl;
    }

    return 0;
}