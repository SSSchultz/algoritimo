#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>



int main() {

    int continua, contador;
    continua = 's';
    contador = 0;

    char tipo;

    int numero1, numero2;

    while (continua == 's')
    {
        // ---->começo<----
        numero1 = 0;
        numero2 = 0;
        tipo = 0;

        printf("O primeiro numero sera: ");
        scanf("%d", &numero1);
        printf("O segundo numero sera: ");
        scanf("%d", &numero2);
        printf("Eu gostaria de contar \n - do maior para o menor: + \n - do menor para o maior: - \n Resposta: ");
        scanf(" %c", &tipo);


        if(tipo == '-'){
        while(numero1 != numero2) {

            if (numero1 > numero2) {
                printf("%d \n", numero2);
                numero2++;
            }else if (numero1 < numero2) {
                printf("%d \n", numero1);
                numero1++;
            }
        }
        printf("%d \n", numero2);
            printf("acabou \n");
            } else if (tipo == '+') {
            while(numero1 != numero2) {

            if (numero1 > numero2) {
                printf("%d \n", numero1);
                numero1--;
            }else if (numero1 < numero2) {
                printf("%d \n", numero2);
                numero2--;
            }
        }
        printf("%d \n", numero2);
            printf("acabou \n");
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
