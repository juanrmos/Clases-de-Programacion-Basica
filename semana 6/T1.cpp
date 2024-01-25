#include<iostream>
#include<string>
#include<vector>
using namespace std;

int Mult (int x, int y){
return x*y;
}


int main (){
    int a,b;
    cout<<"Ingrese su primer y segundo numero: "<<endl;
    cin>>a>>b;
    int res = Mult(a,b);
    cout<<"Su resultado es: "<<res<<endl;
    return 0; 
}