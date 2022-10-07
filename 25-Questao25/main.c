#include <stdio.h>
#include <stdlib.h>
#include "operacoes_h.h"

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
