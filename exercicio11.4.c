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
    float i1;
    i1 = 0;
    int c1;
    c1 = 0;
    int t1;
    t1 = 0;

    while (continua == 's')
    {
        // ---->começo<----

        printf("Informe a sua idade: ");
        scanf("%f", &i1);

        printf("Possui habilitacao? \n 1 - sim \n 2 - nao \n informe a situacao (1 ou 2): ");
        scanf("%d", &c1);

        t1 = i1 >= 18 && c1 == 1;

        switch (t1){

        case 1:

        printf("Voce pode dirigir o veiculo \n");
        break;

    default:

        printf("Voce nao pode dirigir o veiculo \n");
        break;

        }
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
