#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

void main() {

char e1, e2;

printf("Estado civil \n S - solteiro \n C - casado \n D - divorciado \n V - viuvo \n Escolha uma opcao (S, C, D ou V): ");
scanf("%c", &e1);

e2 = toupper(e1);

if (e2 == 'S') {

printf("Sua escolha foi Solteiro \n");
system("pause");

} else if (e2 == 'C') {

printf("Sua escolha foi Casado \n");
system("pause");

} else if (e2 == 'D') {

printf("Sua escolha foi Divorciado \n");
system("pause");

} else if (e2 == 'V') {

printf("Sua escolha foi Viuvo \n");
system("pause");

} else {

printf("Opcao invalida \n");
system("pause");

};

}
