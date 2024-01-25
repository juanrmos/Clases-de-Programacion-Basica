//practica de funciones
#include<iostream>
#include<vector>
using namespace std;


int Distancia (int v,int t){
    int r = v*t;
    return r;
}

int llenar (){
    int t, v;
    cout<<"Ingrese un numero: "<<endl;
    cin>>t>>v;
    return t;
}

void mostrar (int x, int y, int z ){
    cout<<"La distancia es: "<<x<<" * "<<y<<" "<<" = "<<z<<endl;
}

int main (){
    int v,t,d;
    v = llenar();
    d = Distancia(v,t);
    mostrar(v,t,d);
    return 0;
}
