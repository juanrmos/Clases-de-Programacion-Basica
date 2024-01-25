/*Escribe un programa que tome un número entero positivo n como entrada y genere la secuencia de Collatz 
para ese número. La secuencia de Collatz se obtiene siguiendo estas reglas:
a. Si n es par, divídelo por 2.

b. Si n es impar, multiplícalo por 3 y suma 1.

c. Repite el proceso hasta llegar al número 1.*/

#include <iostream>
using namespace std;
int main (){

unsigned int N;
cout<<"Ingrese un numero positivo mayor que 1: "<<endl;
cin>>N;
while (N>1){

if (N%2 == 0){
N = N/2;
} else if (N%2 > 0){
   N = (N*3) + 1;
}
}
cout<<"Tu numero es: "<<N<<endl;
return 0;
}