#include<iostream>
using namespace std;
int main (){

int x = 10;
if (true)x++;  //Como el siguiente.

if(true)
x++;       //hasta este punto, solo ejecuta la primera linea.
x++;

if (true){   //ejecuta todo lo que este dentro de las llaves.
    x++;
}

}