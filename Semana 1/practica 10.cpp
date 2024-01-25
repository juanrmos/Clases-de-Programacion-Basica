//Convertir de Acres a hectareas.

#include <iostream>
#include <string>
using namespace std;

int main(){
float Astat;
	
cout<<"Ingrese el area en Acres: "<<endl;
cin>>Astat;
	
Astat = Astat/10000;	

cout<<"Su area en Hectarias: "<<Astat<<endl;

return 0;

}
