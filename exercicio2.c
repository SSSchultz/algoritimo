#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

float n1, n2, n3, n4, m1;
char a1[100];

printf("Qual o nome do aluno?: ");
fgets(a1, sizeof(a1), stdin);
a1[strcspn(a1, "\n")] = '\0';

printf("Qual a primeira nota?: ");
scanf("%f", &n1);


printf("Qual a segunda nota?: ");
scanf("%f", &n2);


printf("Qual a terceira nota?: ");
scanf("%f", &n3);


printf("Qual a quarta nota?: ");
scanf("%f", &n4);

m1 = ( n1 + n2 + n3 + n4 ) / 4;

printf("O aluno %s ficou com uma media %.1f \n", a1, m1);
return 0;
}
