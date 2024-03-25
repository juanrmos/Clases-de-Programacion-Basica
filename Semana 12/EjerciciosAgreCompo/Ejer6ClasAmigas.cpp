#include <iostream>
#include <string>
using namespace std;

class Calculadora {
    private:
    double _x;
    double _y;
    public:
    Calculadora () : _x(0), _y(0) {}
    Calculadora (double x, double y) : _x(x), _y(y) {}
    friend double Sumar (Calculadora Micalculadora);

    double GetX () {return _x;}
    double GetY () {return _y;}
};

double Sumar (Calculadora Micalculadora) {
    double x = Micalculadora.GetX();
    double y = Micalculadora.GetY();
    double resul = x + y;
    cout<<resul<<endl;
    return 0;
}

int main () {
    Calculadora calculadoras(20,60.23);
    Sumar(calculadoras);
    return 0;
}