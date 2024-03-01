#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Fruta {
    string nombre;
    string Frutas[2];
};

int main() {
    vector<Fruta> Fruit(5);
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese su " << i + 1 << " fruta: " << endl;
        getline(cin, Fruit[i].nombre);
        cin.ignore();

        for (int j = 0; j < 2; j++) {
            cout << "Ingrese su " << j + 1 << " caracteristica: " << endl;
            getline(cin, Fruit[i].Frutas[j]);
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << "Fruta: ";
        cout << Fruit[i].nombre << endl;
        cout << endl;
        for (int j = 0; j < 2; j++) {
            cout << j + 1 << " caracteristica: ";
            cout << Fruit[i].Frutas[j] << endl;
        }
        cout << endl;
    }

    return 0;
}
