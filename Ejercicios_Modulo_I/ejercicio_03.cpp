#include <iostream>
using namespace std;

int main(){
    int valor;
    cout<< "ingrese el valor :";
    cin>> valor;

    int quinta;
    int resto;
    int septima;

    quinta = valor/5;
    resto = valor%5;
    septima = valor/7;

    cout<<"la quita de valor es: "<< quinta<<endl;
    cout<<"el resto del valor es: "<< resto<<endl;
    cout<<"la septima de valor es: "<< septima<<endl;

    return 0;
}