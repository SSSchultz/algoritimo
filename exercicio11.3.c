#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>



int main()
{

    int continua, contador;
    continua = 's';
    contador = 0;
    int v1, p1, t1;
    v1 = 0;
    p1 = 0;
    t1 = 0;

    while (continua == 's')
    {
// ---->começo<----

        printf("Informe o valor do produto: ");
        scanf("%d", &v1);

        printf("Forma de pagamento \n 1 - a vista \n 2 - a prazo \n escolha o pagamento (1 ou 2): ");
        scanf("%d", &p1);


        switch (p1)
        {
        case 1:

            t1 = v1 * 0.9;

            printf("O total a pagar a vista e: %.d \n", t1);
            break;

        default:
            printf("O total a pagar a prazo e: %.d \n", v1);
            break;
        }


// ---->final<----
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
