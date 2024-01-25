/*Crea un vector de strings y permite al usuario ingresar varias palabras. Luego, 
concatena todas las palabras en una única cadena y muestra el resultado.*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main (){
    int n = 0;
    cout<<"Ingrese la cantidad de palabras que desea guardar: "<<endl;
    cin>>n;

    vector <string> ora (n);

    for (int i = 0; i < ora.size(); i++){
        cout<<"Ingrese su "<<i+1<<" palabra: "<<endl;
        cin>> ora [i];
    }
    
    for (int i = 0; i < ora.size(); i++){
        cout<<ora[i]<<" ";
    }

    return 0;
}