#include <iostream>
using namespace std;

int main() {
    double num1, num2, suma;

    // Solicitar los números al usuario
    cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;

    // Realizar la suma
    suma = num1 + num2;

    // Mostrar el resultado
    cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << endl;

    return 0;
}