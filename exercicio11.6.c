#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

void main()
{

    int continua, contador;
    continua = 's';
    contador = 0;
    char e1, e2;

    while (continua == 's')
    {


        printf("Estado civil \n S - solteiro \n C - casado \n D - divorciado \n V - viuvo \n Escolha uma opcao (S, C, D ou V): ");
        scanf(" %c", &e1);

        e2 = toupper(e1);


        switch (e2)
        {
        case 'S':
            printf("Sua escolha foi Solteiro \n");
            break;


        case 'C':
            printf("Sua escolha foi Casado \n");
            break;


        case 'D':
            printf("Sua escolha foi Divorciado \n");
            break;


        case 'V':
            printf("Sua escolha foi Viuvo \n");
            break;

        default:
            printf("Opcao invalida \n");

        }

        printf("Repentir? \n");

        contador++;

        printf("Tecle 's' e aguarde se deseja continuar \n");

        continua = getch();
        sleep(1);
    }

    if (contador == 0)
        printf("O bloco NAO foi repetido.");
    else printf("O bloco foi repetido %d vezes", contador);

}
