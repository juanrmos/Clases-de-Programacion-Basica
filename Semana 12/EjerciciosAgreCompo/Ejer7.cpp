#include<iostream>
#include<string>
using namespace std;

class Punto {
    private:
    int _x;
    int _y;
    public:
    Punto (int x, int y) : _x(x), _y(y) {}
    int getX () {return _x;}
    int getY () {return _y;}
};

class Linea {
    private:
    Punto Inicio;
    Punto Fin;
    public:
    Linea (int x1, int y1, int x2, int y2) : Inicio(x1,y1) , Fin(x2, y2) {}
    friend void Longitud (Linea Lineas);
    ~Linea () {}
};

void Longitud (Linea Lineas) {
    int x1 = Lineas.Inicio.getX();
    int x2 = Lineas.Fin.getX();
    int y1 = Lineas.Inicio.getY();
    int y2 = Lineas.Fin.getY();
    int Longitudx = x2 - x1;
    int Longitudy = y2 - y1;
    cout<<"Longitud en x: "<<Longitudx<<endl;
    cout<<"Longitud en y: "<<Longitudy<<endl;
    }

int main () {
    Linea milinea (20,10,30,40);
    Longitud(milinea);
    return 0;
}