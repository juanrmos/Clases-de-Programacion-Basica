/*Implementa un programa que realice un cifrado César. 
Solicita al usuario ingresar una cadena y un número (la clave del cifrado). 
Luego, cifra la cadena desplazando cada letra en la cadena 
por la cantidad especificada en la clave.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main (){
string abecedario, contra, Nue;
int n, i;
abecedario = "abcdefghijklmnñopqrstuvwxyz";
vector <char> abcd (27);

for (i = 0; i < 27; i++){
    abcd[i] = abecedario[i];
}

cout<<"Ingrese el desplazamiento del cifrado: "<<endl;
cin>>n;
cout<<"Ingrese su contraseña: "<<endl;
cin>>contra;
int longitud = contra.length();


for (i = 0; i < longitud;i++){
    for ( int j = 0; j < 27; j++){
        if (abcd[j] == contra[i]) {
            contra[i] = abcd[j+n];
            Nue = Nue + contra[i];
            break;
        }
    } 
}

cout<<"Su nueva contraseña: "<<Nue<<endl;

return 0;
}