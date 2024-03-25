#include <iostream>
#include <string>

using namespace std;


class Persona {
protected:
    int _identificador;
    string _apellidos;
    string _nombres;
    string _direccion;
    struct TipoContacto {
        int id;
        string correo;
        string telefono;
    } _tipoContacto[1]; 

public:
    
    Persona(int id, const string& apellidos, const string& nombres, const string& direccion)
        : _identificador(id), _apellidos(apellidos), _nombres(nombres), _direccion(direccion) {}

    
    void agregarTipoContacto(int index, int id, const string& correo, const string& telefono) {
        _tipoContacto[index].id = id;
        _tipoContacto[index].correo = correo;
        _tipoContacto[index].telefono = telefono;
    }

    void mostrarInformacion() const {
        cout << "Identificador: " << _identificador << endl;
        cout << "Apellidos: " << _apellidos << endl;
        cout << "Nombres: " << _nombres << endl;
        cout << "Direccion: " << _direccion << endl;
        cout << "Tipo de Contacto:" << endl;
        for (int i = 0; i < 1; ++i) {
            cout << "  - ID: " << _tipoContacto[i].id << ", Correo: " << _tipoContacto[i].correo << ", Telefono: " << _tipoContacto[i].telefono << endl;
        }
    }
};


class Empleado : public Persona {
protected:
    int _codigo;
    float _costo_hh;
    struct Departamento {
        int codigo_dep;
        string nombre_dep;
    } _departamento[1]; 
    float _salario;

public:
    
    Empleado(int id, const string& apellidos, const string& nombres, const string& direccion,
            int codigo, float costo_hh, float salario)
        : Persona(id, apellidos, nombres, direccion), _codigo(codigo), _costo_hh(costo_hh), _salario(salario) {}

    
    void agregarDepartamento(int index, int codigo_dep, const string& nombre_dep) {
        _departamento[index].codigo_dep = codigo_dep;
        _departamento[index].nombre_dep = nombre_dep;
    }

    void Calcular_salario() {
        
        
    }

    void mostrarInformacionEmpleado() const {
        mostrarInformacion(); 
        cout << "Codigo: " << _codigo << endl;
        cout << "Costo por hora: " << _costo_hh << endl;
        cout << "Departamento:" << endl;
        for (int i = 0; i < 1; ++i) {
            cout << "  - Codigo: " << _departamento[i].codigo_dep << ", Nombre: " << _departamento[i].nombre_dep << endl;
        }
        cout << "Salario: " << _salario << endl;
    }
};


class Gerente : public Empleado {
private:
    float _bono;

public:
    
    Gerente(int id, const string& apellidos, const string& nombres, const string& direccion,
            int codigo, float costo_hh, float salario, float bono)
        : Empleado(id, apellidos, nombres, direccion, codigo, costo_hh, salario), _bono(bono) {}

    
    void Calcular_Salario() {
        
    }

    void mostrarInformacionGerente() const {
        mostrarInformacionEmpleado(); 
        cout << "Bono: " << _bono << endl;
    }
};


class Ingeniero : public Empleado {
private:
    int _horas_extra;

public:
    
    Ingeniero(int id, const string& apellidos, const string& nombres, const string& direccion,
            int codigo, float costo_hh, float salario, int horas_extra)
        : Empleado(id, apellidos, nombres, direccion, codigo, costo_hh, salario), _horas_extra(horas_extra) {}

    
    void Calcular_Salario() {

    }

    void mostrarInformacionIngeniero() const {
        mostrarInformacionEmpleado(); 
        cout << "Horas Extra: " << _horas_extra << endl;
    }
};

int main() {
    
    Gerente gerente(123, "Ramos", "Juan", "Av. Principal", 101, 25.0, 3000.0, 500.0);
    gerente.agregarTipoContacto(0, 1, "gerente@example.com", "123456789");
    gerente.agregarDepartamento(0, 101, "Gerencia General");
    gerente.mostrarInformacionGerente();
    cout << endl;

    Ingeniero ingeniero(124, "Garcia", "Maria", "Calle Principal", 102, 20.0, 2500.0, 10);
    ingeniero.agregarTipoContacto(0, 2, "ingeniero@example.com", "987654321");
    ingeniero.agregarDepartamento(0, 102, "Desarrollo de Software");
    ingeniero.mostrarInformacionIngeniero();

    return 0;
}
