#include<stdio.h>
#include<math.h>
using namespace std;
int main (){
double a,b,c,R,A,P;
printf("Escriba los tres lados del triangulo: \n");
scanf("%lf %lf %lf", &a,&b,&c);
printf("Escriba el Radio: \n");
scanf("%lf", &R);

P = (a+b+c)/2;
A = R*P;

printf("El semiperimetro es de: %.2lf\n", P);
printf("El area es de: %.2lf\n", A);

return 0;
}