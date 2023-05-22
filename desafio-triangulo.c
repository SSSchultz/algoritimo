#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

float l1, l2, l3;

printf("Qual a medida do lado AB do triangulo?: ");
scanf("%f", &l1);

printf("Qual a medida do lado BC do triangulo?: ");
scanf("%f", &l2);

printf("Qual a medida do lado AC do triangulo?: ");
scanf("%f", &l3);


printf("O seu triangulo tem Lado AB = %.f ; Lado BC = %.f ; Lado AC = %.f \n", l1, l2, l3);
system("pause");


if( l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1) {

    if (l1 == l2 && l2 == l3) {

    printf("O seu triangulo e equilatero pois todos os lados possuem a mesma medida \n");
    return 0;

    } else if (l1 != l2 && l2 != l3 && l1 != l3) {

    printf("O seu triangulo e escaleno pois todos os lados possuem medidas diferente \n");
    return 0;

    } else if ((l1 == l2 && l2 != l3) || (l1 != l2 && l1 == l3)) {

    printf("O seu triangulo e isosceles pois apenas dois dos lados possuem uma mesma medida \n");
    return 0;

    };


};

    printf("Os valores fornecidos nao formao um triangulo \n");

    printf("acabou aqui \n");
    system("pause");
}
