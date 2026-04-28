#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int fecha1, fecha2, hoy;
    cout << "Ingrese la fecha de hoy: ";
    cin >> hoy;
    cout << "Ingrese una fecha: ";
    cin >> fecha1;
    cout << "Ingrese otra fecha: ";
    cin >> fecha2;

    int diferencia1;
    int diferencia2;

    diferencia1 = abs(hoy-fecha1);
    diferencia2 = abs(hoy-fecha2);

    if(diferencia1<diferencia2){
        cout<<"la fecha1 "<< fecha1 <<" es la mas cercana a hoy";
    }else{
        cout<<"la fecha2 "<< fecha2 <<" es la mas cercana a hoy";
    }

    return 0;
}