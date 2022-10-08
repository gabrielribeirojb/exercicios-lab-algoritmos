#include <stdio.h>
#include <stdlib.h>
#include "fatorial_h.h"
/*
Dados um número natural n, exiba seu fatorial n!
*/

int main()
{
    int n, result;
    printf("Digite um numero: ");
    scanf("%d", &n);

    result = fatorial(n);
    printf("Fatorial: %i", result);
    return 0;
}
