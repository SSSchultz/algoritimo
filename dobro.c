#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>



void main() {

int continua, contador;
continua = 's';
contador = 0;

int numero, dobro;

int numero2, soma;


while (continua == 's')
{
     // ---->começo<----
numero = 0;
dobro = 0;

soma = 0;
numero2 = 0;
     while (numero < 11) {

        dobro = numero * 2;

        printf("O dobro do numero %d = %d \n", numero, dobro);

        numero++;
     }

    printf("\n \n \n");

          while (numero2 < 11) {

        soma = soma + numero2;

        printf("O valor total e %d \n", soma);

        numero2++;
     }

    // ---->comeco<----

   printf("Repentindo....\n");

   contador++;

   printf("Tecle 's' e aguarde se deseja continuar \n");
   continua = getch();
}

if (contador == 0)
   printf("O bloco NAO foi repetido.");
else printf("O bloco foi repetido %d vezes", contador);

}
