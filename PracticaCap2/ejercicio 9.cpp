//Escribir 3 datos de forma descendente.
#include<iostream>
using namespace std;
int main (){
float A,B,C,T;
cout<<"Ingrese tres valores: "<<endl;
cin>>A>>B>>C; 
if (A < B){
    T = B;
    B = A;
    A = T;
}
if (A<C){
    T = C;
    C = A;
    A = T;
}
if (B<C){
    T = C;
    C = B;
    B = T;
}
cout<<"Descendiente: "<<A<<" "<<B<<" "<<C<<endl;

return 0;
}