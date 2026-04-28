#include <iostream>
using namespace std;

int main(){
    int fecha;
    cout<<"Ingrese una fecha en formato aaaammdd: ";
    cin>>fecha;
    
    int anio;
    int mes;
    int dia;

    anio = fecha/10000;
    mes = anio/100;
    dia = fecha%100;

    cout<<"El anio es: "<< anio<<endl;
    cout<<"El mes es: "<< mes<<endl;
    cout<<"El dia es: "<< dia<<endl;

    return 0;
}