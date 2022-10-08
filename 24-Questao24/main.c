#include <stdio.h>
#include <stdlib.h>
#include "operacoes_nota.h"
/*
Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma
dada quantia. Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais
*/

int main()
{
    int quantia = 0;
    printf("Digite uma quantia em dinheiro \n");
    scanf("%d", &quantia);

    quantidadeDeNotasDeUm(quantia);
    quantidadeDeNotasDeDois(quantia);
    quantidadeDeNotasDeCinco(quantia);
    quantidadeDeNotasDeDez(quantia);
    quantidadeDeNotasDeVinte(quantia);
    quantidadeDeNotasDeCinquenta(quantia);
    quantidadeDeNotasDeCem(quantia);

    return 0;
}
