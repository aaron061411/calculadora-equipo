#include <iostream>
using namespace std;

// Función para sumar dos números
void suma() {
    float a, b;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    cout << "Resultado: " << a + b << endl;
}

// Función para restar dos números
void resta() {
    float a, b;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    cout << "Resultado: " << a - b << endl;
}

// Función para multiplicar dos números
void multiplicacion() {
    float a, b;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    cout << "Resultado: " << a * b << endl;
}

// Función para dividir dos números
void division() {
    float a, b;
    cout << "Ingrese el numerador: ";
    cin >> a;
    cout << "Ingrese el denominador: ";
    cin >> b;
    if (b != 0)
        cout << "Resultado: " << a / b << endl;
    else
        cout << "Error: No se puede dividir entre 0." << endl;
}


// Función principal
int main() {
    int opcion;
    do {
        cout << "        CALCULADORA GRUPAL        " << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicación" << endl;
        cout << "4. División" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: suma(); break;
            case 2: resta(); break;
            case 3: multiplicacion(); break;
            case 4: division(); break;
            case 0: cout << "Saliendo..." << endl; break;
            default: cout << "Opción inválida, intente de nuevo." << endl;
        }

    } while (opcion != 0);

    return 0;
}
