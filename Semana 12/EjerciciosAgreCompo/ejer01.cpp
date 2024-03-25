#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Libro { //clase agregada 
    private:
    string _autor;
    string _titulo;
    int _pag;
    
    public: 
    Libro (string autor, string titulo, int paginas) :
    _autor(autor), _titulo(titulo), _pag(paginas) {}
    //getters
    string getAutor () const {return _autor;}
    string getTitulo () const {return _titulo;}
    int getPaginas () const {return _pag;}
    //setters
    void SetAutor (string autor) {_autor = autor;}
    void SetTitulo (string titulo) {_titulo = titulo;}
    void SetPaginas (int paginas) {_pag = paginas;}

    void Print () { //comprobacion de la informacion de libro
        cout<<"Autor: "<<_autor<<endl;
        cout<<"Titulo: "<<_titulo<<endl;
        cout<<"N° de Paginas:"<<_pag<<endl;
    }
};

class Biblioteca { //clase contenedora 
    private:
    vector <Libro*> ListadeLibros;

    public:

    void AgregarLibro (Libro* n) { //agregacion de mas libros (demasiado importante)
        ListadeLibros.push_back(n);
    } 

    void MostrarLibros () {
        cout<<"Libros de la biblioteca: "<<endl; //impresion de libros de forma automatica
        for (const auto&Libros : ListadeLibros) {
            cout<<"Autor: "<<Libros->getAutor()<<endl;
            cout<<"Titulo: "<<Libros->getTitulo()<<endl;
            cout<<"N° de Paginas: "<<Libros->getPaginas()<<endl; 
        }
    }
};

int main (){
    Libro Milibro("Pepe botella","La caida de tuntankamon",28);
    Milibro.Print();
    Libro* L1 = new Libro("Pepe botella","La caida de tuntankamon",28); //muy importante
    Biblioteca Sector1;
    Sector1.AgregarLibro(L1);
    Sector1.MostrarLibros();
    
    return 0;
}