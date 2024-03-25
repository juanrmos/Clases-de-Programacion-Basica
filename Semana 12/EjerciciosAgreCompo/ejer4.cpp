#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Persona {
    private:
    string _nombre;
    int _dni;
    string _posicion;
    public:
    Persona (string nombre, int dni, string posicion) : 
    _nombre(nombre), _dni(dni), _posicion(posicion) {}
    //getters
    string GetNombre() const {return _nombre; }
    int GetDni () const {return _dni;}
    string GetPosicion () const {return _posicion;}
    //setters
    void inline Setnombre (string nombre) {_nombre = nombre;}
    void inline SetDni (int dni) {_dni = dni;}
    void inline SetPosicion (string posicion) {_posicion = posicion;}

};

class Equipo {
    private:
    vector <Persona*> ListadeJugadores;
    public:
    void AgregarJugadores (Persona* n) {
        ListadeJugadores.push_back(n);
    }
    void MostrarJugadores () {
        cout<<"Lista de Jugadores:\n";
        for (const auto&Jugadores : ListadeJugadores){
            cout<<"Nombre: "<<Jugadores->GetNombre()<<endl;
            cout<<"Posicion: "<<Jugadores->GetPosicion()<<endl;
            cout<<"Dni: "<<Jugadores->GetDni()<<endl;
        }
    }
};

class Materiales {
    private:
    int _balones;
    int _conos;
    public:
    Materiales(int balones, int conos) : 
    _balones(balones), _conos(conos) {}

};

class Baloncesto {
    private: 
    Equipo Miequipo;
    Materiales Mimaterial;
    public: 
    Baloncesto () : Mimaterial (10,20) {}
    
};


int main () {

    return 0;
}