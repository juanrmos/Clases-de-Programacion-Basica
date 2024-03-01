#include<iostream>
#include<string>
using namespace std;

class Electrodomesticos {
    private:
    string _marca;
    string _modelo;
    public:
    Electrodomesticos (const string &marca, const string &modelo):
    _marca (marca),
    _modelo (modelo)
    {}
    string getMarca () const {
        return _marca;
    }
    string getModelo () const {
        return _modelo;
    }

    void setMarca (string marca){
        _marca = marca;
    }
    void setModelo (string modelo){
        _modelo = modelo;
    }
    
    void prender (){
        cout<<"*Se enciende*\n";
    }
    void apagar (){
        cout<<"*Se apaga*\n";
    }
    virtual void print () const {
        cout<<"Marca: "<<_marca<<endl;
        cout<<"Modelo: "<<_modelo<<endl;
    }
};

class Tv : public Electrodomesticos {
    private:
    unsigned short _pulgadas;
    public:
    Tv (const string &name, const string &modelo, unsigned short pulgadas) : 
    Electrodomesticos(name, modelo),
    _pulgadas(pulgadas)
    {
        cout<<"TzzzzzzTzzzzzzzTZzzzzzzz\n";
    }
    unsigned short getPulga () const {
        return _pulgadas;
    }
    void setPulgadas (unsigned short pulgadas) {
        _pulgadas = pulgadas;
    }

    void Cambiar (){
        cout<<"Se cambia de canal\n";
    }
    void Perdio_Peru (){
        cout<<"Perdio PERUUUUUUUUUUUUUU\nNOOOOOOOOOOOOOOOOOOOO *rompe la tele*\n";
    }
    virtual void print () const override {
        Electrodomesticos::print();
        cout<<"La cantidad de pulgadas son: "<<_pulgadas<<endl;
    }
};

class Tostadora : public Electrodomesticos {
    private:
    double _grados;
    
    public:
    Tostadora(const string &name, const string &modelo, double grados) :
    Electrodomesticos(name, modelo),
    _grados(grados)
    {
        cout<<"Espero no lleges tarde *sale un pan* "<<endl;
    }
    double grados () const {
        return _grados;
    }
    void setGrados (double grados){
        _grados = grados;
    }
    void Pan () {
        cout<<"....."<<endl;
    }
    virtual void print () const override {
        Electrodomesticos::print();
        cout<<"Los grados son de: "<<_grados<<endl;
    }
};
int main (){
    Tv miTv ("Lg","2017",29);
    miTv.print();
    miTv.Perdio_Peru();
    miTv.apagar();
    miTv.Cambiar();
    miTv.prender();
    string tvmar,tvmo;
    int pul;
    cout<<"Cambio de marca, modelo y pulgadas (en ese orden):\n";
    cin>>tvmar>>tvmo>>pul;
    miTv.setMarca(tvmar);
    miTv.setModelo(tvmo);
    miTv.setPulgadas(pul);
    miTv.print();
    Tostadora miTos ("Philips","80927",89.7);
    miTos.print();
    return 0;
}