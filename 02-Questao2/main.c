#include <stdio.h>
#include <stdlib.h>
#include "conversao_temperatura_h.h"

/*
Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o
correspondente em Celsius e em Kelvin:
*/

int main()
{
    double fahrenheit;

    printf("Digite uma temperatura em fahrenheit: ");
    scanf("%lf", &fahrenheit);
    printaTemperaturas(fahrenheit);

    return 0;
}
