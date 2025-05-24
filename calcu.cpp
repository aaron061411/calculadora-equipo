#include<iostream>
#include <windows.h>

using namespace std;

void resta() {
     float a, b;
     cout << "Ingrese el primer numero: ";
     cin >> a;
     cout << "Ingrese el segundo numero: ";
     cin >> b;
     cout << "Resultado: " << a - b << endl;

}

int main() {
    int opcion;
    
    do {
        cout << "        CALCULADORA GRUPAL        " << endl;
        cout << "2. Resta" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 2: resta(); break;
            case 0: cout << "Saliendo..." << endl; break;
            default: cout << "Opción inválida, intente de nuevo." << endl;
        }

    } while (opcion != 0);

    return 0;
}