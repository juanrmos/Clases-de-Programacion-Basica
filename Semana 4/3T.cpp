#include<iostream>

using namespace std;
int main (){
    int n,f,c;
    
    cout<<"Ingrese la dimension de la matriz cuadrada: "<<endl;
    cin>>n;

    int matriz_O [n] [n];
    int matriz_T [n] [n];

    for (f = 0; f < n; f++){
    
    for (c = 0; c< n; c++){
        cout<<"Ingrese los elementos de su matriz cuadrada("<<f+1<<","<<c+1<<")"<<endl;
        cin>> matriz_O [f][c];
    }
    }
    
    for (f = 0; f <n; f++){
        for(c = 0; c < n; c++){
            matriz_T [c][f] = matriz_O [f][c];
        }
    }

    cout<<"\nMatriz transpuesta"<<endl;
    for (f = 0; f < n; f++){
        for(c = 0; c < n; c++){
            cout<<matriz_T [f][c]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

