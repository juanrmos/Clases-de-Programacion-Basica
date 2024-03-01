#include <iostream>
#include <string>

using namespace std;

class Perro {
private:
    string nombre;
    int edad;
    string raza;

public:

    Perro(string nombre, int edad, string raza) {
        this->nombre = nombre;
        this->edad = edad;
        this->raza = raza;
    }


    string getNombre() const {
        return nombre;
    }

    int getEdad() const {
        return edad;
    }

    string getRaza() const {
        return raza;
    }


    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    void setEdad(int edad) {
        this->edad = edad;
    }

    void setRaza(string raza) {
        this->raza = raza;
    }


    void mostrarDatos() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Raza: " << raza << endl;
    }
};

int main() {
    Perro miPerro("Rocky", 3, "Labrador");

    cout << "Datos originales del perro:" << endl;
    miPerro.mostrarDatos();
    cout << endl;

    string nuevaRaza;
    cout << "Ingrese la nueva raza del perro: ";
    cin >> nuevaRaza;
    miPerro.setRaza(nuevaRaza);
    cout << endl;

    cout << "Datos del perro con los cambios implementados:" << endl;
    miPerro.mostrarDatos();

    return 0;
}
