//Suma de numeros dentro de dos rangos. Inf y sup.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Suma (int x = 0, int y = 0){
int Su;
for (int i = x; i<y+1; i++){
Su = i + Su;
}
cout<<"La suma de sus numeros es: "<<Su;
}

int main (){
    int x, y;
    cout<<"Ingrese el numero inferior y superior: "<<endl;
    cin>>x>>y;
    Suma(x,y);
    return 0;
}