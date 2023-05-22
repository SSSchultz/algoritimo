#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>



void main() {

int continua, contador;
continua = 's';
contador = 0;
float a1, i1, s1;
a1 = 0;
i1 = 0;
s1 = 0;
int v1;
v1 = 0;


while (continua == 's')
{
     // ---->começo<----
printf("Informe seu tempo de servico na empresa em anos: ");
scanf("%f", &a1);

printf("Informe a sua idade: ");
scanf("%f", &i1);

printf("Informe o seu salario: ");
scanf("%f", &s1);

v1 = a1 > 3 && i1 > 30 && s1 < 4000;


switch(v1) {

case 1:

    printf("Voce pode receber um ajuste \n");
    break;

default:
    printf("Voce nao pode receber um ajuste \n");
    break;
};

    // ---->comeco<----

   printf("Repentindo....\n");

   contador++;

   printf("Tecle 's' e aguarde se deseja continuar \n");
   continua = getch();
   sleep(1);
}

if (contador == 0)
   printf("O bloco NAO foi repetido.");
else printf("O bloco foi repetido %d vezes", contador);

}
