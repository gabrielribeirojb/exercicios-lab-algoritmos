#include <stdio.h>
#include <stdlib.h>[
#include "conversao_temperatura_h.h"

int main()
{
    double fahrenheit;

    printf("Digite uma temperatura em fahrenheit: ");
    scanf("%lf", &fahrenheit);
    printaTemperaturas(fahrenheit);

    return 0;
}
