#include <stdio.h>
#include <stdlib.h>
#include "soma_impares_h.h"

int main()
{
    int n = 0;
    int result = 0;

    printf("De um numero n para calcular o seu quadrado atraves da soma de numeros impares: ");
    scanf("%d", &n);

    result = somaImpares(n);
    printf("Quadrado calculado pela soma: %i", result);


    return 0;
}
