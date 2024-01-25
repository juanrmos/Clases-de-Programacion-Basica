#include<iostream>
using namespace std;
int main (){
int A,B,answer;
char op;
do {                                             //Primero va la ejecucion.
    cout<<"Ingresa dos numeros a sumar: "<<endl;
    cin>>A>>B;
    answer = A + B;
    cout<<"The sum of n1 + n2 is "<<answer<<endl;
    cout<<"Do you wish to continue? (s/n): ";
    cin>>op;
    op = tolower(op);
}while (op == 's');                             //luego va la condicion que decidira donde termina el bucle.

cout<<"Bye bye bye"<<endl;
return 0;
}