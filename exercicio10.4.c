#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

float i1, c1;

printf("Informe a sua idade: ");
scanf("%f", &i1);

printf("Possui habilitacao? \n 1 - sim \n 2 - nao \n informe a situacao (1 ou 2): ");
scanf("%f", &c1);


if (i1 >= 18 && c1 == 1) {

printf("Voce pode dirigir o veiculo \n");
system("pause");
}

else {
printf("Voce nao pode dirigir o veiculo \n");
system("pause");
};

}
