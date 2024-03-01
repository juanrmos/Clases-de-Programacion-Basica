#include<iostream>
#include<string>
using namespace std;

class Electrodomesticos {
    private:
    string _marca;
    string _modelo;
    
    public:
    Electrodomesticos (const string & name, const string & modelo ) :
    _marca(name),
    _modelo(modelo)
    {}
    
    virtual void print () const {
        cout<<"Marca: "<<_marca<<endl;
        cout<<"Modelo: "<<_modelo<<endl;
    }
};

class Refri : public Electrodomesticos {
    private:
    double _temperatura;
    
    public:
    Refri (const string &name, const string &modelo, double temp):
    Electrodomesticos(name, modelo),
    _temperatura(temp)
    {
        cout<<"La lavadora magicamente habla, y dice:\nacefrio"<<endl;
    }
    virtual void print () const override {
        Electrodomesticos::print();
        cout<<"Temperatura: "<<_temperatura<<endl;
    }
};

class Lavadora : public Electrodomesticos {
    private:
    unsigned short _revoluciones;

    public:
    Lavadora (const string & name, const string & modelo, unsigned short rev) :
    Electrodomesticos(name, modelo),
    _revoluciones(rev)
    {
        cout<<"La lavodora dice: Doy vueltas\n";
    }
    virtual void print () const override {
        Electrodomesticos::print();
        cout<<"Numero de revoluciones: "<<_revoluciones<<endl;
    }
};
int main (){
    Refri miRe ("Carlos","Samsung",5.25);
    miRe.print();
    cout<<endl;
    Lavadora MiLa ("Pepe","Lg", 90);
    return 0;
}