#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Motor { 
    private: 
    int _potencia;
    string _tipoCompostaje;
    public:
    Motor (int potencia, string tipodecombustible) :
    _potencia(potencia), _tipoCompostaje(tipodecombustible) {}
    //getters
    int Getpotencia () const {return _potencia;}
    string GetCombustible () const {return _tipoCompostaje;}
    //setters
    void SetPotencia (int potencia) {_potencia = potencia;}
    void SetCombustible (string combustible) {_tipoCompostaje = combustible;}
    //metodos
    void Encendido () {cout<<"Motor encendido\n";}
    void Apagado () {cout<<"Motor apagado\n";}
};

class Auto {
    private:
    Motor MotorPri;
    public:
    Auto (int potencia, string TipoGasolina) :
    MotorPri(potencia, TipoGasolina) {}

    void Encender () {
        MotorPri.Encendido();
    }
    void print () {
        cout<<"Potencia: "<<MotorPri.Getpotencia()<<endl;
        cout<<"Tipo de combustible: "<<MotorPri.GetCombustible()<<endl;
    }
};

int main () {
    Auto Miauto (100, "Premium");
    Miauto.Encender();
    Miauto.print();
    return 0;
}