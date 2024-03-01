#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Emple {
    string nombre;
    double salario;
    string puesto;
void Impre (){
    cout<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Puesto: "<<puesto<<endl;
    cout<<"Salario: "<<salario<<endl;
}

};

int main (){
int n = 0;
cout<<"Ingrese la cantidad de empleados: "<<endl;
cin>>n;
vector <Emple> Empleados(n);
for (int i = 0; i<n; i++){
    cout<<"Ingrese el nombre del "<<i+1<<" empleado: "<<endl;
    cin.ignore();
    getline(cin,Empleados[i].nombre);
    cout<<"Ingrese el puesto de trabajo: "<<endl;
    getline(cin,Empleados[i].puesto);
    cout<<"Ingrese su salario: "<<endl;
    cin>>Empleados[i].salario;
}

for (int i = 0; i<n; i++){
    cout<<endl;
    cout<<i+1<<" Empleado: ";
    Empleados[i].Impre();
}

return 0;
}