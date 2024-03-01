#include <iostream>
#include <string>
using namespace std;

/*Crea una situación que requiera el uso de herencia múltiple. 
Diseña una jerarquía de clases donde una clase base tiene al menos dos clases derivadas. 
A continuación, crea una clase que herede de ambas clases derivadas. Demuestra cómo se heredan las propiedades y métodos de ambas clases.*/

class Persona {
    private:
    string _nombre;
    int _edad;
    public:
    Persona (string n, int e) : _nombre(n), _edad(e) {}
    inline void caminar (){
        cout<<"Estado actual:\nEmpieza a caminar\n";
    }
    virtual void print () {
        cout<<"Datos personales\n";
        cout<<"Nombre: "<<_nombre<<endl;
        cout<<"Edad: "<<_edad<<endl;
    }
};

class Estudiante : public Persona {
    private: 
    string _capacidad;
    int _grado;
    public:
    Estudiante (string n, int e, string ca, int gra) : Persona(n,e), _capacidad(ca), _grado(gra) {}
    inline void Estudiar (){
        cout<<"Estado actual:\nVa a estudiar\n";
    }
    virtual void print () override{
        Persona::print();
        cout<<"Informacion del estudiante\n";
        cout<<"Grado: "<<_grado<<endl;
        cout<<"Aspecto notable: "<<_capacidad<<endl;
    }

};

class Profesor : public Persona {
    private: 
    string _curso;
    int _horario;
    public:
    Profesor (string n, int e, string ca, int gra) : Persona(n,e), _curso(ca), _horario(gra) {}
    inline void ImparteClases (){
        cout<<"Estado actual:\nEmpieza su clase\n";
    }
    virtual void print () override{
        Persona::print();
        cout<<"Informacion del docente\n";
        cout<<"Curso: "<<_curso<<endl;
        cout<<"Horas de trabajo: "<<_horario<<endl;
    }

};

class EstudianteExcepcional : public Profesor, public Estudiante {
    private: 
    string _disponibilidad;
    int _Iq;
    public:
    EstudianteExcepcional (string n, int e, string ca, int gra, string cur, int hor, string dis, int Iq) : Estudiante(n,e,ca,gra), Profesor(n,e,cur,hor), _disponibilidad(dis), _Iq(Iq) {}
    inline void Soberbio (){
        cout<<"Actitud en clase:\nEmpieza a presumir en clase.";
    }
    virtual void print () override{
        Estudiante::print();
        cout<<"Habilidades extra\n";
        cout<<"Disponibilidad: " <<_disponibilidad<<endl;
        cout<<"Coeficiente intelectual: "<<_Iq<<endl;
    }

};

int main (){
    EstudianteExcepcional migenio ("Pepe",18,"Superdotado",4,"Ciencias",8,"En las mañanas", 215);
    migenio.print();
    migenio.ImparteClases();
    migenio.Soberbio();
    return 0;
}