/*
6) Realice un programa que lea dos números enteros n1 y n2 y luego muestre
un menú con las opciones:
a – Sumar los números
b – Restar los números
c – Multiplicarlos
d – Realizar la división n1/n2
Esc - Salir
*/

#include <iostream>
#include <conio.h>  // Para getch()
#include <iomanip>  // Para setprecision
using namespace std;

// Función para sumar dos números
int sumar(int n1, int n2) {
    return n1 + n2;
}

// Función para restar dos números
int restar(int n1, int n2) {
    return n1 - n2;
}

// Función para multiplicar dos números
int multiplicar(int n1, int n2) {
    return n1 * n2;
}

// Función para dividir dos números
double dividir(int n1, int n2) {
    if (n2 == 0) {
        cout << "Error: División por cero no permitida." << endl;
        return 0;
    }
    return static_cast<double>(n1) / n2;
}

// Función para mostrar el menú
void mostrarMenu() {
    cout << "\n=== MENÚ DE OPERACIONES ===" << endl;
    cout << "a - Sumar los números" << endl;
    cout << "b - Restar los números" << endl;
    cout << "c - Multiplicar los números" << endl;
    cout << "d - Realizar la división n1/n2" << endl;
    cout << "ESC - Salir" << endl;
    cout << "\nSeleccione una opción: ";
}

int main(){
    int n1, n2;
    char opcion;
    bool continuar = true;
    
    cout << "=== CALCULADORA BÁSICA ===" << endl;
    cout << "Ingrese el primer número entero (n1): ";
    cin >> n1;
    
    cout << "Ingrese el segundo número entero (n2): ";
    cin >> n2;
    
    cout << "\nNúmeros ingresados: n1 = " << n1 << ", n2 = " << n2 << endl;
    
    while (continuar) {
        mostrarMenu();
        
        // Leer la opción del usuario
        opcion = getch(); // Lee un carácter sin presionar Enter
        cout << opcion << endl; // Mostrar la opción seleccionada
        
        switch (opcion) {
            case 'a':
            case 'A': {
                int resultado = sumar(n1, n2);
                cout << "\nSuma: " << n1 << " + " << n2 << " = " << resultado << endl;
                break;
            }
            
            case 'b':
            case 'B': {
                int resultado = restar(n1, n2);
                cout << "\nResta: " << n1 << " - " << n2 << " = " << resultado << endl;
                break;
            }
            
            case 'c':
            case 'C': {
                int resultado = multiplicar(n1, n2);
                cout << "\nMultiplicación: " << n1 << " × " << n2 << " = " << resultado << endl;
                break;
            }
            
            case 'd':
            case 'D': {
                cout << "\nDivisión: " << n1 << " ÷ " << n2 << " = ";
                if (n2 != 0) {
                    double resultado = dividir(n1, n2);
                    cout << fixed << setprecision(4) << resultado << endl;
                } else {
                    dividir(n1, n2); // Mostrará el mensaje de error
                }
                break;
            }
            
            case 27: // Código ASCII de la tecla ESC
                cout << "\n¡Gracias por usar la calculadora!" << endl;
                continuar = false;
                break;
                
            default:
                cout << "\nOpción no válida. Por favor, seleccione una opción válida." << endl;
                break;
        }
        
        
    }

    return 0;
}