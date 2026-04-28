#include <iostream>
using namespace std;

int main(){
    int a,b,suma,diferencia,producto;
    
    cout<<"Ingrese un valor: ";
    cin>> a ;

    cout<<"Ingrese otro valor: ";
    cin>> b ;

    // calculamos la cuenta
    
    suma = a+b;
    diferencia = a-b;
    producto = a*b;

    cout<<"\nEl resultado de la suma es:  "<< suma << endl;
    cout<<"El resultado de la diferencia es:  "<< diferencia << endl;
    cout<<"El resultado del producto es:  "<< producto << endl;

    return 0;
}