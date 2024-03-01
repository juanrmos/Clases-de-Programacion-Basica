#include <iostream>
using namespace std;

//Las funciones "Inline" deben ser cortas y de uso frecuente.
//ahora codigo ya que su "invocacion" es mas corta.
// Declaración de una función inline
inline int suma(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    // Llamada a la función inline
    cout << "La suma es: " << suma(x, y) << endl;
    return 0;
}
