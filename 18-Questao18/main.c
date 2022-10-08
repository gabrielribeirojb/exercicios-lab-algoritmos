#include <stdio.h>
#include <stdlib.h>
#include "notas_medias_h.h"
/*
Faça um programa C que leia dez números que representam as notas de dez alunos de
uma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a entrada
de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assuma
que as notas são informadas corretamente no intervalo de 1 a 10.
*/

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
