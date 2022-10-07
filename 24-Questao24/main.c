#include <stdio.h>
#include <stdlib.h>
#include "operacoes_nota.h"

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
