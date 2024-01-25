#include<iostream>
using namespace std;
int main (){
int N,x,num, prom;    
cout<<"Ingrese la cantidad de valores: "<<endl;
cin>>N;
prom = 0; // siempre se declara el valor inicial.
x = 0;
 while (true){
    if (x == N) break;
    cout<<"Ingrese el "<<x + 1<< " numero: "<<endl;
    cin>> num;
    prom = num + prom;
    x++; 
    
 }
cout<<"la suma total es: "<<prom<<endl;
 return 0;   
}