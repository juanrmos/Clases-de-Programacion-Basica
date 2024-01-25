//Volumen y area de un cilindro.

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main (){
int B;	
float S,V,Al,PI,R;
B = 2;
PI = M_PI;
while (B > 1){

cout<<"Ingrese el Radio y la Altura (En ese orden): "<<endl;
cin>>R>>Al;

S = 2*(PI*R*Al);
V = PI*pow(R,2)*Al;

cout<<"Su area es: "<<S<<endl;
cout<<"Su volumen es: "<<V<<endl;
B--;
}
return 0;
}
