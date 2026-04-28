#include <iostream>
using namespace std;

int main(){
    int a, b,c;
    cout << "Ingrese un valor: ";
    cin >> a;
    cout << "Ingrese otro valor: ";
    cin >> b;
    cout << "Ingrese otro valor: ";
    cin >> c;

    if(a>b && a>c){
        if(b>c){
            cout<<"El mayor es: "<<a<<endl;
            cout<<"El medio es: "<<b<<endl;
            cout<<"El abajo es: "<<c<<endl;
        }else{
            cout<<"El mayor es: "<<a<<endl;
            cout<<"El medio es: "<<c<<endl;
            cout<<"El abajo es: "<<b<<endl;
        }
    }else{
        if(b>a && b>c){
            if(a>c){
                cout<<"El mayor es: "<<b<<endl;
                cout<<"El medio es: "<<a<<endl;
                cout<<"El abajo es: "<<c<<endl;
            }else{
                cout<<"El mayor es: "<<b<<endl;
                cout<<"El medio es: "<<c<<endl;
                cout<<"El abajo es: "<<a<<endl;
            }
        }else{
            if(b>a){
                cout<<"El mayor es: "<<c<<endl;
                cout<<"El medio es: "<<b<<endl;
                cout<<"El abajo es: "<<a<<endl;
            }else{
                cout<<"El mayor es: "<<c<<endl;
                cout<<"El medio es: "<<a<<endl;
                cout<<"El abajo es: "<<b<<endl;
            }
        }
    }

    return 0;
}