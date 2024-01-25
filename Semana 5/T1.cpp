/*Dado un vector de números enteros, pide al usuario que ingrese valores y luego ordena el 
vector de manera ascendente. Finalmente, muestra el vector ordenado.*/

#include <iostream>
#include <vector>
using namespace std;

int main (){
    
    int n = 0;
    int m = 0;
    cout<<"Ingrese el tamaño de su vector: "<<endl;
    cin>>n;
    vector <int> num (n);
    for (int i = 0; i < num.size(); i++){
        cout<<"Ingrese su "<<i+1<<" numero: "<<endl;
        cin>>m;
        num[i] = m;
    }

    int temp = 0;
    for (int i = 0; i < num.size(); i++){
        for (int j = 0; j < num.size(); j ++){
            if ( num [i] > num[j] ){
                temp = num [i];
                num [i] = num [j];
                num [j] = temp;
            }
        }
    }
    cout<<"Ascendente: "<<endl;
    for (int i = 0; i < num.size(); i++){
        cout<<"\t"<<num[num.size() - 1 - i];
    }

     cout<<"\nOrdenada: "<<endl;
    for (int i = 0; i < num.size(); i++){
        cout<<"\t"<<num[i];
    }


    return 0;
}