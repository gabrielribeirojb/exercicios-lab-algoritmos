#include <stdio.h>
#include <stdlib.h>
#include "ler_e_operar_h.h"

int main()
{
    int n1, n2;
    printf("Insira 2 numeros: ");
    scanf("%d %d", &n1, &n2);

    operacoes(n1, n2);

    return 0;
}
