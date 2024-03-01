#include<iostream>
#include<string>
#include<vector>
using namespace std;

int Pal (string ora, int nu){
vector <string> abc {"abcdefghijklmnñopqrstuvwxyz"};
for (int i = 0; i < nu; i++){
    if (ora[i] != ora[nu-1-i]){
        cout<<"No es palindromo";
        break;
    } else {
        cout<<"Es palindromo"<<endl;
        break;
    }
}
return 1;
}
int main (){
    
    string ora;
    cout<<"Ingrese su palabra (minusculas): "<<endl;
    cin>>ora;
    int n = ora.length();
    Pal (ora, n);
    return 0; 
}