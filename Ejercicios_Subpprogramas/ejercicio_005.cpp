/*
Realice una función que reciba los coeficientes de un polinomio de grado 2 y 
devuelva las raíces del mismo siempre y cuando sean raíces reales.
*/

#include <iostream>
#include <cmath>
using namespace std;

// Función que calcula las raíces reales de un polinomio de grado 2
// Parámetros: a, b, c son los coeficientes del polinomio ax² + bx + c = 0
// Devuelve: número de raíces reales encontradas (0, 1 o 2)
// Las raíces se devuelven por referencia en raiz1 y raiz2
int calcularRaices(double a, double b, double c, double &raiz1, double &raiz2) {
    // Verificar que 'a' no sea cero (debe ser un polinomio de grado 2)
    if (a == 0) {
        cout << "Error: El coeficiente 'a' no puede ser cero en un polinomio de grado 2." << endl;
        return 0;
    }
    
    // Calcular el discriminante
    double discriminante = b * b - 4 * a * c;
    
    if (discriminante < 0) {
        // No hay raíces reales
        cout << "El polinomio no tiene raíces reales (discriminante < 0)." << endl;
        return 0;
    }
    else if (discriminante == 0) {
        // Una raíz real (raíz doble)
        raiz1 = raiz2 = -b / (2 * a);
        cout << "El polinomio tiene una raíz real (raíz doble): " << raiz1 << endl;
        return 1;
    }
    else {
        // Dos raíces reales distintas
        double sqrtDiscriminante = sqrt(discriminante);
        raiz1 = (-b + sqrtDiscriminante) / (2 * a);
        raiz2 = (-b - sqrtDiscriminante) / (2 * a);
        cout << "El polinomio tiene dos raíces reales: " << raiz1 << " y " << raiz2 << endl;
        return 2;
    }
}

int main(){
    double a, b, c;
    double raiz1, raiz2;
    
    cout << "=== CALCULADORA DE RAÍCES DE POLINOMIO DE GRADO 2 ===" << endl;
    cout << "Ingrese los coeficientes del polinomio ax² + bx + c = 0" << endl;
    
    cout << "Coeficiente a: ";
    cin >> a;
    
    cout << "Coeficiente b: ";
    cin >> b;
    
    cout << "Coeficiente c: ";
    cin >> c;
    
    cout << "\nPolinomio: " << a << "x² + " << b << "x + " << c << " = 0" << endl;
    
    // Llamar a la función para calcular las raíces
    int numRaices = calcularRaices(a, b, c, raiz1, raiz2);
    
    // Mostrar resultados adicionales
    if (numRaices == 1) {
        cout << "Verificación: " << a << "(" << raiz1 << ")² + " << b << "(" << raiz1 << ") + " << c << " = " 
             << (a * raiz1 * raiz1 + b * raiz1 + c) << endl;
    }
    else if (numRaices == 2) {
        cout << "Verificación raíz 1: " << a << "(" << raiz1 << ")² + " << b << "(" << raiz1 << ") + " << c << " = " 
             << (a * raiz1 * raiz1 + b * raiz1 + c) << endl;
        cout << "Verificación raíz 2: " << a << "(" << raiz2 << ")² + " << b << "(" << raiz2 << ") + " << c << " = " 
             << (a * raiz2 * raiz2 + b * raiz2 + c) << endl;
    }

    return 0;
}
