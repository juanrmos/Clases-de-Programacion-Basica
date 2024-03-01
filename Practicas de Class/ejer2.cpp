/*Define una clase Libro que tenga atributos como título, autor y número de páginas. 
Luego, crea un programa que simule la gestión de libros en una biblioteca, 
permitiendo al usuario agregar nuevos libros, buscar libros por autor o título, 
y mostrar la lista completa de libros disponibles.*/

#include<iostram>
#include<string>
#include<vector>
using namespace std;

class Libro {
    //Encapsulamiento.
    private:
    string _titulo, _autor;
    unsigned short _pag;

    public:
    Libro (string titulo, string autor, unsigned short pag):
    _titulo(titulo),
    _autor(autor),
    _pag(pag)
    {}
    //obtener datos
    string getTitle () const{
        return _titulo;
    }
    string getAut () const {
        return _autor;
    }
    unsigned short getPag () const {
        retunr _pag;
    }

    //modificar datos
    void setTitle (string titulo) {
        _titulo = titulo;
    }
    void setAut (string autor) {
        _autor = autor;
    }
    void setPag (unsigned short pag){
        _pag = pag;
    }
    //Otras funciones
    //impresion.
    void print (){
        cout<<"Titulo: "<<_titulo<<endl;
        cout<<"Autor: "<<_autor<<endl;
        cout<<"Numero de paginas: "<<_pag<<endl;
    }

};

//funciones fuera de la clase (Para no sobrecargarlo)
void AddLibro (vector <Libro> &libros ){
    string libro, autor;
    unsigned short pag; 
    
    cout<<"Ingrese el titulo del libro:\n";
    cin>>libro;
    cout<<"Ingrese el autor:\n";
    cin>>autor;
    cout<<"Ingrese el n° de paginas:\n";
    cin>>pag;

    Libro NuevoLibro (libro,autor,pag);
    libros.push_back(NuevoLibro);
}

void MostrarMenu (){
    cout<<"(1) Agregar libros\n";
    cout<<"(2) Buscar libros\n";
    cout<<"(3) Mostrar todos los libros\n";
    cout<<"(4) Salir del programa\n";
}

void MostrarLibros (const vector<Libro> &libros){
    if (libros.empty()){
        cout<<"Aun no hay libros que mostrar\n";
        return;
    }
    
}

int main (){
    vector <Libro> Libros;
    
    while (n =! 4){
    
    MostrarMenu();
    int n;
    cin>>n;
    
    switch (n)
    {
    case 1:
        unsigned short x;
        cout<<"Ingrese la cantidad de libros que quiere agregar:\n";
        cin>>x;
        for(int i = 0; i < x; i++){
            cout<<"Ingrese el libro #"<<i+1<<endl;
            AddLibro(Libros);
    }
    break;
    case 2:

    break; 
    case 3:

    default:
        cout<<"Funcion no disponible\n";
        break;
    }
    }
    return 0;
}