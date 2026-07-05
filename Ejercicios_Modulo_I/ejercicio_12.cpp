#include <iostream>
using namespace std;

int main(){
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }
    
    cout << "¡Gracias por usar el programa!" << endl;

    return 0;
}