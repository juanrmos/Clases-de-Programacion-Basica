#include<iostream>
#include<string>
using namespace std;

class Persona {
protected:
int _id;
int _dni;
string _direc;
string _Apell;
string _Nom;
public: 
Persona (int id, int dni, string direccion, string apellido, string nombre) :
_id(id),
_dni(dni),
_direc(direccion),
_Apell(apellido),
_Nom(nombre)
{}

virtual void Imprimir () const {
    cout<<"ID: "<<_id<<endl;
    cout<<"Nombre: "<<_Nom<<endl;
    cout<<"Apellidos: "<<_Apell<<endl;
    cout<<"Dni: "<<_dni<<endl;
    cout<<"Direccion: "<<_direc<<endl;
}


};

class Vendedor : public Persona {
private:
int _idVendedor;



public: 
Vendedor (int id, int dni, string direccion, string apellido, string nombre, int idvendedor) :
Persona(id, dni, direccion, apellido, nombre),
_idVendedor(idvendedor)
{}

virtual void Imprimir () const override {
    cout<<"Id del vendedor: "<<_idVendedor<<endl;
    Persona::Imprimir();
}
};

class Producto {
private:
int _idProduc;
int _precio;
int _stock;
string _descrip;
string _tipo;
string _fechaProductos;

class Ventas {
int _IdVentas;
int _IdProductos;
string _fechaVentas;
int _cantidad;


};

};


int main () {

    return 0;
}