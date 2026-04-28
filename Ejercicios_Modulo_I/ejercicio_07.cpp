#include <iostream>
using namespace std;

int main(){
    int a, b,c;
    cout << "Ingrese un dia: ";
    cin >> a;
    cout << "Ingrese un mes: ";
    cin >> b;
    cout << "Ingrese un anio: ";
    cin >> c;

    int fecha;

    fecha=c*10000+b*100+a;

    cout<<"la fecha es : "<< fecha;

    return 0;
}