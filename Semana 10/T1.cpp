#include <iostream>
#include <string>
using namespace std;

/*Diseña una jerarquía de clases que represente vehículos. Incluye una clase base "Vehiculo" y 
al menos dos clases derivadas que representen tipos específicos de vehículos (por ejemplo, "Automovil" y "Motocicleta"). 
Añade propiedades y métodos relevantes a cada clase. Luego, crea instancias de cada clase y demuestra la herencia.
*/

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
    Motocicleta mimoto (2, "Triangular", "Roja con negro");
    mimoto.print();
    Auto miauto (4, "Sanday", "340km/h"); 
    miauto.print();
    miauto.arrancar();
    miauto.AbrirPuerta();
    return 0;
}