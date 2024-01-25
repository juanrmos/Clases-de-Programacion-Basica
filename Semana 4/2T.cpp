#include<iostream>
#include<string>
using namespace std;
//Verificar si una palabra es un palindromo (usar while o for).
int main (){
string ora;
int N,i;
i = 0;
cout<<"Ingrese su oracion (en minusculas): "<<endl;
cin>>ora;
N = ora.length() - 1;

while(i < N - i){
   if ( ora[i] != ora[N-i] ){
    cout<<"No es un palindromo"<<endl;
    return 0;
   }
   i++;
}

cout<<"Es un palindromo.";
return 0;
}