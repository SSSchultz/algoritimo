#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

char n1[100];
float s1, v1, c1, m1;

printf("Qual o nome do vendedor:  ");
fgets(n1, sizeof(n1), stdin);
n1[strcspn(n1, "\n")] = '\0';

printf("qual o salario minimo do vendedor:  ");
scanf("%f", &s1);

printf("qual o total em vendas feitas pelo vendedor:  ");
scanf("%f", &v1);

c1 = (v1/100)*15;
m1 = s1 + c1;

printf("15%% de %.2f = %.2f e %.2f + %.2f e o salario final \n", v1, c1, s1, c1);

printf("O vendedor %s recebeu no final do mes o salario equivalente a = R$: %.2f \n", n1, m1);
return 0;
}
