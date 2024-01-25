/*Crea un juego de preguntas y respuestas donde el programa haga preguntas al usuario y 
luego evalúe las respuestas. 
Mantén un contador de respuestas correctas e incorrectas.*/

#include <iostream>
using namespace std;

int main (){
    string historia,hc,hc2,hc3;
    
    int c,i;
    c = 0;
    i = 0;
    hc = "1945";
    hc2 = "windsor";
    hc3 = "jose abelardo quiñones";
    cout<<"Aqui inicia nuestro pequeño concurso de preguntas y respuestas!!!"<<endl;
    cout<<"Primera pregunta!!!\nCuando acabo la segunda guerra mundial?\n(respuestas solo en minusculas)\n(C: "<<c<<"; I: "<<i<<" )"<<endl;
    cin>>historia;

    if (hc == historia){
        cout<<"Correcto!!!"<<endl;
        c++;
    }else{
        cout<<"Lastimosamente no es asi"<<endl;
        i++;
    }
    cout<<"\nSegunda pregunta!!!\nCual era el apellido de la reina Isabel II de Inglaterra?\n(C: "<<c<<"; I: "<<i<<" )"<<endl;
    cin>>historia;
    if (hc2 == historia){
        cout<<"Correcto!!!"<<endl;
        c++;
    }else{
        cout<<"Lastimosamente no es asi"<<endl;
        i++;
    }

    cout<<"\nUltima pregunta!!!\nQuien es el heroe de la aviacion peruana?\n(C: "<<c<<"; I: "<<i<<" )"<<endl;
    cin>>historia;
    if (hc3 == historia){
        cout<<"Correcto!!!"<<endl;
        c++;
    }else{
        cout<<"Lastimosamente no es asi"<<endl;
        i++;
    }

    cout<<"Este es tu marcador final!!!\n\n(C: "<<c<<"; I: "<<i<<" )"<<endl;        


    return 0;
}