#include <iostream>
#include <string>
using namespace std;

/*Amplía la jerarquía de clases de la Tarea 1 para incorporar polimorfismo. Define una función virtual en la clase base 
y sobrescríbela en al menos una de las clases derivadas. 
Luego, crea un arreglo de punteros a la clase base y utiliza el polimorfismo para realizar operaciones específicas en cada tipo de vehículo.*/


class Vehiculo {
    protected:
    int _whells;
    
    public:
    Vehiculo (int w) : _whells(w) {} 

    inline void arrancar () {
        cout<<"Prendio.\n";
    }
    virtual void print () const {
        cout<<"El vehiculo tiene "<<_whells<<" ruedas.\n"; 
    }

};

class Auto : public Vehiculo {
    private:
    string _marca;
    string _velocidad;
    public:
    Auto (int w, string mar, string vel) : Vehiculo(w), _marca(mar), _velocidad(vel) {}

    inline void AbrirPuerta () {
        cout<<"La puerta se abre"<<endl;
    }

    virtual void print () const override {
        Vehiculo::print();
        cout<<"Marca del auto: "<<_marca<<endl;
        cout<<"Velocidad del auto "<<_velocidad<<endl;
    }
};

class Motocicleta : public Vehiculo {
    private:
    string _shape;
    string _diseño;
    public:
    Motocicleta (int w, string sh, string di) : Vehiculo(w), _shape(sh), _diseño(di) {}

    inline void Estacionar () {
        cout<<"La moto se estaciona"<<endl;
    }

    virtual void print () const override {
        Vehiculo::print();
        cout<<"Forma: "<<_shape<<endl;
        cout<<"Diseño: "<<_diseño<<endl;
    }
};
int main () {
    int tam = 2;
    Vehiculo* vehibase[tam];

    Motocicleta mimoto (2, "Triangular", "Roja con negro");
    Auto miauto (4, "Sanday", "340km/h"); 

    vehibase[0] = &miauto;
    vehibase[1] = &mimoto;

    for (int i = 0; i < tam; i++){
        vehibase[i]->print();
    }
    
    dynamic_cast<Auto*>(vehibase[1])->arrancar();
    dynamic_cast<Auto*>(vehibase[1])->AbrirPuerta();
    return 0;
}