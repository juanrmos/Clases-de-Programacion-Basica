#include<iostream>
#include<string>
using namespace std;

class Dipositivo {
    private:
    string _marca;
    int _potencia;

    public:
    Dipositivo(string Marca, int Potencia) : _marca(Marca), _potencia(Potencia) {}
    inline void Presentar (){
        cout<<"Nombre: "<<_marca<<endl;
        cout<<"Potencia: "<<_potencia<<endl;
    }
};

class Sistema {
    private:
    Dipositivo &dispositivos;
    public: 
    Sistema(Dipositivo &d) : dispositivos(d) {}
    inline void display () {
        dispositivos.Presentar ();
    }
};


int main (){
    Dipositivo dp("Monitor", 23);
    Sistema sp(dp);
    sp.display();
    return 0;
}