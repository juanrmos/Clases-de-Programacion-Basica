#include <iostream>
#include <cmath>
using namespace std;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicacion(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout<<"Error: División por cero."<<endl;
        return 0;
    }
}

double exponencial(double a, double b) {
    return pow(a, b);
}

int main() {
    char operacion;
    double num1, num2;

    cout<<"Ingrese la operacion deseada (+, -, *, /, ^): ";
    cin>>operacion;

    cout<<"Ingrese el primer numero: "<<endl;
    cin>>num1;

    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>num2;

    switch (operacion) {
        case '+':
            cout<<"Resultado: "<<suma(num1, num2)<<endl;
            break;
        case '-':
            cout<<"Resultado: "<<resta(num1, num2)<<endl;
            break;
        case '*':
            cout<<"Resultado: "<<multiplicacion(num1, num2)<<endl;
            break;
        case '/':
            cout<<"Resultado: "<<division(num1, num2)<<endl;
            break;
        case '^':
            cout<<"Resultado: "<<exponencial(num1, num2)<<endl;
            break;
        default:
            cout<<"Operacion no válida." <<endl;
    }

    return 0;
}

