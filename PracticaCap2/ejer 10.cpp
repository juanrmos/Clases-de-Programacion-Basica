#include<iostream>
#include<cmath>
using namespace std;
int main (){
int N,T,B;
B = 1;
while (B<2){
cout<<"Ingrese el numero de sonidos emitidos por el grillo: "<<endl;
cin>>N;
if (N == 0 or N < 0){
    B--;
}else
B++;
}
T = N/4 + 40;
cout<<"La temperatura es de: "<<T<<endl;
    return 0;
}