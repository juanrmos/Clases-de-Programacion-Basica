#include <iostream>

using namespace std;

int MCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout<<"Ingrese dos numeros: "<<endl;
    cin>>num1>>num2;
    cout << "Maximo Comun Divisor de " << num1 << " y " << num2 << ": " << MCD(num1, num2) << endl;

    return 0;
}
