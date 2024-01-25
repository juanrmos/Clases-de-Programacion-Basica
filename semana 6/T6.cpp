#include <iostream>

using namespace std;

bool Primo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout<<"Ingrese su numero primo: "<<endl;
    cin>>num;
    

    if (Primo(num)) {
        cout << num << " es un numero primo." << endl;
    } else {
        cout << num << " no es un numero primo." << endl;
    }

    return 0;
}
