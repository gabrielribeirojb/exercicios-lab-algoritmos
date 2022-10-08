#include <stdio.h>
#include <stdlib.h>
#include "operacoes_h.h"
/*
Fa�a um programa que l� um conjunto de 10 valores inteiros e verifica se algum dos
valores � igual a m�dia dos mesmos.
*/

int main()
{
    int arrayInteiros[9];
    int result, somaDaMedia;

    printf("Digite 10 numeros inteiros: ");

    for(int i=0; i<=9; i++){
        scanf("%d", &result);
        arrayInteiros[i] = result;
    }

    somaDaMedia = calculaMediaVetor(arrayInteiros);
    result = verificaMediaDosElementosDoVetor(somaDaMedia, arrayInteiros);

    printf("TEM %i VALORES IGUAIS A MEDIA\n", result);

    return 0;
}
