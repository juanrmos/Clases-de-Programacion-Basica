#include<iostream>
#include<string>
using namespace std;

class Vehiculo {
    private:
    string _marca;
    
    public:
    Vehiculo (const string &marca): _marca(marca) {}
    virtual void print () const {
        cout<<"Marca: "<<_marca<<endl;
    }
};

class Auto : public Vehiculo{
    private:
    int _puertas;
    public:
    Auto (const string &marca, const int puertas) : Vehiculo(marca) , _puertas(puertas) {}
    virtual void print () const override {
        Vehiculo::print();
        cout<<"Tipo: Auto.\n";
        cout<<"N° de puertas: "<<_puertas<<endl;
    }
};

class Moto : public Vehiculo{
    private: 
    string _estilo;
    public:
    Moto (const string& marca, const string &estilo) : Vehiculo(marca), _estilo(estilo){}
    virtual void print () const override {
        Vehiculo::print();
        cout<<"Estilo de la moto: "<<_estilo<<endl;
    }
};

int main (){
    Moto mimoto ("Toyota", "Curvo");
    mimoto.print();
    Auto miauto ("Yaris", 5);
    miauto.print();
    return 0;
}