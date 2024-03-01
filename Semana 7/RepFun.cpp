#include<iostream>
#include<string>
using namespace std;

void Mostrar (); /*Se puede colocar funciones abajo, pero para ello debes invocar la funcion arriba. 
Esto con el motivo de que el compilador ubique la funcion*/

int editar (int, int); //Se debe colocar la misma cantidad de entidades (estructura).

int editar (int); /*Ten cuidado con la estructura, esto no es lo mismo que los otros dos. Puede que se llamen
igual, pero son distintos de si. Esta igualdad de nombres se conoce como sobrecarga de funciones
o polimorfismo*/ 

int editar ();

void new_greet (string great, int repeats = 1); /*int repeats es un parametro por defecto, eso significa que,
la proxima vez que se envien los parametros y solo se envia uno, el otro siempre sera 1; a menos de que se 
ingrese otro valor ( que reemplazara el valor de repeats)*/



int main (){ //funcion principal




    return 0;
}


void Mostrar (){

}
int editar (int x, int y){

}

int editar (int x){

}

int editar (){

}