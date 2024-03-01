#include<iostream>
using namespace std;

int main (){
    int n = 0;
    cout<<"Ingrese el numero inicial: "<<endl;
    cin>>n;
    int f = 0;
    cout<<"Ingrese el numero final"<<endl;
    cin>>f;
    int R = 0;
    cout<<"Ingrese la distancia entre numeros: "<<endl;
    cin>>R;
    while (n < f){
        n = n + R;
        cout<<n<<endl;
    }
    return 0;
}