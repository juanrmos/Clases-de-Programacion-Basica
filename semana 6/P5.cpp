#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void Circulo (double x = 0, double y = 0){
    double cal = x*pow(y,2);
    cout <<"El area del circulo es: "<<cal;
}



int main (){
    double r, pi;
    cout<<"Ingrese el radio del circulo: "<<endl;
    cin>>r;
    pi = M_PI;
    Circulo(r, pi);
    return 0;
}