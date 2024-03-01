/*Define una estructura llamada Punto que tenga coordenadas x e y. 
Escribe funciones para calcular la distancia entre dos puntos y el punto medio entre ellos.*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

struct Punt {

double Puntos[2];
double Dis[2];
double distancia;
double PuntM[2];

void Impr(){
    cout<<"La distancia entre los puntos es: "<<distancia<<endl;
    cout<<"El punto medio de los puntos es ( "<<PuntM[0]<<","<<PuntM[1]<<" )"<<endl;
}
};

int main (){
vector <Punt> Medida (2);

for(int i = 0; i < 2; i++){
    cout<<"Ingrese las coordendas de su "<<i+1<<" numero: "<<endl;
    for(int j = 0; j < 2; j++){
        cin>> Medida[i].Puntos[j];
    }
}
    for (int i = 0; i < 2; i++){
        Medida[0].Dis[i] = Medida[0].Puntos[i] - Medida[1].Puntos[i];
    }
    Medida[0].distancia = sqrt(pow(Medida[0].Dis[0],2) + pow(Medida[0].Dis[1],2));
    for (int i = 0; i<2;i++){
        Medida[0].PuntM[i] = (Medida[0].Puntos[i] + Medida[1].Puntos[i])/2;
    }
Medida[0].Impr();

    return 0;
}