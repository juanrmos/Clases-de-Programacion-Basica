#include<iostream>
#include<string>
using namespace std;

void funcion (int a = 4, int b = 5, int c = 0){
    cout<<a<<" "<<b<<" "<<c;
}

int main (){
    
    funcion();
    return 0;
}