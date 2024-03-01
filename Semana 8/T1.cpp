#include <iostream>
#include <string>
using namespace std;

class Animal {
    //encapsulamiento
    private:
    string _nombre;
    //constructor

    public:
    Animal ( string name):
    _nombre(name)
    {}

    //obtencion de datos (usando inline para ahorrar un poco de memoria)
    inline string getNombre () const {
        return _nombre;
    }

    //Funciones
    inline void Patita () {
        cout<<"Te da la patita"<<endl;
    }
    inline void Dormir () {
        cout<<"Se va a dormir\n";
    }
    inline void comer () {
        cout<<"Va a comer\n";
    }
    inline void print () {
        cout<<"Nombre: "<<_nombre<<endl;
    }
};

//Herencia

class Perro : public Animal {
public:
Perro (string name) : Animal(name) 
{
    cout<<"Gua gua\n";
}
inline void Ladrar () {
    cout<<"*Un perro te encuentra inesperadamente*\nRoof Roof\n";
}
}; 

class Gato : public Animal {
    public:
    Gato (string name) : Animal(name)
    {
    cout<<"*Un gato salvaje ha aparecido*\nDominare el mundo... Digo, Miau\n";
    }
    inline void Miau () {
        cout<<"Miau Miau Miau Miau (Sirveme esclavo)\n";
    }
};


int main (){
    Perro miperro("Pepe");
    miperro.print();
    miperro.Dormir();
    Gato migato ("Milaneso");
    migato.print();
    migato.Miau();
    return 0;
}