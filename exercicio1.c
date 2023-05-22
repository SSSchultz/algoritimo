#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

float n1, q1, p1, r1;

printf("Qual o valor do produto?: ");
scanf("%f", &n1);

printf("Em quantas parcelas voce deseja pagar?: ");
scanf("%f", &q1);

r1 = n1 / q1;

printf("%.1f / %.1f = %.1f \n", n1, q1, r1);

printf("voce vai pagar %.2f por parcela \n", r1);
system("pause");

}
