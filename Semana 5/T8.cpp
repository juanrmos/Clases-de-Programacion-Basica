/*Define un struct llamado Libro que contenga información sobre libros, como título, autor y año de publicación. 
Crea un vector de estructuras Libro y permite al usuario ingresar información para varios libros. 
Muestra la información de todos los libros.*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Libro {

string titulo;
string autor;
int publico;

};

int main (){
    int n;
    cout<<"Ingrese la cantidad de libros que desea guardar: "<<endl;
    cin>>n;
    vector <Libro> info (n);

    for (int i = 0; i < n; i++ ){
    cout<<"\nIngrese la informacion del libro "<<i+1<<":\n";
    cout<<"Titulo: \n";
    cin.ignore();
    getline(cin,info[i].titulo);
    
    cout<<"Ingrese el autor: \n";
    getline(cin,info[i].autor);
    cout<<"Ingrese el anio de publicacion: \n";
    cin>>info[i].publico;
    }

    cout<<"Libros: \n";
    for(int i = 0; i < n;i++){
    cout<<"\nLibro "<<i+1<<endl;
    cout<<"Titulo: "<<info[i].titulo<<endl;
    cout<<"Autor: "<<info[i].autor<<endl;
    cout<<"Anio de publicacion: "<<info[i].publico<<endl;
    }
    return 0;
}