/*Define una clase Empleado que tenga atributos como nombre, salario y cargo. 
Luego, crea un programa que permita al usuario ingresar los datos de varios empleados y 
los almacene en un vector de objetos de tipo Empleado. 
Finalmente, muestra la información de todos los empleados registrados.*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Empleado {

//encapsulamiento
private:
string _nombre;
string _cargo;
double _salario;

public:

//constructor
Empleado (string nombre, string cargo, double salario):
    _nombre(nombre),
    _cargo(cargo),
    _salario(salario)
{}
//Obtencion de datos
string getNombre () const{
    return _nombre;
}
string getCargo () const{
    return _cargo;
}
double getSalario () const{
    return _salario;
}

//Cambio de datos
void setNombre (string nombre) {
    _nombre = nombre;
}
void setCargo (string cargo) {
    _cargo = cargo;
}
void setSalario (double salario) {
    _salario = salario;
}

//imprimir datos
void imprimir () const{
    cout<<"Nombre: "<<_nombre<<endl;
    cout<<"Cargo: "<<_cargo<<endl;
    cout<<"Salario: "<<_salario<<endl;
}

};

int main (){

int n;
cout<<"Ingrese la cantidad de empleados\n";
cin>>n;

vector <Empleado> empleados;
    for (int i = 0; i < n; i++){
        string Nom;
        string Car;
        double Suel;
        cout<<"Nombre del "<<i+1<<" empleado:\n";
        cin>>Nom;
        cout<<"Cargo:\n";
        cin>>Car;
        cout<<"Sueldo:\n";
        cin>>Suel;
        Empleado NuevoEmpleado (Nom,Car,Suel);
        empleados.push_back(NuevoEmpleado);
    }

cout << "Empleados agregados: " << endl;
for (const auto& objt : empleados) {
    cout << "Nombre: " << objt.getNombre() << endl;
    cout << "Cargo: " << objt.getCargo() << endl;
    cout << "Salario: " << objt.getSalario() << endl;
}

return 0;
}