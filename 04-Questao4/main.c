#include <stdio.h>
#include <stdlib.h>
#include "ler_e_operar_h.h"

/*
 Faça um programa que lê dois valores e imprime
a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
b) se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro
em ordem decrescente;
c) se ambos forem iguais a mensagem "valores iguais".
*/

int main()
{
    int n1, n2;
    printf("Insira 2 numeros: ");
    scanf("%d %d", &n1, &n2);

    operacoes(n1, n2);

    return 0;
}
