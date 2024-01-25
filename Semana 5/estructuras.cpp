#include<iostream>
#include<vector>
#include<string>
using namespace std;
//antes de la funcion principal


struct Person { //la primera letra del "nombre" debe estar en mayuscula.
    string Nombre;
    int edad;
    int altura;
    void imprimirInformacion (){ 
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Edad: "<<edad<<" años"<<endl;
    cout<<"Altura: "<<altura<<" metros"<<endl;
    }
}; //siempre termina con ;

int main (){

    Person persona1; //Se usa el nombre de la estructura y se acompaña mas el nombre de la variable en uso.
    persona1.altura = 1.65; //se ingresa los datos de la variable.
    persona1.edad = 18;
    persona1.Nombre = "Juan";

    persona1.imprimirInformacion ();

    return 0;
}