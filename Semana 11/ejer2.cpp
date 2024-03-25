#include <iostream>
#include<string>
using namespace std;

class Persona {
    private:
    int _identificador;
    string _apellidos;
    string _nombre;
    string _direcccion;
    struct TipoContacto{
        int _id;
        string _correo;
        string _Telefono;
    } _tipoContacto[1];
    

    public:
    Persona (int identificador, string &apellidos, string &nombre, string &direccion) :
    _identificador(identificador), _apellidos(apellidos), _nombre(nombre), _direcccion(direccion) {}

    void 

};

class Empleado: public Persona {

};

class Gerente: public Empleado {

};

class Ingerniero: public Empleado {

};



int main () {

    return 0;
}