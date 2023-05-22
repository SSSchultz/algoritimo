#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

float a1, i1, s1;

printf("Informe seu tempo de servico na empresa em anos: ");
scanf("%f", &a1);

printf("Informe a sua idade: ");
scanf("%f", &i1);

printf("Informe o seu salario: ");
scanf("%f", &s1);


if (a1 > 3 && i1 > 30 && s1 < 4000) {

printf("Voce pode receber um ajuste \n");
system("pause");
}

else {
printf("Voce nao pode receber um ajuste \n");
system("pause");
};

}
