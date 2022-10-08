#include <stdio.h>
#include <stdlib.h>
#include "checa_idades_h.h"
/*
Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e
informar quem é o mais velho. Considere que essas pessoas possuem idades diferentes.
*/

int main()
{
    int pedro, joana, ismael;
    printf("Digite idades para Pedro, Joana e Ismael: ");
    scanf("%d %d %d", &pedro, &joana, &ismael);

    verificaMaisVelho(pedro, joana, ismael);
    return 0;
}
