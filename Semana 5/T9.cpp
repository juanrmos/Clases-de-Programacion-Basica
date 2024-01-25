/*Define un struct llamado Estudiante que contenga un array para las calificaciones. 
Crea un vector de estructuras Estudiante y permite al usuario ingresar calificaciones para varios estudiantes. 
Calcula y muestra el promedio de calificaciones para cada estudiante.*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Estudiante {

string nombre;
int cal[4];
double prom;
};

int main (){
    int n;
    cout<<"Ingrese la cantidad de estudiantes:\n";
    cin>>n;
    vector <Estudiante> estud (n);

    int prom1 = 0;
    for (int i = 0; i < n; i++){
    cout<<"Nombre del "<<i+1<<" estudiante:\n";
    cin.ignore();
    getline(cin,estud[i].nombre);

        for(int j = 0; j < 4; j++){
        cout<<"Ingrese su "<<j+1<<" nota: "<<endl;
        cin>>estud[i].cal[j];
        prom1 += estud[i].cal[j];
        }

    estud[i].prom = prom1/4;
    prom1 = 0;
    }
    cout<<"Estudiantes: "<<endl;
    for (int i = 0; i<n; i++){
        cout<<"\nNombre: "<<estud[i].nombre<<endl;
        cout<<"Calificaciones: "<<endl;
        for (int j = 0; j < 4; j++){
        cout<<"Calificacion "<<j+1<<" :"<<estud[i].cal[j]<<endl;
        }
        cout<<"Promedio:"<<estud[i].prom<<endl;
    } 
    return 0;
}