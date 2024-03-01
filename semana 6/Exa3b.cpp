#include <iostream>
#include <cmath>
using namespace std;


void suma(double a, double b, double &resultado) {
    resultado = a + b;
}

void resta(double a, double b, double &resultado) {
    resultado = a - b;
}

void multiplicacion(double a, double b, double &resultado) {
    resultado = a * b;
}

void division(double a, double b, double &resultado) {
    if (b != 0) {
        resultado = a / b;
    } else {
        cout << "Error: División por cero." << endl;
        resultado = 0;
    }
}

void exponencial(double a, double b, double &resultado) {
    resultado = pow(a, b);
}

int main() {
    char operacion;
    double num1, num2, resultado;

    cout<<"Ingrese la operacion deseada (+, -, *, /, ^): ";
    cin>>operacion;
    cout<<endl;
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<endl;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;

    switch (operacion) {
        case '+':
            suma(num1, num2, resultado);
            cout<<"Resultado: "<<resultado<<endl;
            break;
        case '-':
            resta(num1, num2, resultado);
            cout<<"Resultado: "<<resultado<<endl;
            break;
        case '*':
            multiplicacion(num1, num2, resultado);
            cout<<"Resultado: "<<resultado<<endl;
            break;
        case '/':
            division(num1, num2, resultado);
            cout<<"Resultado: "<<resultado<<endl;
            break;
        case '^':
            exponencial(num1, num2, resultado);
            cout<<"Resultado: "<<resultado<<endl;
            break;
        default:
            cout<<"Operacion no válida."<<endl;
    }
    return 0;
}
