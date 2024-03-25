#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Libro {
    private:
    string _autor;
    string _titulo;
    int _pag;
    
    public:
    Libro (int pag, string autor, string titulo) : 
    _pag(pag), _autor(autor), _titulo(titulo) {}
    //Setters
    void SetAutor (string autor) {_autor = autor;}
    void SetTitulo (string titulo) {_titulo =titulo;}
    void SetPag (int pag) {_pag = pag;}
    //getters
    int GetPag () const {return _pag;}
    string GetAutor () const {return _autor;}
    string GetTitulo () const {return _titulo;}

};  

class Biblioteca {
    private:
    vector <Libro*> ListadeLibros;
    public:
    //Agregar libros
    void AgregarLibros (Libro *n) { //Se crea un objeto tipo puntero de libro.
        ListadeLibros.push_back(n);
    }
    //Imprimir
    void ImprimirLibros () {
        cout<<"Lista de libros: "<<endl;
        for(const auto&Libros : ListadeLibros ){
            cout<<"Autor: "<<Libros->GetAutor()<<endl;
            cout<<"Titulo: "<<Libros->GetTitulo()<<endl;
            cout<<"Paginas: "<<Libros->GetPag()<<endl;
        }
    }
    //eliminar libros
};

int main () {
    Libro *L1 = new Libro (500,"Pepe","Pedranzas");
    Biblioteca Salon1;
    Salon1.AgregarLibros(L1);
    Salon1.ImprimirLibros();

    return 0;
};  