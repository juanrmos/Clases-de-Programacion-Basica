/*Escribe una función llamada sumarArreglo que tome un
puntero a un arreglo de enteros y el tamaño del arreglo como parámetros,
y devuelva la suma de los elementos del arreglo.*/
#include<iostream>
using namespace std;

int SumaAr (int *arreglo, int tamano){
    int Su = 0;
    for (int i = 0; i < tamano; i++){
        Su = arreglo[i] + Su;
    }
    return Su;
}

int main (){
    int n;
    cout<<"Ingrese el tamaño de su arreglo: "<<endl;
    cin>>n;
    int Num[n];
    int Resultado = SumaAr(Num, n);
    cout<<"La suma de numeros es de: "<<Resultado;
    return 0;
}