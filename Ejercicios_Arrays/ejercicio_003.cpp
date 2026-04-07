/*
Se leen las letras de una palabra carácter a carácter. El último carácter que
ingresa es la barra de dividir(/), que indica que la palabra ha finalizado. 
Escribir un programa que imprima la palabra en el orden que se ingresó y en 
sentido inverso (por ejemplo: pera arep, la palabra podrá tener hasta 20 caracteres).
*/

#include <iostream>
using namespace std;

int main(){
    char letras[100];
    char letra;
    int i=0;
    
    cout<<"Ingrese las letras una por una (/ para terminar):"<<endl;
    
    do {
        cout<<"Letra "<<(i+1)<<": ";
        cin>>letra;
        
        if(letra != '/'){
            letras[i] = letra;
            i++;
        }
        
    } while(letra != '/' && i < 99);
    
    cout<<endl<<"La palabra ingresada es: ";
    for(int j=0; j<i; j++){
        cout<<letras[j];
    }
    cout<<endl;
    
    cout<<"La palabra en sentido inverso es: ";
    for(int j=i-1; j>=0; j--){
        cout<<letras[j];
    }
    cout<<endl;

    return 0;
}
