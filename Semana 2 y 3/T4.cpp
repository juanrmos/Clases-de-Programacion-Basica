#include<stdio.h>
#include<math.h>
using namespace std;
int main (){
  
  double a,b,c,h,A,P;
  printf("Escriba la longitud de los tres lados: \n");
  scanf("%lf %lf %lf",&a, &b, &c);
  printf("Escriba la altura: \n");
  scanf("%lf",&h);
  A = (b*h)/2;
  P = a+b+c;
  printf("El perimetro es de:%.2lf\n", P);
  printf("El area es de:%.2lf\n",A);
  
  return 0;

}