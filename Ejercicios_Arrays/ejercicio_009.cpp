/*
Diseñar un algoritmo para ordenar una agenda que contiene
apellido y nombre, dirección, teléfono, código postal por
la columna de código postal creciente.
*/

/*
Diseñar un algoritmo para ordenar una agenda que contiene
apellido y nombre, dirección, teléfono, código postal por
la columna de código postal creciente.
*/

#include <iostream>
#include <string>
using namespace std;

// Estructura para representar un contacto de la agenda
struct Contacto {
    string apellidoNombre;
    string direccion;
    string telefono;
    int codigoPostal;
};

// Subprograma para mostrar un contacto
void mostrarContacto(const Contacto& contacto) {
    cout << "Nombre: " << contacto.apellidoNombre 
         << " | Direccion: " << contacto.direccion
         << " | Telefono: " << contacto.telefono
         << " | CP: " << contacto.codigoPostal << endl;
}

// Subprograma para mostrar toda la agenda
void mostrarAgenda(Contacto agenda[], int tamanio) {
    cout << "\n=== AGENDA ===" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << i + 1 << ". ";
        mostrarContacto(agenda[i]);
    }
    cout << "==============" << endl;
}

// Subprograma para ordenar agenda por código postal (burbuja)
void ordenarPorCodigoPostal(Contacto agenda[], int tamanio) {
    Contacto temp;
    
    // Algoritmo burbuja para ordenar por código postal creciente
    for (int i = 0; i < tamanio - 1; i++) {
        for (int j = 0; j < tamanio - i - 1; j++) {
            // Si el código postal actual es mayor que el siguiente
            if (agenda[j].codigoPostal > agenda[j + 1].codigoPostal) {
                // Intercambiar contactos completos
                temp = agenda[j];
                agenda[j] = agenda[j + 1];
                agenda[j + 1] = temp;
            }
        }
    }
}

// Subprograma para cargar datos en la agenda
void cargarAgenda(Contacto agenda[], int tamanio) {
    cout << "Ingrese los datos de " << tamanio << " contactos:" << endl;
    
    for (int i = 0; i < tamanio; i++) {
        cout << "\n--- Contacto " << i + 1 << " ---" << endl;
        
        cout << "Apellido y Nombre: ";
        cin.ignore(); // Limpiar buffer
        getline(cin, agenda[i].apellidoNombre);
        
        cout << "Direccion: ";
        getline(cin, agenda[i].direccion);
        
        cout << "Telefono: ";
        getline(cin, agenda[i].telefono);
        
        cout << "Codigo Postal: ";
        cin >> agenda[i].codigoPostal;
    }
}

// Subprograma para inicializar agenda con datos de ejemplo
void cargarEjemplo(Contacto agenda[], int& tamanio) {
    tamanio = 5;
    
    agenda[0] = {"Garcia, Juan", "Av. Corrientes 1234", "011-4567-8901", 1043};
    agenda[1] = {"Lopez, Maria", "San Martin 567", "011-2345-6789", 1010};
    agenda[2] = {"Rodriguez, Carlos", "Rivadavia 890", "011-3456-7890", 1025};
    agenda[3] = {"Martinez, Ana", "Florida 234", "011-4567-8901", 1005};
    agenda[4] = {"Fernandez, Luis", "Callao 678", "011-5678-9012", 1018};
    
    cout << "Agenda cargada con datos de ejemplo." << endl;
}

// Subprograma para buscar por código postal
void buscarPorCP(Contacto agenda[], int tamanio, int cp) {
    bool encontrado = false;
    cout << "\nContactos con codigo postal " << cp << ":" << endl;
    
    for (int i = 0; i < tamanio; i++) {
        if (agenda[i].codigoPostal == cp) {
            mostrarContacto(agenda[i]);
            encontrado = true;
        }
    }
    
    if (!encontrado) {
        cout << "No se encontraron contactos con ese codigo postal." << endl;
    }
}

int main() {
    const int MAX_CONTACTOS = 10;
    Contacto agenda[MAX_CONTACTOS];
    int tamanio = 0;
    int opcion;
    
    do {
        cout << "\n=== MENU AGENDA ===" << endl;
        cout << "1. Cargar datos manualmente" << endl;
        cout << "2. Cargar datos de ejemplo" << endl;
        cout << "3. Mostrar agenda" << endl;
        cout << "4. Ordenar por codigo postal" << endl;
        cout << "5. Buscar por codigo postal" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                cout << "Cuantos contactos desea ingresar (max " << MAX_CONTACTOS << ")? ";
                cin >> tamanio;
                if (tamanio > MAX_CONTACTOS) tamanio = MAX_CONTACTOS;
                cargarAgenda(agenda, tamanio);
                break;
                
            case 2:
                cargarEjemplo(agenda, tamanio);
                break;
                
            case 3:
                if (tamanio > 0) {
                    mostrarAgenda(agenda, tamanio);
                } else {
                    cout << "La agenda esta vacia." << endl;
                }
                break;
                
            case 4:
                if (tamanio > 0) {
                    cout << "\nAgenda ANTES de ordenar:" << endl;
                    mostrarAgenda(agenda, tamanio);
                    
                    ordenarPorCodigoPostal(agenda, tamanio);
                    
                    cout << "\nAgenda DESPUES de ordenar por codigo postal:" << endl;
                    mostrarAgenda(agenda, tamanio);
                } else {
                    cout << "La agenda esta vacia." << endl;
                }
                break;
                
            case 5:
                if (tamanio > 0) {
                    int cp;
                    cout << "Ingrese el codigo postal a buscar: ";
                    cin >> cp;
                    buscarPorCP(agenda, tamanio, cp);
                } else {
                    cout << "La agenda esta vacia." << endl;
                }
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