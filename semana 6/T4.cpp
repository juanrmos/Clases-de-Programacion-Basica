#include <iostream>

using namespace std;

void dup(int &num) {
    num *= 2;
}

int main() {
    int num;
    cout << "Ingrese su numero: " << endl;
    cin>>num;
    dup(num);
    cout << "Numero duplicado: " << num << endl;
    return 0;
}
