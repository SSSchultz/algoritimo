#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float a1, a2, a3;

    printf("Qual a medida do Angulo A do triangulo? (apenas numeros): ");
    scanf("%f", &a1);

    printf("Qual a medida do Angulo B do triangulo? (apenas numeros): ");
    scanf("%f", &a2);

    printf("Qual a medida do Angulo C do triangulo? (apenas numeros): ");
    scanf("%f", &a3);


    printf("O seu triangulo tem Angulo A = %.f ; Angulo B = %.f ; Angulo C = %.f \n", a1, a2, a3);
    system("pause");


    if((a1 + a2 + a3 == 180) && (a1 != 0 && a2 != 0 && a3 != 0))
    {

        if (a1 < 90 && a2 < 90 && a3 < 90)
        {

            printf("O seu triangulo e acutangulo pois todos os angulos sao menores que 90 graus \n");
            return 0;

        }
        else if (a1 == 90 || a2 == 90 || a3 == 90)
        {

            printf("O seu triangulo e retangulo pois um de seus angulos e igual a 90 graus \n");
            return 0;

        }
        else if (a1 > 90 || a2 > 90 || a3 > 90)
        {

            printf("O seu triangulo e Obtusangulo pois um de seus angulos e maior que a 90 graus \n");
            return 0;

        };


    };

    printf("Os valores fornecidos nao formao um triangulo \n");

    printf("acabou aqui \n");
    system("pause");
}
