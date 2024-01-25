#include<stdio.h>
#include<math.h>
using namespace std;
int main (){

double a,b,c,R,A;
printf("Escriba los lados del triangulo: \n");
scanf("%lf %lf %lf", &a, &b, &c);
printf("Escriba el Radio: \n");
scanf("%lf",&R);

A = (a*b*c)/(4*R);
printf("El area del triangulo inscrito es de: %.2lf\n", A);

return 0;
}