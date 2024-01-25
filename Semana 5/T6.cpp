 /*Crea una matriz de strings y permite al usuario ingresar varias palabras en cada celda. Luego, 
 concatena todas las palabras de cada fila en una única cadena y muestra los resultados*/
 #include <iostream>
 #include <string>
 using namespace std;

 int main (){
 int f,c;
 cout<<"Ingrese la cantidad de filas y columnas (en ese orden): "<<endl;
 cin>>f>>c;
 string sum;

 string Ora [f][c];
 for(int i = 0; i < f; i++){
    for (int j = 0; j< c; j++){
      cout<<"Ingrese la palabra ("<<i+1<<","<<j+1<<")"<<endl;
      cin>>Ora [i][j];
    }
 }
 string esp = " ";
 for(int i = 0; i < f; i++){
    for (int j = 0; j< c; j++){
      sum += Ora[i][j] + esp;
    }
    cout<<"Fila "<<i+1<<" :"<<sum;
    sum = " ";
    cout<<endl;
 }

 return 0;
 }