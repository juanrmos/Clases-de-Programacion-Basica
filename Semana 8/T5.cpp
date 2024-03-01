#include <iostream>
#include <cmath>
using namespace std;

class Figura {
public:
    virtual double area() const = 0;
    virtual double perimetro() const = 0;
    virtual void mostrarDetalles() const = 0;
};

class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}
    double area() const override {
        return M_PI * radio * radio;
    }
    double perimetro() const override {
        return 2 * M_PI * radio;
    }
    void mostrarDetalles() const override {
        cout << "Circulo: Radio = " << radio << ", Area = " << area() << ", Perimetro = " << perimetro() << endl;
    }
};

class Rectangulo : public Figura {
private:
    double base;
    double altura;
public:
    Rectangulo(double b, double h) : base(b), altura(h) {}
    double area() const override {
        return base * altura;
    }
    double perimetro() const override {
        return 2 * (base + altura);
    }
    void mostrarDetalles() const override {
        cout << "Rectangulo: Base = " << base << ", Altura = " << altura << ", Area = " << area() << ", Perimetro = " << perimetro() << endl;
    }
};

int main() {
    Circulo c(5.0);
    Rectangulo r(3.0, 4.0);

    c.mostrarDetalles();
    r.mostrarDetalles();

    return 0;
}
