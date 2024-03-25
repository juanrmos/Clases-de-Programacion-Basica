#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Habitaciones {
    private:
    double _area;
    int _Nventanas;
    public: 
    Habitaciones (double Area, int NumVentanas) :
    _area(Area), _Nventanas(NumVentanas) {}
    //Getters
    double GetArea () const {return _area;}
    int GetNVentanas () const {return _Nventanas;}
    //setters
    void SetArea (double Area) {_area = Area;}
    void SetNventanas (int Nventanas) {_Nventanas = Nventanas;}

};

class Hotel {
    private:  
    vector <Habitaciones*> ListadeHabitaciones;
    public:
    //agregar habitaciones
    void AgregarHabitaciones (Habitaciones* n) {
        ListadeHabitaciones.push_back(n);
    }

    void MostrarHabitaciones () {
        cout<<"Lista de habitaciones:\n";
        for(const auto &Cuarto : ListadeHabitaciones) {
            cout<<"Area: "<<Cuarto->GetArea()<<endl;
            cout<<"Numero de ventanas: "<<Cuarto->GetNVentanas()<<endl;
        }
    }
};

int main () {
    Habitaciones* L1 = new Habitaciones(289.12,14);
    Hotel mihotel;
    mihotel.AgregarHabitaciones(L1);
    mihotel.MostrarHabitaciones();
    return 0;
}