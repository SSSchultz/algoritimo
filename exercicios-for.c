#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>



void main() {

int continua, contador;
continua = 's';
contador = 0;

int contador11, contador12, contador21, contador22, numeroi, numerof, contador41;

contador11 = 0;
contador12 = 0;
contador21 = 0;
contador22 = 0;
numeroi = 0;
numerof = 0;

while (continua == 's')
{
     // ---->começo<----

for (contador11 = 1; contador11 <= 10; contador11++){
    contador12 = contador11 * 2;
    printf("%d \n", contador12);
}

    printf("-------------------- \n");

for (contador21 = 1; contador21 <=10; contador21++) {
    contador22 = contador22 + contador21;
}
    printf("a soma dos numeros de 1 a 10 e equivalente a = %d  \n", contador22);

    printf("-------------------- \n");

    printf("Digite o numero inicial da contagem: ");
    scanf(" %d", &numeroi);
    printf("\n Digite o numero final da contagem: ");
    scanf(" %d", &numerof);

    for(numeroi; numeroi <= numerof; numeroi++) {
        printf("%d \n", numeroi);
    }

    printf("-------------------- \n");

    for(contador41 = 2; contador41 <= 10; contador41 = contador41 + 2) {
        printf("%d \n", contador41);
    }

    printf("-------------------- \n");

    for(contador41 = 1; contador41 <= 10; contador41 = contador41 + 2) {
        printf("%d \n", contador41);
    }

    printf("-------------------- \n");



    // ---->final<----

   printf("Repentindo....\n");

   contador++;

   printf("Tecle 's' e aguarde se deseja continuar \n");
   continua = getch();
}

if (contador == 0)
   printf("O bloco NAO foi repetido.");
else printf("O bloco foi repetido %d vezes", contador);

}
