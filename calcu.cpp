#include <iostream>

using namespace std;


int resta (int a, int b) {
    return a - b;
}

int main() {
    int a, b;
    cout << "Introduce el primer número: ";
    cin >> a;
    cout << "Introduce el segundo número: ";
    cin >> b;

    int resultado = resta(a, b);
    cout << "La resta de " << a << " y " << b << " es: " << resultado << endl;

    return 0;



}
