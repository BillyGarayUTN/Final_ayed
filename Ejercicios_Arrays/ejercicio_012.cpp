/*
Se leen datos de notas obtenidas por los alumnos de una cátedra y se 
desea informar: 
− el promedio de las notas obtenidas por los alumnos
− el nombre, tipo y número de documento y número de legajo (padrón) de
    los alumnos que hayan aprobado con nota igual o mayor que siete.
− Los datos del/los alumnos con peor nota.

*/

#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    int nota;
    int dni;
    int legajo;
};

// ...existing code...

void cargarAlumnos(Alumno agenda[], int& tamanio) {
    cout << "\n=== CARGAR ALUMNOS ===" << endl;
    cout << "¿Cuántos alumnos desea ingresar? (máximo 10): ";
    int cantidad;
    cin >> cantidad;
    
    if (cantidad > 10) {
        cantidad = 10;
        cout << "Se limitará a 10 alumnos." << endl;
    }
    
    for (int i = 0; i < cantidad; i++) {
        cout << "\nAlumno " << (i + 1) << ":" << endl;
        
        cout << "Nombre completo: ";
        cin.ignore(); // Limpiar buffer '\n'
        getline(cin, agenda[tamanio].nombre);
        
        cout << "Nota (0-10): ";
        cin >> agenda[tamanio].nota;
        
        cout << "DNI: ";
        cin >> agenda[tamanio].dni;
        
        cout << "Legajo: ";
        cin >> agenda[tamanio].legajo;
        
        tamanio++;
    }
    
    cout << "\n" << cantidad << " alumnos cargados exitosamente!" << endl;
}

//  mostrar Alumnos que aprobaron 
void mostrarAlumnos(Alumno agenda[], int tamanio){
    if (tamanio == 0) {
        cout << "\nNo hay alumnos cargados." << endl;
        return;
    }
    cout << "\n=== LISTA DE ALUMNOS ===" << endl;
    cout << "Total de alumnos: " << tamanio << endl;
    cout << "----------------------------------------" << endl;
    
    for (int i = 0; i < tamanio; i++) {
        cout << "\nAlumno " << (i + 1) << ":" << endl;
        cout << "  Nombre: " << agenda[i].nombre << endl;
        cout << "  Nota: " << agenda[i].nota << endl;
        cout << "  DNI: " << agenda[i].dni << endl;
        cout << "  Legajo: " << agenda[i].legajo << endl;
        cout << "----------------------------------------" << endl;
    }
}


// Mostrar Elementos  // Solo mostrar los que aprobaron
void mostrarAlumnosQueAprobaron(Alumno agenda[], int tamanio){
    if (tamanio == 0) {
        cout << "\nNo hay alumnos cargados." << endl;
        return;
    }
    
    cout << "\n=== LISTA DE ALUMNOS Que Aprobaron con mas de 7 ===" << endl;
    cout << "----------------------------------------" << endl;

    // Solo mostrar los que aprobaron
    for (int i  = 0; i < tamanio; i++) {
        if(agenda[i].nota > 7) {
            cout << "\nAlumno " << (i + 1) << ":" << endl;
            cout << "  Nombre: " << agenda[i].nombre << endl;
        } 
    }
}

// el promedio de las notas obtenidas por los alumnos
double calcularPromedio(Alumno agenda[], int tamanio) {
    if (tamanio == 0) return 0.0;

    int sumaNotas = 0;
    for (int i = 0; i < tamanio; i++) {
        sumaNotas += agenda[i].nota;
    }
    
    return sumaNotas / tamanio;
}



int main() {
    Alumno agenda[10];
    int tamanio = 0;
    int opcion;
    
    do {
        cout << "\n=== MENU AGENDA ===" << endl;
        cout << "1. Cargar alumnos" << endl;
        cout << "2. El promedio de las notas obtenidas por los alumnos" << endl;
        cout << "3. Alumnos que hayan aprobado con nota igual o mayor que siete" << endl;
        cout << "4. Los datos del/los alumnos con peor nota (peor nota es menor a 2)" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                cargarAlumnos(agenda, tamanio);
                break;
                
            case 2:
            {
                if (tamanio == 0) {
                    cout << "\nNo hay alumnos cargados para calcular el promedio." << endl;
                } else {
                    double promedio = calcularPromedio(agenda, tamanio);
                    cout << "\n=== PROMEDIO DE NOTAS ===" << endl;
                    cout << "Total de alumnos: " << tamanio << endl;
                    cout << "Promedio de las notas: " << promedio << endl;
                }
            }
        break;
                

            case 3:
                mostrarAlumnosQueAprobaron(agenda, tamanio);
            break;
                
            case 4:
            
            break;

            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
                
            default:
                cout << "Opcion invalida." << endl;
        }
        
    } while (opcion != 0);
    
    return 0;
}