#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Persona {
    private:
    string _nombre;
    public:
    Persona (const string &n) : _nombre(n) {}
    //met
    virtual void Consultar () const {
        cout<<"Nombre: "<<_nombre<<endl;
    }
    string GetNom () const {
        return _nombre;
    }
    void SetNom (string name) {
        this->_nombre = name;
    }
};

class Docente : public Persona {
private: 
string _cargo;
int _horasT;
double _sueldo;
public:
Docente (const string &n, const string &car, const int &ho, const double &sueldo) : Persona(n), _cargo(car), _horasT(ho), _sueldo(sueldo) {}
virtual void Consultar () const override {
    Persona::Consultar();
    cout<<"Cargo: "<<_cargo<<endl;
    cout<<"Horas trabajadas: "<<_horasT<<endl;
    cout<<"Sueldo: "<<_sueldo<<endl;
} 

    string GetCargo () const {
        return _cargo;
    }
    void SetHoras (int name) {
        this->_horasT = name;
    }
    int getHoras () const {
        return _horasT;
    }
    void Setcargo (string cargo) {
        this->_cargo = cargo;
    }
    void SetSueldo (int name) {
        this->_sueldo = name;
    }
    double getSueldo () const {
        return _sueldo;
    }
};

class Administrativo : public Docente {
private: 
string _area;
public: 
Administrativo (const string &n, const string &car, const int &ho, const double &sueldo, string area) : Docente(n,car,ho,sueldo), _area(area) {}
virtual void Consultar () const override {
    Docente::Consultar();
    cout<<"Area: "<<_area<<endl;
}
    string getArea () const {
        return _area;
    }
    void SetArea (string cargo) {
        this->_area = cargo;
    }

};

class PersonalLimpieza : public Persona {
private:
string _turno;
public:
PersonalLimpieza (const string &n, string turno) : Persona(n), _turno(turno) {}
virtual void Consultar () const override {
    Persona::Consultar();
    cout<<"Turno: "<<endl;
}
    string GetTurno () const {
        return _turno;
    }
    void Setturno (string cargo) {
        this->_turno = cargo;
    }
};



int main () {

    vector <Docente> Profesores;
    int n;
    cout<<"Ingrese la cantidad de profesores que desea ingresar: "<<endl;
    cin>>n;
    for (int i = 0; i < n; i++){
        string nom;
        string car;
        int ho;
        double sal;
        cout<<"Ingrese el nombre del "<<i+1<<" Docente: "<<endl;
        cin.ignore();
        getline(cin,nom);
        cout<<"Ingrese el cargo del "<<i+1<<" Docente: "<<endl;
        getline(cin,car);
        cout<<"Ingrese las horas de trabajo del "<<i+1<<" Docente: "<<endl;
        cin>>ho;
        cout<<"Ingrese el salario del "<<i+1<<" Docente: "<<endl;
        cin>>sal;
        Docente ProfeAxuliar (nom, car, ho, car);
        Profesores.push_back(ProfeAxuliar);
    }
    
    //para que ahora? 
    Docente docente1 ("Juan", "Docente", 10, 1978);
    Administrativo docente2 ("Juan","Matematicas",10,1992.87,"Ciencias");
    docente1.Consultar();
    docente2.Consultar();
    return 0;
}