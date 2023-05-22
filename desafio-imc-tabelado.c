#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{

    float a1, i1, p1;

    printf("Qual a sua altura em metros:  ");
    scanf("%f", &a1);

    printf("Qual o seu peso em kilos:  ");
    scanf("%f", &p1);

    i1 = p1 / ( a1 * a1 );

    printf("%.f / ( %.2f * %.2f ) = %.2f \n", p1, a1, a1, i1);

    if (i1 < 18.5)
    {

        printf("O seu IMC e %.2f e voce esta abaixo do peso normal \n", i1);

    }
    else if (18.5 < i1 && i1 < 24.9)
    {

        printf("O seu IMC e %.2f e voce esta no peso normal \n", i1);

    }
    else if (24.9 < i1 && i1 < 29.9)
    {

        printf("O seu IMC e %.2f e voce esta com exesso de peso \n", i1);

    }
    else if (29.9 < i1 && i1 < 34.9)
    {

        printf("O seu IMC e %.2f e voce esta com obesidade classe I \n", i1);

    }
    else if (34.9 < i1 && i1 < 39.9)
    {

        printf("O seu IMC e %.2f e voce esta com obesidade classe II \n", i1);

    }
    else if (39.9 < i1 )
    {

        printf("O seu IMC e %.2f e voce esta com obesidade classe III \n", i1);

    };
    return 0;
}
