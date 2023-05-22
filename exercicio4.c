#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

float d1, c1, m1;

printf("Informe a distancia percorrida em Km:  ");
scanf("%f", &d1);

printf("Informe a quantidade de Litros gastos:  ");
scanf("%f", &c1);

m1 = d1 / c1;

printf("%.2f / %.2f = %.2f \n", d1, c1, m1);

printf("O consumo médio de combustivel foi %.2f Litros \n", m1);
return 0;
}
