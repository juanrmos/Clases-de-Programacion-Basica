#include<iostream>
#include<cmath>
using namespace std;

int Fact (int nu){
    int pro = 1;
    for (int i = 1; i < nu+1; i++){
        pro =  pro*i;
    }
    return pro;
}
int main (){
    int n;
    cout<<"Ingrese su numero factorial: \n";
    cin>>n;
    int res = Fact (n);
    cout<<"El resultados es: "<<res<<endl;
    return 0;
}