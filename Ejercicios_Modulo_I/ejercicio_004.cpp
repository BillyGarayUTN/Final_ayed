/* 
Dados dos valores numéricos diferentes entre sí, informar cual es el mayor.  
*/

#include <iostream>
using namespace std;

int main(){
    int valor1, valor2;
    cout << "Ingrese el primer valor numérico: ";
    cin >> valor1;
    cout << "Ingrese el segundo valor numérico: ";
    cin >> valor2;
    
    if (valor1 > valor2){
        cout << "El mayor es: " << valor1 << endl;
    }else{
        cout << "El mayor es: " << valor2 << endl;
    }

    return 0;
}