#include <stdio.h>
#include <stdlib.h>
/*
Fa?a um programa que l? o pre?o de um produto e inflaciona esse pre?o em 10% se ele
for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: n?o use o comando "if"
ou o operador de condi??o "?".
*/

int main()
{
    double number = 0.0;
    double tempOne = 0.0;
    double tempTwo = 0.0;
    double inflationValue = 0.0;
    double inflationValueProduct = 0.0;

    printf("Digite um numero para ser inflacionado: ");
    scanf("%lf", &number);

    tempOne = number;
    tempTwo = number;

    for(int i=0; tempOne<100; i++){
        inflationValue = 1.1;
        tempOne++;
    }

    for(int i=0; tempTwo>=100; i++){
        inflationValue = 1.2;
        tempTwo--;
    }

    inflationValueProduct = number * inflationValue;
    printf("VALOR INFLACIONADO: %.2f", inflationValueProduct);

    return 0;
}
