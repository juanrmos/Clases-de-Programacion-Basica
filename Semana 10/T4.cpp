#include <iostream>
#include <string>

using namespace std;

// Clase base RecursoBibliografico
class RecursoBibliografico {
protected:
    string _titulo;
    int _año;

public:
    RecursoBibliografico(const string& titulo, int año)
        : _titulo(titulo), _año(año) {}

    virtual void mostrarDetalles() const {
        cout << "Titulo: " << _titulo << endl;
        cout << "Año de publicacion: " << _año << endl;
    }
};

// Clase derivada Libro
class Libro : public RecursoBibliografico {
private:
    string _autor;
    int _numeroPag;

public:
    Libro(const string& titulo, int año, const string& autor, int numeroPaginas)
        : RecursoBibliografico(titulo, año), _autor(autor), _numeroPag(numeroPaginas) {}

    virtual void mostrarDetalles() const override {
        RecursoBibliografico::mostrarDetalles();
        cout << "Autor: " << _autor << endl;
        cout << "Numero de paginas: " << _numeroPag << endl;
    }
};

// Clase derivada Revista
class Revista : public RecursoBibliografico {
private:
    string _editorial;
    int _numeroEdi;

public:
    Revista(const string& titulo, int año, const string& editorial, int numero)
        : RecursoBibliografico(titulo, año), _editorial(editorial), _numeroEdi(numero) {}

    virtual void mostrarDetalles() const override {
        RecursoBibliografico::mostrarDetalles();
        cout << "Editorial: " << _editorial << endl;
        cout << "Numero de edicion: " << _numeroEdi << endl;
    }
};

// Clase derivada Periodico
class Periodico : public RecursoBibliografico {
private:
    string _editor;
    string _fecha;

public:
    Periodico(const string& titulo, int año, const string& editor, const string& fecha)
        : RecursoBibliografico(titulo, año), _editor(editor), _fecha(fecha) {}

    virtual void mostrarDetalles() const override {
        RecursoBibliografico::mostrarDetalles();
        cout << "Editor: " << _editor << endl;
        cout << "Fecha de publicacion: " << _fecha << endl;
    }
};

int main() {
    
    Libro libro("Pepe", 1943, "Antoine de Pepe", 102);
    Revista revista("PepeChisme", 2016, "PepesStudios", 102);
    Periodico periodico("PepesTimesNew", 1851, "Pepe Rodriguez Jr.", "31 de septiembre de 1901");


    cout << "Detalles del libro:" << endl;
    libro.mostrarDetalles();
    cout << endl;

    cout << "Detalles de la revista:" << endl;
    revista.mostrarDetalles();
    cout << endl;

    cout << "Detalles del periodico:" << endl;
    periodico.mostrarDetalles();
    cout << endl;

    return 0;
}
