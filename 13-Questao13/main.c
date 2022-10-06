#include <stdio.h>
#include <stdlib.h>
#include "impares_calcula_h.h"

int main()
{
    int number;
    printf("Digite um numero: ");
    scanf("%d", &number);
    printImpares(number);
    return 0;
}
