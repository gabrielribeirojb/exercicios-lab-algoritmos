#include <stdio.h>
#include <stdlib.h>
#include "notas_medias_h.h"

int main()
{
    double arrayGrades[9];
    double result, keepGrades;

    for(int j=0; j <= 9; j++){
        printf("Digite a nota %i: \n", j);
        scanf("%lf", &result);
        keepGrades += result;
        arrayGrades[j] = result;
    }

    printaMedia(keepGrades);
    retornaMaiorValor(arrayGrades);
    retornaMenorValor(arrayGrades);

    return 0;
}
