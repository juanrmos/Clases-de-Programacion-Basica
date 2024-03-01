#include <vector>
#include <string>
#include <iostream>
using namespace std; 

void Par (int x){
    if (x%2 == 0)
    cout<<"Es par"<<endl;
    else {
        cout<<"No es par.\n";
    }

}


int main ( ){
    int x;
    cout<<"Ingrese su numero:\n";
    cin>>x;
    Par (x);
    return 0;
}