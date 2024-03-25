#include <iostream>
#include <vector>

using namespace std;

class Persona {
private:
    string _nombre;
    int _dni;
    string _posicion;

public:
    Persona(string nombre, int dni, string posicion) : _nombre(nombre), _dni(dni), _posicion(posicion) {}
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
    vector<Persona*> ListaDeJugadores;

public:
    void AgregarJugador(Persona* jugador) {
        ListaDeJugadores.push_back(jugador);
        }

    void MostrarJugadores() {
        cout << "Lista de Jugadores:\n";
        for (const auto& jugador : ListaDeJugadores) {
            cout << "Nombre: " << jugador->GetNombre() << endl;
            cout << "Posicion: " << jugador->GetPosicion() << endl;
            cout << "DNI: " << jugador->GetDni() << endl;
        }
    }
};

class Materiales {
private:
    int _balones;
    int _conos;

public:
    Materiales(int balones, int conos) : _balones(balones), _conos(conos) {}
    int getBalones () const {return _balones;}
    int getConos () const {return _conos;}
};

class Baloncesto {
private:
    Equipo _miEquipo;
    Materiales _misMateriales;

public:
    Baloncesto() : _misMateriales(10, 20) {} // Por ejemplo, inicializamos con 10 balones y 20 conos

    Equipo& GetEquipo() {
        return _miEquipo;
    }

    Materiales& GetMateriales() {
        return _misMateriales;
    }
};

int main() {
    Baloncesto baloncesto;

    // Agregar jugadores al equipo
    baloncesto.GetEquipo().AgregarJugador(new Persona("Jugador1", 12345678, "Base"));
    baloncesto.GetEquipo().AgregarJugador(new Persona("Jugador2", 87654321, "Ala Pivot"));

    // Mostrar jugadores del equipo
    baloncesto.GetEquipo().MostrarJugadores();

    // Acceder a los materiales
    cout << "Número de balones: " << baloncesto.GetMateriales().getBalones() << endl;
    cout << "Número de conos: " << baloncesto.GetMateriales().getConos() << endl;

    return 0;
}
