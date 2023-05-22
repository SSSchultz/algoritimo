#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

float a1, b1, c1, d1, d2, r1, r2;

printf("Monte a sua equacao de segundo grau \n");

printf("Qual o valor de a (ax^2): ");
scanf("%f", &a1);

printf("Qual o valor de b (bx): ");
scanf("%f", &b1);

printf("Qual o valor de c (c): ");
scanf("%f", &c1);

printf("A sua equacao de segundo grau ficou: %.fx^2 + %.fx + %.f = 0\n", a1, b1, c1);
system("pause");

d1 = (b1 * b1) + (-4 * a1 * c1);

d2 = sqrt(d1);

if (d1 > 0) {
r1 = (-(b1) + (d2)) / (2 * a1);
r2 = (-(b1) - (d2)) / (2 * a1);

printf("Delta = (%f * %f) - ( 4 * %.f * %.f) = %f \n", b1, b1, a1, c1, d1);
printf("X1 = (-(%f) + (%f)) / 2*%f = %f \n", b1, d2, a1, r1);
printf("X1 = (-(%f) - (%f)) / 2*%f = %f \n", b1, d2, a1, r2);

printf("Os resultados da sua equacao de segundo grau sao x1= %f e x2= %f\n", r1, r2);
return 0;
} else if (d1 == 0) {

r1 = - ( b1 ) / 2 * a1;

printf("Delta = (%f * %f) - ( 4 * %f * %f) = %f \n", b1, b1, a1, c1, d1);
printf("X1 = -(%f)  / 2*%f = %f \n", b1, a1, r1);

printf("A unica raiz possivel para sua equacao de segundo grau e %f \n", r1);
return 0;
} else if (d1 < 0) {

printf("Delta = (%f * %f) - ( 4 * %f * %f) = %f \n", b1, b1, a1, c1, d1);

printf("A sua equacao de segundo grau nao tem raiz possiveis dentre os numeros reais pois o delta = %.f e inferior a 0 \n", d1);
return 0;

};
printf("acabou aqui");
system("pause");

}
