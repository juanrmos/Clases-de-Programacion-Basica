#include <iostream>
#include <string>
#include <vector>

//agregar destructores.Investigar.
//agregar un dueño para cada casa y modificar su ubicacion con la ubicacion de la calle en una matriz.Realizar 


using namespace std;

class Techo {
private:
    int x, y, z, base;

public:
    Techo() : x(0), y(0), z(0), base(0) {} //constructor que inicia los valores en 0 (en caso de que no se agreguen).
    Techo(int _x, int _y, int _z, int _base) : x(_x), y(_y), z(_z), base(_base) {} //constructor parametrizado en el codigo. Permitiendo su modificacion en el llamado.

    void dibuja() const { //funcion que imprime los valores. 
        cout << "Dibujando techo en (" << x << ", " << y << ", " << z << ") con base " << base << endl;
    }
    //Getters 

    int getX() const { return x; }
    int getY() const { return y; }
    int getZ() const { return z; }
    int getBase() const { return base; }

    // Setters
    void setX(int _x) { x = _x; }
    void setY(int _y) { y = _y; }
    void setZ(int _z) { z = _z; }
    void setBase(int _base) { base = _base; }

};

class Bloque {
private:
    int base, altura, x, y, z;

public:
    Bloque() : base(0), altura(0), x(0), y(0), z(0) {} //Cons. 0
    Bloque(int _base, int _altura, int _x, int _y, int _z) : base(_base), altura(_altura), x(_x), y(_y), z(_z) {}//cons. parametrizado

    void dibuja() const { //funcion de impresion
        cout << "Dibujando bloque en (" << x << ", " << y << ", " << z << ") con base " << base << " y altura " << altura << endl;
    }
    //getters 
    int getBase() const { return base; }
    int getAltura() const { return altura; }
    int getX() const { return x; }
    int getY() const { return y; }
    int getZ() const { return z; }

    // Setters
    void setBase(int _base) { base = _base; }
    void setAltura(int _altura) { altura = _altura; }
    void setX(int _x) { x = _x; }
    void setY(int _y) { y = _y; }
    void setZ(int _z) { z = _z; }
};

class Casa {
private:
    int x, y;
    Bloque bloque; //Composicion, se tienen instancias de otras clases como atributos y se usan sus funciones.
    Techo techo;

public:
    Casa() : x(0), y(0), bloque(), techo() {} //const 0 
    Casa(int _x, int _y, int baseBloque, int alturaBloque, int baseTecho, int alturaTecho) //const. parametrizado y llamado de objetos
        : x(_x), y(_y), bloque(baseBloque, alturaBloque, _x, _y, 0), techo(_x, _y, alturaTecho, baseTecho) {}

    void dibuja() const { //funcion de impresion 
        cout << "Dibujando casa en (" << x << ", " << y << ")" << endl;
        bloque.dibuja();
        techo.dibuja();
    }
};

class Urbanizacion {
private:
    vector<Casa> laListaCasas; //Agregacion

public:
    Urbanizacion() {}
    Urbanizacion(const vector<Casa>& casas) : laListaCasas(casas) {}

    void dibuja() const {
        cout << "Dibujando urbanizacion:" << endl;
        for (const auto& casa : laListaCasas) {
            casa.dibuja();
        }
    }
};

int main() {
        vector<Casa> casas = {
        Casa(5, 3, 10, 10, 8, 2),  
        Casa(6, 4, 20, 20, 9, 3),   
        Casa(4, 2, 30, 30, 7, 1)    
    };

    Urbanizacion urbanizacion(casas);
    urbanizacion.dibuja();
}
