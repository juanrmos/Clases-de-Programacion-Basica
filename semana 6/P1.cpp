/*Crea una estructura llamada Alumno que almacene el nombre, la edad y la calificación de un estudiante.
Luego, declara un array de Alumno y permite al usuario ingresar la información de varios estudiantes.*/
#include<iostream>
#include <string>
#include <vector>
using namespace std;

struct Estud {

string nombre;
int edad;
int calificacion;

};


int main (){

int Nota = 0;
double prom = 0;
int n = 0;

cout<<"Ingrese la cantidad de estudiantes: "<<endl;
cin>>n;

vector <Estud> Estudiante (n);

for (int i = 0; i < n; i++){

cout<<"Ingrese el nombre del "<<i+1<<" estudiante: "<<endl;
cin.ignore();
getline(cin,Estudiante[i].nombre);
cout<<"Ingrese su edad: "<<endl;
cin>>Estudiante[i].edad;
cout<<"Ingrese sus 2 calificaciones: "<<endl;
for(int j = 0; j<2;j++ ){
    cin>>Nota;
    prom = Nota + prom;
}
prom = prom/2;
Estudiante[i].calificacion = prom;
prom = 0;
Nota = 0;
}

for (int i = 0; i < n; i++){

    cout<<i+1<<" Estudiante: "<<Estudiante[i].nombre<<endl;
    cout<<"Edad: "<<Estudiante[i].edad<<endl;
    cout<<"Calificacion Promedio: "<<Estudiante[i].calificacion<<endl;
}
return 0;
}