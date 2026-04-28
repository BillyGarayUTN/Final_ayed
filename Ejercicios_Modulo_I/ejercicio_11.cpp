#include <iostream>
using namespace std;

int main(){
    int mes, anio;
    cout << "Ingrese un mes: ";
    cin >> mes;
    cout << "Ingrese un anio: ";
    cin >> anio;

    if(anio%4==0 &&(anio%100!=0 || anio%400==0)){
        cout<<"el anio es bisiesto";
    }else{
        cout<<"el anio NO es bisiesto";
    }

    return 0;
}