#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Persona { //Metamorfismo
    private:
    string _nombre;
    public: 
    Persona (string nombre) : _nombre(nombre) {}
    string GetNombre () {return _nombre;}
    void inline SetNombre (string nombre) {_nombre = nombre;}
    virtual void MostrarDatos () const {
        cout<<"Nombre: "<<_nombre<<endl;
    }
};

class Empleado : public Persona { //herencia
    private:
    string _cargo;
    string _horas;
    double _salario;
    public:
    Empleado () : _cargo(""), _horas(""), _salario(0), Persona("") {} //por defecto
    Empleado (string cargo, string horasdetrabajo, double salario, string nombre) : //parametrizado
    _cargo(cargo), _horas(horasdetrabajo), _salario(salario), Persona(nombre) {}
    //getters
    double getSalario () {return _salario;}
    string getHoras () {return _horas;}
    string getCargo () {return _cargo;}
    //Setters
    void inline setCargo (string cargo) {_cargo = cargo;}
    void inline setHora (string horas) {_horas = horas;}
    void inline setSalario (double salario) {_salario = salario;}

    virtual void MostrarDatos () const {
        Persona::MostrarDatos();
        cout<<"Cargo: "<<_cargo<<endl;
        cout<<"Horas de trabajo: "<<_horas<<endl;
        cout<<"Salario: "<<_salario<<endl;
    }
};

class Departamento { //agregacion
    private:
    vector <Empleado*> ListadeEmpleados;
    string _ubicacion;
    public:
    Departamento () : _ubicacion("") {}
    Departamento (string ubicacion) : _ubicacion(ubicacion) {}
    
    void AgregarEmpleados (Empleado* lacayo) {
        ListadeEmpleados.push_back(lacayo);
    }
    void MostrarInformacion () {
        cout<<"Ubicacion: "<<_ubicacion<<endl;
        for(const auto &Empleados : ListadeEmpleados){
            Empleados->MostrarDatos();
        }
    }
};

class Empresa { //composicion
    private:
    string _nombre;
    Departamento Midepartamento;
    public:
    Empresa () : _nombre("") {}
    Empresa (string nombre, string ubicacion) : _nombre(nombre), Midepartamento(ubicacion) {}
    void inline SetNombre (string nombre) {_nombre = nombre;}
    Departamento &GetDepartamento () {return Midepartamento;}
};


int main () {
    Empresa Empresa("KionSex", "Mono nooooooo");
    Empresa.GetDepartamento().AgregarEmpleados(new Empleado("Limpieza","28 horas a la semana",967,"Pepe"));
    Empresa.GetDepartamento().MostrarInformacion();
    return 0;
}