/*Crea un programa que elimine los elementos 
duplicados de un vector. Utiliza un bucle for, break y continue según sea necesario.*/
#include<iostream>
#include<vector>
using namespace std;

int main (){
    int n = 0;
    int cont = 0;
    cout <<"Ingrese la cantidad de datos que ingresara: "<<endl;
    cin>>n;
    
    vector <int> res (n);

    for (int i = 0; i < n ;i++){
        cout<<"Valor "<<i+1<<endl;
        cin>>res[i];
    }

    for (int i = 0; i < res.size(); i++){
        res[i];
        for (int j = i++; j < res.size(); j++){
            res[i] == res[j];
            if (i != j and res[i] == res[j]) {
                res[j] = 0;
                cont++;
                continue;
            }
        }

    }
    cout<<"Se encontraron "<<cont<<" numeros repetidos que fueron retirados.\n";

    return 0;
}