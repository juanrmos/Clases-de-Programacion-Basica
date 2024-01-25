#include<stdio.h>
#include<math.h>
using namespace std;
int main (){
double a,b,c,P,A;
printf("Escriba los tres lados de su triangulo: \n");
scanf("%lf %lf %lf", &a,&b,&c);

P = (a+b+c)/2;
A = sqrt(P* (P-a)*(P-b)*(P-c));

printf("El semiperimetro es de: %.2lf\n", P);
printf("El area es de: %.2lf\n", A);

return 0;
}