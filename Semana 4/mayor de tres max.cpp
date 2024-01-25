#include<iostream>
using namespace std;

int main (){
int max,A,B,C;
cout<<"Ingrese sus tres numeros: "<<endl;
cin>>A>>B>>C;
max = A;
if (max< B) {
    max = B;
    B = A;
}else if (max<C){
    max = C;    
}  
cout<<"el valor maximo es: "<<max<<endl;
return 0;
}