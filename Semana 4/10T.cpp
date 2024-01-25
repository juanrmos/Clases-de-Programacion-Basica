/*Desarrolla un programa que cuente la cantidad de a, e, i, o, u en una oración ingresada por el usuario*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main (){
    string Ora, vocales;
    vector <char> voc{'a','e','i','o','u'};
    cout<<"Ingrese su oracion:\n";
    getline(cin,Ora);

    int N = Ora.length();
    vector <char> Oracion (N);
    int cont = 0;

    for (int i = 0; i < Oracion.size(); i++ ){
        if (Ora[i] == ' ') continue;
        for (int j = 0; j < Oracion.size(); j++){
            if (Ora[i] == voc[j]) {
                cont++;
                break;
            }
        }
    }
    cout<<"La cantidad de vocales es de:\n"<<cont;
    return 0;
}