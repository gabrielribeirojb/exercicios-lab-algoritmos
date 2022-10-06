#include <stdio.h>
#include <stdlib.h>
#include "checa_idades_h.h"

int main()
{
    int pedro, joana, ismael;
    printf("Digite idades para Pedro, Joana e Ismael: ");
    scanf("%d %d %d", &pedro, &joana, &ismael);

    verificaMaisVelho(pedro, joana, ismael);
    return 0;
}
