#include <stdio.h>
#include <stdlib.h>
#include "soma_impares_h.h"
/*
O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mpares
consecutivos. Por exemplo, 12=1, 22=1+3, 32=1+3+5, 4
2=1+3+5+7, etc. Dado um n�mero n,
calcule seu quadrado usando a soma de �mpares ao inv�s de produto.
*/

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
