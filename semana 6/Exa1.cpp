#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main (){
    vector <char> vocales {'a','e','i','o','u'};
    vector <char> abcd {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    string nom;
    cout<<"Ingrese su nombre: "<<endl;
    cin>>nom;
    int n = nom.length();
    int cont = 0;

    for (int i = 0; i<n; i++){
        for(int j = 0; j<5;j++){
            if(nom[i] == vocales[j]){
                cont++;
                continue;
            }
        }
    }
    int contabcd = 0;
    for (int i = 0; i<n; i++){
        for(int j = 0; j<21;j++){
            if(nom[i] == abcd[j]){
                contabcd++;
                continue;
            }
        }
    }
    cout<<"Numero de vocales: "<<cont<<endl;
    cout<<"Numero de consonantes: "<<contabcd;
    return 0;
}