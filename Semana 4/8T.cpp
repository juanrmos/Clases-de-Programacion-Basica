/*Crea un programa que encuentre el mayor elemento en un vector 
de números enteros. Utiliza un bucle for y break para salir del 
bucle tan pronto como encuentres el mayor elemento.*/
#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n = 0;
    cout<<"Ingrese la cantidad de datos a ingresar:\n";
    cin>>n;
    vector <int> dat (n);
    int cont = 0;
    for (int i = 0; i < dat.size(); i++ ){
        cout<<"Ingrese su "<<i+1<<" numero: \n";
        cin>>dat[i];
    }

    for (int i = 0; i <dat.size(); i++){
        dat[i];
        for (int j = 0; j < dat.size (); j ++ ){
            if (dat[i] > dat[j]){
            cont++;

            if (cont == dat.size() - 1){
                cout<<"El numero mayor es:\n"<<dat[i];
                break;
                }

            }
        }
        cont = 0;
    }

    return 0;
}