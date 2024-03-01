#include<iostream>
#include<vector>
using namespace std;

void Mostrar(int a, int b, int c, int d, int e, int su){
cout<<a<<" + "<<b<<" + "<<c<<" + "<<d<<" + "<<e<<" = "<<su;
}

int Sumar(int a, int b, int c, int d, int e){
int su = a+b+c+d+e;
return su;    
}

int llenar (){
    int r;
    cout<<"Ingrese su numero: "<<endl;
    cin>>r;
    return r;
}

int main(){
    int a,b,c,d,e, su;
    a =  llenar ();
    b =  llenar ();
    c =  llenar ();
    d =  llenar ();
    e =  llenar ();
    su = Sumar(a, b, c, d, e);
    Mostrar (a,b,c,d,e,su);
    return 0;
}
