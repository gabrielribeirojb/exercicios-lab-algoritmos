#include <stdio.h>
#include <stdlib.h>
#include "fatorial_h.h"

int main()
{
    int n, result;
    printf("Digite um numero: ");
    scanf("%d", &n);

    result = fatorial(n);
    printf("Fatorial: %i", result);
    return 0;
}
