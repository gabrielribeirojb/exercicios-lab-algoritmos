#ifndef NOTAS_MEDIAS_H_H_INCLUDED
#define NOTAS_MEDIAS_H_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

void printaMedia(double keepGrades){
    double result;

    result = keepGrades/10;
    printf("Media: %.2f\n", result);
}

void retornaMaiorValor(double arrayGrades[9]){
    double keepHighestValue = 0.0;
    for(int i=0; i<= 9; i++){
        if(arrayGrades[i] <= 10.0){
            if(keepHighestValue <= arrayGrades[i]){
            keepHighestValue = arrayGrades[i];
            }
        } else {
            printf("Valor de nota invalido");
        }

    }

    printf("Maior valor: %.2f\n", keepHighestValue);
}

void retornaMenorValor(double arrayGrades[9]){
    double keepLowerValue = arrayGrades[0];
    for(int i=0; i<= 9; i++){
        if(arrayGrades[i] <= 10.0){
            if(keepLowerValue >= arrayGrades[i]){
            keepLowerValue = arrayGrades[i];
            }
        } else {
            printf("Valor invalido para nota");
        }
    }

    printf("Menor valor: %.2f", keepLowerValue);
}

#endif // NOTAS_MEDIAS_H_H_INCLUDED
