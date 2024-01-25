//rectangulo.
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
double H,B,D,A,P;
printf("Ingrese la base de su rectangulo:\n ");
scanf("%lf",&B);
printf("Ingrese la altura del rectangulo: \n");
scanf("%lf",&H);

A = B*H;
D = sqrt(pow(B,2)+pow(H,2));
P = 2*(B+H);

printf("La base es: %.2lf\n",B);
printf("La altura es: %.2lf\n",H);
printf("El perimetro es: %.2lf\n",P);
printf("El area es: %.2lf\n",A);
printf("La diagonal es: %.2lf\n",D);


return 0;
}