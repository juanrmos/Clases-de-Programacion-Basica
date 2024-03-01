#include<iostream>
#include<string>
using namespace std;

class Estudiante
{
private:
    string nombre;
    unsigned edad;
public:
    Estudiante(string n, unsigned y){
        this->nombre = n;
        this->edad = y;
    }

string getNom () const{
    return this->nombre;
}

int getEdad () const {
    return this->edad;
}
void setEdad (int edad) {
    this->edad = edad;
}
void setNombre (string nombre){
    this->nombre = nombre;
}

void mostrarDatos () const{
cout<<"Nombre: "<<nombre<<endl;
cout<<"Edad: "<<edad<<endl;
}

};
int main (){
    Estudiante p1("Juan",19);
    cout<<"Datos del estudiantes: "<<endl;
    p1.mostrarDatos();
    cout<<endl;
    string rename;
    int Nedad;
    cout<<"Modifique el nombre"<<endl;
    cin>>rename;
    cout<<endl;
    cout<<"Modifique la edad"<<endl;
    cin>>Nedad;
    p1.setNombre(rename);
    p1.setEdad(Nedad);
    p1.mostrarDatos();
    return 0;
}