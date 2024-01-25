#include<iostream>
#include<vector>
using namespace std;
int main (){

int x = 15; //valor almacenado
int *p; //puntero.
p = &x; //p adquiere el valor de la direccion de x
cout<<"Direccion: "<<p<<endl;
cout<<"Valor: "<<*p<<endl; //*p devuelve el valor original de x.

return 0;
}