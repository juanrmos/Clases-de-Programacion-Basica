//Calcular la velocidad del participante en Km/h

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
	
float Seg,Min,Cen,Metr,Ti,Vel,Velkm;
string Part;

cout<<"Ingrese el nombre del participante: "<<endl;
getline(cin,Part); 

cout<<"Ingrese los segundos: "<<endl;cin>>Seg;
cout<<"Ingrese los minutos: "<<endl;cin>>Min;
cout<<"Ingrese las centecimas: "<<endl;cin>>Cen;
cout<<"Ingrese la distancia: "<<endl;cin>>Metr;

Ti= Min*60+Seg+(Cen)/100;
Vel = Metr/Ti;
Velkm = Vel*(3.6);

cout<<"Nombre: "<<Part<<endl;
cout<<"Tiempo: "<<Ti<<endl;
cout<<"Velocidad: "<<Vel<<endl;
cout<<"Velocidad en K/h: "<<Velkm<<endl;

return 0;
	
}

