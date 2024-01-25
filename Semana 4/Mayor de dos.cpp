#include<iostream>
using namespace std;

int main (){
int A,T,B,C;
cout<<"Ingrese sus tres numeros: "<<endl;
cin>>A>>B>>C;
if (A < B ){
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
cout<<A<<" "<<B<<" "<<C<<endl;
return 0;
}