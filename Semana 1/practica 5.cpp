#include <iostream>
using namespace std;

int main (){
	float A,B;
	float P,S;
	
	cout<<"ingrese la altura: "<<endl;
	cin>>A;
	cout<<"ingrese la base: "<<endl;
	cin>>B;
	
	P= (A+B)*2;
	S= B*A;
	
	cout<<"el perimetro es: "<<P<<endl;
	cout<<"el area es: "<<S<<endl;
	
	return 0;
}
