#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int Aleatorio (int x, int y){
    srand(time(nullptr));
    int aleatorio = x + rand()% (y - x + 1);
    return aleatorio;
}
int main (){
    int min = 1;
    int max = 6;
    cout<<"Lanzas el dado y este oscila de forma armoniosa a travez del viento\nEl resultado es:\n";
    int Alea = Aleatorio(min, max);
    cout<<Alea;
    return 0;
}