#include <iostream>
#include <string>

#include <iostream>
#include <string>
using namespace std;


class Persona {
protected:
    string _nombre;
    int _edad;

public:
    Persona(const string& nombre, int edad) : _nombre(nombre), _edad(edad) {}

    
    string getNombre() const { return _nombre; }
    void setNombre(const string& nombre) { _nombre = nombre; }

    int getEdad() const { return _edad; }
    void setEdad(int edad) { _edad = edad; }

    
    virtual void imprimirInformacion() const {
        cout << "Nombre: " << _nombre << ", Edad: " << _edad << endl;
    }
};


class Estudiante : public Persona {
private:
    int _iq;

public:
    Estudiante(const string& nombre, int edad, int iq) : Persona(nombre, edad), _iq(iq) {}

    int getIQ() const { return _iq; }
    void setIQ(int iq) { _iq = iq; }

    
    virtual void imprimirInformacion() const override {
        Persona::imprimirInformacion();
        cout << "IQ del Estudiante: " << _iq << endl;
    }

    
    void modificarIQValor(int nuevoIQ) {
        _iq = nuevoIQ;
    }

    
    void modificarIQReferencia(int& nuevoIQ) {
        _iq = nuevoIQ;
    }
};

// Clase derivada Maestro
class Maestro : public Persona {
private:
    int _horasT;

public:
    Maestro(const string& nombre, int edad, int horasTrabajadas) : Persona(nombre, edad), _horasT(horasTrabajadas) {}

    int getHorasTrabajadas() const { return _horasT; }
    void setHorasTrabajadas(int horasTrabajadas) { _horasT = horasTrabajadas; }

    
    virtual void imprimirInformacion() const override {
        Persona::imprimirInformacion();
        cout << "Horas trabajadas: " << _horasT << endl;
    }

    
    void modificarHorasTValor(int nuevasHoras) {
        _horasT = nuevasHoras;
    }

    
    void modificarHorasTReferencia(int& nuevasHoras) {
        _horasT = nuevasHoras;
    }
};

int main() {
    
    Estudiante estudiante("Juan", 20, 120);
    Maestro maestro("Ana", 35, 40);

    cout << "Informacion del estudiante:" << endl;
    estudiante.imprimirInformacion();
    cout << endl;

    cout << "Informacion del maestro:" << endl;
    maestro.imprimirInformacion();
    cout << endl;

    
    int nuevoIQ = 130;
    estudiante.modificarIQValor(nuevoIQ);

    
    int nuevasHoras = 50;
    maestro.modificarHorasTReferencia(nuevasHoras);

    
    cout << "Informacion del estudiante despues de modificar el IQ:" << endl;
    estudiante.imprimirInformacion();
    cout << endl;

    cout << "Informacion del maestro despues de modificar las horas trabajadas:" << endl;
    maestro.imprimirInformacion();
    cout << endl;

    return 0;
}
