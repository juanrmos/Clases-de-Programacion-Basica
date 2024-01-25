#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Definición del struct Alumno
struct Alumno {
    string nombre;
    int edad;
    double calificacion;
};

int main() {
    // Pedir al usuario el número de estudiantes
    int numEstudiantes;
    cout << "Ingrese el número de estudiantes: ";
    cin >> numEstudiantes;

    // Crear un vector de estructuras Alumno
    vector<Alumno> estudiantes(numEstudiantes);

    // Limpiar el buffer de entrada
    cin.ignore();

    // Ingresar información para cada estudiante
    for (int i = 0; i < numEstudiantes; i++) {
        cout << "\nIngrese información para el estudiante " << i + 1 << ":\n";
        cout << "Nombre: ";
        getline(cin, estudiantes[i].nombre);
        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        cout << "Calificación: ";
        cin >> estudiantes[i].calificacion;
        // Limpiar el buffer de entrada después de cada uso de cin
        cin.ignore();
    }

    // Mostrar la información de todos los estudiantes
    cout << "\nInformación de todos los estudiantes:\n";
    for (int i = 0; i < numEstudiantes; i++) {
        cout << "\nEstudiante " << i + 1 << ":\n";
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Calificación: " << estudiantes[i].calificacion << endl;
    }

    return 0;
}

