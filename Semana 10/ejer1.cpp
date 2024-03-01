#include <iostream>
using namespace std;

class Nombre
{
protected:
    string _name;
public:
    Nombre (string name) : _name(name) {}
    virtual void mostrar (){
        cout<<"Nombre: "<<_name;
    }

};

class Apellido : public Nombre
{
private:
    string _lastNa;
public:
    Apellido (string name, string lastN) : Nombre(name), _lastNa(lastN) {}
    void mostrar () {
        cout<<"Nombres y apellidos: "<<_name<<" "<<_lastNa; //Este es uno de los usos de protected.
    }
};

int main () {
    Nombre *n; /*Usando las clases como punteros*/
    Apellido *a; 
    n = a = new Apellido ("Juan", "Ramos"); //Usa "new" 
    // n = static_cast<Nombre *> (n)->mostrar(); Algo raro, lo convierte? La clase nombre que se comporte como apellido? Raro y no funcional
    n->mostrar(); 
    a->mostrar();

return 0;
}