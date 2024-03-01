#include <iostream>
using namespace std;

void Intercambio (int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
cout<<"Nuevo primer valor: "<<*a<<endl;
cout<<"Nuevo segundo valor: "<<*b<<endl;
}

int main (){
int x , y;
cout<<"Ingrese sus dos valores: "<<endl;
cin>>x>>y;
Intercambio (&x,&y);
    return 0;
}