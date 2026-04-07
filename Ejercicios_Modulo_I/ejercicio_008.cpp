/*
Dado un número de 8 dígitos que representa una fecha con formato aaaammdd,  
se pide mostrar por separado  el día, el mes y el año de la ingresada
*/

#include <iostream>
using namespace std;

int main(){
    int fecha;
    cout << "Ingrese la fecha en formato aaaammdd: ";
    cin >> fecha;
    
    int anio, mes, dia;
    anio = fecha / 10000;
    mes = (fecha / 100) % 100;
    dia = fecha % 100;
    cout << "Anio: " << anio << "\nMes: " << mes << "\nDia: " << dia << endl;

    return 0;
}