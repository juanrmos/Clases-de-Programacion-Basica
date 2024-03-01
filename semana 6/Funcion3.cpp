#include<iostream>
#include<string>
using namespace std;

void  porreferencia (int &a, int &b){
    a *= 2;
    b *= 2;

}

void mostrar (int a,int b){
    cout<<"\nEl valor de a es: "<<a<<" y el valor de b es: "<<b<<endl;

}
int main (){
    int a = 5;
    int b = 10;
    porreferencia(a,b);
    mostrar(a,b);
    return 0;
}