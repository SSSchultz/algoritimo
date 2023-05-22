#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {

float i1, p1;

printf("Qual a sua idade?: ");
scanf("%f", &i1);

p1 = i1 >= 18;

if (p1 == 1) {

printf("Você tem %.f anos e maior idade \n", i1);
system("pause");
}

else {
printf("Você tem %.f anos e menor idade \n", i1);
system("pause");
};

}
