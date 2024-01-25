/*Escribe un programa que solicite al usuario un número y 
luego imprima la tabla de multiplicar del 5 hasta el 10 para ese número.*/
#include <iostream>
using namespace std;
int main (){
    srand(static_cast<unsigned int>(time(0)));

    int numAdiv = rand() % 10 + 1;
    int intent = 0;
    int Tintent = 0;

    cout << "Bienvenido al juego de adivinanzas. Adivina el numero entre 1 y 10." << endl;

    do {
        cout << "Ingresa tu intento: ";
        cin >> intent;
        Tintent++;
        if (intent == numAdiv) {
            cout << "Felicidades! Adivinaste el numero en " << Tintent << " intentos." << endl;
        } else {
            cout << "Intenta de nuevo. Incorrecto!" << endl;
        }
    } while (intent != numAdiv);
    return 0;
}
