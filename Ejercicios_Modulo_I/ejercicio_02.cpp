#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Ingrese un valor: ";
    cin >> a;
    cout << "Ingrese otro valor: ";
    cin >> b;
    
    int cociente;
    // consideremos queb puede ser cero
    if(b==0){
        cout<< "no se puede dividir por cero.";
        return 0;
    }

    cociente= a/b;
    cout<<"el cocientes es: "<<cociente;


    return 0;
}