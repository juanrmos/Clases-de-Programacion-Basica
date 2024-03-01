//hallar numeros primos 

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

bool Esprimo (int x){

for (int i = 2; i <= sqrt(x); i++){
    if (x%i == 0){
        return false;
    }
}

return true;
}

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;  // 1 y números negativos no son primos
    }

    // Comprobar divisibilidad desde 2 hasta la raíz cuadrada del número
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            return false;  // El número es divisible, no es primo
        }
    }

    return true;  // Si no se encontraron divisores, es primo
}

int main (){
    int x = 0;
    cout<<"Ingrese su numero: "<<endl;
    cin>>x;
    if(Esprimo(x)){
        cout<<x<<" Es primo."<<endl;
    }else{
        cout<<x<<" No es primo."<<endl;
    }
    return 0;
}