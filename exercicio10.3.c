#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

float v1, p1, t1;

printf("Informe o valor do produto: ");
scanf("%f", &v1);

printf("Forma de pagamento \n 1 - a vista \n 2 - a prazo \n escolha o pagamento (1 ou 2): ");
scanf("%f", &p1);


if (p1 == 1) {

t1 = v1 * 0.9;

printf("O total a pagar a vista é: %.f \n", t1);
system("pause");
}

else {
printf("O total a pagar a prazo é: %.f \n", v1);
system("pause");
};

}
