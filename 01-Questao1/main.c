#include <stdlib.h>
#include <stdio.h>
#include "operacoes_mat_h.h"
/*
Fa�a um programa que solicite 2 n�meros e informe: a soma dos n�meros, o produto do
primeiro n�mero pelo quadrado do segundo, o quadrado do primeiro n�mero, a raiz quadrada
da soma dos quadrados, o seno da diferen�a do primeiro n�mero pelo segundo e O m�dulo
do primeiro n�mero
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
