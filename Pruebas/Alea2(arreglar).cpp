#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int Aleatorio (int x = 0, int y = 9){
    srand(time(nullptr));
    string Num;
    for (int i = 0; i<6; i++){
        int aleatorio = x + rand()%(y - x + 1);
        Num = aleatorio + Num;
    }
    cout<<Num;
}


int main (){
    cout<<"Es hora de jugar a la loteria"<<endl;
    cout<<"Este es tu numero:\n";
    cout<<Aleatorio();
    return 0;
}