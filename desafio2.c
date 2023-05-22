#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

float a1, b1, c1, d1, v1, v2, v3, q1, r1, t1;

printf("Monte a sua equacao de segundo grau \n");

printf("Qual o valor de a (ax^3): ");
scanf("%f", &a1);

printf("Qual o valor de b (bx^2): ");
scanf("%f", &b1);

printf("Qual o valor de c (cx): ");
scanf("%f", &c1);

printf("Qual o valor de d (d): ");
scanf("%f", &d1);

printf("A sua equacao de segundo grau ficou = %.fx^3 + %.fx^2 + %.fx + %.f \n", a1, b1, c1, d1);
system("pause");


t1 = (18*a1*b1*c1*d1) - (4*(b1*b1*b1)*d1) + ((b1*b1)*(c1*c1)) - (4*a1*(c1*c1*c1)) - (27*(a1*a1)*(d1*d1));
q1 = ((3*a1*c1) - (b1*b1)) / (9*(a1*a1));
r1 = ((9*a1*b1*c1) - (27*(a1*a1)*d1 - 2*(b1*b1*b1)) / (54*(a1*a1*a1)));

printf("O seu delta ficou equivalente a: %f \n", t1);
system("pause");

if (t1 < 0) {

v1 = (-(b1)/ (3*a1)) + (1/(3*a1)) * (q1 + ((r1*r1) + (q1*q1*q1)) * (1/2)) * (1/3) + (q1 - ((r1*r1) + (q1*q1*q1) * (1/2)) * (1/3));

printf("O seu delta ficou negativo entao tera apenas uma raiz dentro dos reais e essa rais e %.f", v1);
return 0;
      } else if (t1 = 0) {

v1 = 3*b1/(2*c1) - d1/2*c1;

printf("O seu delta ficou = a 0 entao tera uma raiz dupla dentro dos reais e essa rais e %.f", v1);
return 0;
      } else if (t1 > 0) {





return 0;
      };

printf("acabou aqui");
system("pause");

}
