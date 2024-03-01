#include <iostream>
#include <string>

using namespace std;

class Empleado
{
private:
    string _nombre;
    double _salario;
    string _cargo;
public:
    Empleado(string n, double s, string x){
        this->_nombre = n;
        this->_cargo = x;
        this->_salario = s;
    }
    string getNom () const {
        return this->_nombre;
    }
    int getSal () const {
        return this->_salario;
    }
    string getCargo () const {
        return this->_cargo;
    }
    void setNom (string x){
        this->_nombre = x;
    }
    void setCargo (string i){
        this->_cargo = i;
    }
    void setSal (double j){
        this->_salario = j;
    }

    void Print () const{
        cout<<"Nombre: "<<_nombre<<endl;
        cout<<"Cargo: "<<_cargo<<endl;
        cout<<"Salario: "<<_salario<<endl;
    } 
};

int main (){
    Empleado p1 ("Juan",7500,"Gerente");
    p1.Print();
    string nom,car;
    double sal;
    cout<<"Ingrese su nombre: "<<endl;
    cin>>nom;
    p1.setNom(nom);
    cout<<"Ingrese su Cargo: "<<endl;
    cin>>car;
    p1.setCargo(car);
    cout<<"Ingrese su Salario: "<<endl;
    cin>>sal;
    p1.setSal(sal);
    p1.Print ();
    return 0;
}