#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

float a1, i1, p1;

printf("Qual a sua altura em metros:  ");
scanf("%f", &a1);

printf("Qual o seu peso em kilos:  ");
scanf("%f", &p1);

i1 = p1 / ( a1 * a1 );

printf("%.f / ( %.2f * %.2f ) = %.2f \n", p1, a1, a1, i1);

printf("O seu IMC e %.2f \n", i1);
return 0;
}
