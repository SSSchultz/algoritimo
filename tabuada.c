#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>



void main() {

    int continua, contador;
    continua = 's';
    contador = 0;

    int multiplicando, multiplicador, produto;

    while (continua == 's')
    {
        // ---->começo<----
        multiplicando = 1;
        multiplicador = 0;
        produto = 0;


        while(multiplicando <=10) {

            while(multiplicador <= 10) {

                produto = multiplicando*multiplicador;
                printf("%d x %d = %d \n", multiplicando, multiplicador, produto);
                multiplicador++;
                produto = 0;
            }
            multiplicando++;
            multiplicador = 0;

        }


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
