#include <iostream>
#include <cmath>

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;  // 1 y números negativos no son primos
    }

    // Comprobar divisibilidad desde 2 hasta la raíz cuadrada del número
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            return false;  // El número es divisible, no es primo
        }
    }

    return true;  // Si no se encontraron divisores, es primo
}

int main() {
    int num;

    std::cout << "Ingrese un número: ";
    std::cin >> num;

    if (esPrimo(num)) {
        std::cout << num << " es un número primo." << std::endl;
    } else {
        std::cout << num << " no es un número primo." << std::endl;
    }

    return 0;
}
