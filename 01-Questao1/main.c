#include <stdlib.h>
#include <stdio.h>
#include "operacoes_mat_h.h"

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
