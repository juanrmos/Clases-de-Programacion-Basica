//Calcular Diagonal, perimetro y Area de un cuadrado.
/*
A = l^2 P = 4*l D = l*Raiz de 2.
*/
#include<stdio.h>
#include<cmath>
using namespace std;

int main (){
double L,A,P,D;
printf("Ingrese el valor del lado de su cuadrado.\n");
scanf("%lf",&L);
A = pow(L,2);
P = 4*L;
D = L*sqrt(2);

printf("El Perimetro es:%.2lf\n" , P); 
printf("La Area es:%.2lf\n" , A);
printf("La Diagonal es:%.2lf\n" , D);

return 0;
}
