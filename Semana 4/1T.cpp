//Ingresar 10 numeros y calcular su promedio; luego, mostrar el resultado y que numeros son mayores al "promedio"
#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector <int> Num (10); 
    int prom,sum,i;
    prom = 0;
    i = 0;
    sum = 0;
    while ( i < Num.size()) {
        cout<<"Ingrese el "<<i + 1<<" numero: "<<endl;
        cin>>Num[i];
        sum = Num[i] + sum;
        i++;
    }

    prom = sum/10;
    int n = 0;
    for ( i = 0; i< Num.size(); i++){
        if ( Num[i] > prom) {
        n++;
        }
    }

    cout<<"Su promedio es: "<<prom<<endl;
    cout<<"Cantidad de numeros mayores al promedio: "<<n;
    return 0;
}