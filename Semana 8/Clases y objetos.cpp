#include<iostream>
#include<string>
using namespace std;

class persona{
    public:
    string name;
    unsigned short year;
    //constructor (Funcion que inicia las variables de la clase y nos permite crear objetos)
    persona(string n, unsigned short y){
        this ->name = n;
        this ->year=y;

    }
    //Metodos
    void Mostrar () {
        cout<<"Nombre: "<<this->name<<"\nAnios: "<<this->year<<endl;

    }
};

int main (){
    persona p1("Juan",18);
    p1.Mostrar();
    persona p2("Luis",0);
    p2.Mostrar();
    return 0;
}