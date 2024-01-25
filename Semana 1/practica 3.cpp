# include  <iostream>
using namespace std;
int main (){
	
	int M;
	float A,B,C,D,PR;
	
	cout<<"Ingrese su matricula: "<<endl;
	cin>>M;
	cout<<"Ingrese sus cuatro calificaciones: "<<endl;
	cin>>A>>B>>C>>D;
	
	PR = (A+B+C+D)/4;
	cout<<"Matricula: "<<M<<endl;
	cout<<"Elpromedio de sus calificaciones es: "<<PR<<endl;
		
	return 0;
}
