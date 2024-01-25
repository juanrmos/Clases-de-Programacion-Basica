#include<stdio.h>
#include<cmath>
using namespace std;

int main (){
    double B,b,H,A;
    printf("Ingrese la base mayor y menor, y la altura (En ese orden): \n");
    scanf("%lf",&B);
    scanf("%lf",&b);
    scanf("%lf",&H);
    A = ((B+b)*H)/2;
    printf("El area es de:%.2lf\n", A);

return 0;
}