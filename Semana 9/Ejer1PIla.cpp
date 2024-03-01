#include <iostream>
#include <string>
using namespace std;

class Pila {
private:
    int _sp = 0;
    static const int MAX_SIZE = 100;
    int _stack[MAX_SIZE];

public: 

    void push(int element) {
        if (_sp < MAX_SIZE) {
            _stack[_sp++] = element;
        } else {
            cout << "Error: la pila esta llena." << endl;
        }
    }
    
    int pop() {
        if (_sp > 0) {
            return _stack[--_sp];
        } else {
            cout << "Error: la pila está vacia." << endl;
            return 1; 
        }
    }
    void print() const {
        cout << "El numero de elementos es: " << _sp << endl;
    }
    void printElements() const {
    cout << "Elementos en la pila:" << endl;
    for (int i = 0; i < _sp; i++) {
        cout <<"Elemeto "<<i+1<<" : "<< _stack[i] << endl;
    }
}
};


int main (){
    Pila pila1;
    int n = 10, j = 1, k =4, i = 6;
    pila1.push(n);
    pila1.push(j);
    pila1.push(k);
    pila1.push(i);
    pila1.pop();
    pila1.print();
    pila1.printElements();

    return 0;
}