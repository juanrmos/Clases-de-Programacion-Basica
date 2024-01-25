//Conversion de kilogramas y metros a libras y pies.
//Uso de get line.

#include <iostream>
#include <string>
using namespace std;

int main (){

string No;
float Pe,Al,Pel,Pies;

cout<<"Escriba el nombre del dinosaurio:"<<endl;
getline(cin,No);
cout<<"Escriba su peso en Kg:"<<endl;
cin>>Pe;
cout<<"Escriba su altura en metros:"<<endl;
cin>>Al;

Pel = Pe/0.4535;
Pies = Al/0.3048;

cout<<"Dinosaurio: "<<No<<endl;
cout<<"Peso en libras: "<<Pel<<endl;
cout<<"Altura en pies: "<<Pies<<endl;

return 0;
}
