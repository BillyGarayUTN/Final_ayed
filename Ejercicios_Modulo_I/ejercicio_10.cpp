#include <iostream>
using namespace std;

int main(){
    int lado1,lado2,lado3;
    cout << "Ingrese un lado: ";
    cin >> lado1;
    cout << "Ingrese un segundo lado: ";
    cin >> lado2;
    cout << "Ingrese un tercer lado: ";
    cin >> lado3;

    if(lado1==lado2 && lado1==lado3){
        cout<<"el triangulo es EQUILATERO";
    }else{
        if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3){
            cout<<"el triangulo es ESCALENO";
        }else{
            cout<<"el triangulo es ISOSCELES";
        }
    }

    return 0;
}