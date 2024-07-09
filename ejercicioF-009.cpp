#include <iostream>

using namespace std;
// 9- ingresar N valores correspondintes a las edades de los alumnos
// de un curso . Informar la edad promedio dek curso
int cantAlumno;
int nota;
int main (){
    int cantAlumno;
    int nota;
    int notaTotal = 0;

    cout <<" ingrese la cantidad de alumnos";
    cin >> cantAlumno;

    for(int i=1 ; i<=cantAlumno ;i++ ){
        
        cout<<"Ingrese la nota del alumno " <<i<<" :";
        cin>>nota;

        notaTotal += nota;
    }

    cout <<" el promedio es: "<<notaTotal/cantAlumno;

    return 0;
}