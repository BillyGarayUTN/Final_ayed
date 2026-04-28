#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Ingrese un valor: ";
    cin >> a;
    cout << "Ingrese otro valor: ";
    cin >> b;

    // informar cual es el mayor
    if(a==b){
        cout << "Ambos valores son iguales" ;
    }
    else{
        if(a>b){
            cout << "El mayor valor es: "<<a;
        }
        else{
            cout << "El mayor valor es: "<<b;
        }
    }

    return 0;
}