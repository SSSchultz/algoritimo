#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

float q1, u1, v1, t1;

printf("Informe o numero de cadeiras que você ira comprar: ");
scanf("%f", &q1);

u1 = q1 <= 50;

if (u1 == 1) {

v1 = 45;

t1 = v1 * q1;

printf("O total a pagar = %.f \n", t1);
system("pause");
}

else {

v1 = 40;

t1 = v1 * q1;

printf("O total a pagar = %.f \n", t1);
system("pause");
};

}
