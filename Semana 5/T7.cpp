/*Define un struct llamado Alumno que contenga información sobre un estudiante, como nombre, edad y calificación. 
Luego, crea un vector de estructuras Alumno y permite al usuario ingresar información para varios estudiantes. 
Muestra la información de todos los estudiantes.*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct Alumno {
    string nombre;
    int edad;
    double calificacion;
};

int main() {
   
    int N;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> N;


    vector<Alumno> estudiantes(N);

    
    for (int i = 0; i < N; i++) {
        cout << "\nIngrese informacion para el estudiante " << i + 1 << ":\n";
        cout << "Nombre: ";
        cin.ignore(); 
        getline(cin, estudiantes[i].nombre);
        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        cout << "Calificacion: ";
        cin >> estudiantes[i].calificacion;
    }

    
    cout << "\nInformacion de todos los estudiantes:\n";
    for (int i = 0; i < N; i++) {
        cout << "\nEstudiante " << i + 1 << ":\n";
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Calificacion: " << estudiantes[i].calificacion << endl;
    }

    return 0;
}
