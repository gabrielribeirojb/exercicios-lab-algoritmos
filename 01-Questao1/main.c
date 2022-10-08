#include <stdlib.h>
#include <stdio.h>
#include "operacoes_mat_h.h"
/*
Faça um programa que solicite 2 números e informe: a soma dos números, o produto do
primeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadrada
da soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulo
do primeiro número
*/

int main()
{
    double n1, n2;
    printf("Digite dois numeros: ");
    printf("\n");
    scanf("%lf %lf", &n1, &n2);

    printaSoma(n1,n2);
    printaQuadradoSegundo(n1,n2);
    printaQuadradoDoPrimeiro(n1);
    printaRaizQuadradaDaSoma(n1, n2);
    printaSenoDaDiferenca(n1,n2);
    printaModuloPrimeiroNumero(n1);

    return 0;
}
