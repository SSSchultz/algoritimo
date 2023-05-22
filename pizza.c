#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif



int main() {

int continua, contador;
continua = 's';
contador = 0;

char sabor1, sabor2, sabor3, sabor4, quantidade, adicionais, adicional1, adicional2, adicional3;


while (continua == 's')
{
     // ---->começo<----
    printf("Bem vindo a Pizzaria, monte a sua pizza aqui \n \n Quantos sabores terao na sua pizza? \n -1 Sabor \n -2 sabores \n -3 sabores \n -4 sabores \n");
    scanf(" %c", &quantidade);

    printf("b");

switch (quantidade) {

    case '1':

    printf("Escolha seu sabor \n Marguerita \n Portuguesa \n Lombo \n Strogonoff \n Bacon \n Presunto \n Bacon \n PresuntoEQueijo");
    scanf(" %c", &sabor1);

    break;

    case '2':

printf("2");
    break;

    case '3':

printf("3");
    break;

    case '4':

printf("4");
    break;

    default:

    printf("0");
    break;
}

printf("a");

    // ---->comeco<----

   printf("Repentindo....\n");

   contador++;

   printf("Tecle 's' e aguarde se deseja continuar \n");
   continua = getch();


        #ifdef _WIN32
        Sleep(1000);
        #else
        sleep(1);
        #endif
}

if (contador == 0)
   printf("O bloco NAO foi repetido.");
else printf("O bloco foi repetido %d vezes", contador);

}
