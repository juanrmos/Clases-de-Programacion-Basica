#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Jugador { //clase agregada
    private:
    string _nombre;
    int _edad;
    string _posicion;

    public:
    Jugador (string nombre, int edad, string posicion) :
    _nombre(nombre), _edad(edad), _posicion(posicion) {}

    //getters 
    string GetNombre () const {return _nombre;}
    string GetPosicion () const {return _posicion;}
    int GetEdad () const {return _edad;} 
    
    //setters
    void SetNombre (string nombre) {_nombre = nombre;}
    void SetEdad (int edad) {_edad = edad;}
    void SetPosicion (string posicion) {_posicion = posicion;}

    //comprobacion
};

class Equipo { //clase contenedora
    private:
    vector <Jugador*> ListadeJugadores;
    public:
    //agregar valores
    void AgregarJugadores (Jugador* n) {
        ListadeJugadores.push_back(n);
    }
    void MostrarJugadores ()  {
        cout<<"Lista de jugadores: "<<endl;
        for (const auto&Jugadores : ListadeJugadores) {
            cout<<"Nombre: "<<Jugadores->GetNombre()<<endl;
            cout<<"Edad: "<<Jugadores->GetEdad()<<endl;
            cout<<"Posicion: "<<Jugadores->GetPosicion()<<endl;
        }
    }
};

int main () {
    Jugador* L1 = new Jugador("Pepe",28,"Delantero");
    Equipo Elbarza;
    Elbarza.AgregarJugadores(L1);
    Elbarza.MostrarJugadores();
    return 0;
    
}