#ifndef OPERACOES_MAT_H_H_INCLUDED
#define OPERACOES_MAT_H_H_INCLUDED
#include <math.h>


void printaSoma(double n1, double n2){
    double result = n1 + n2;
    printf("A soma eh: %.2f \n", result);
}

void printaQuadradoSegundo(double n1, double n2){
    double result = n1 * pow(n2, 2);
    printf("Resultado do primeiro n * segundo n ao quadrado: %.2f \n", result);
}

void printaQuadradoDoPrimeiro(double n1){
    double result = pow(n1, 2);
    printf("Resultado do quadrado do primeiro n: %.2f \n", result);
}

void printaRaizQuadradaDaSoma(double n1, double n2){
    double result = sqrt(pow(n1, 2) + pow(n2, 2));
    printf("Resultado da raiz quadrada da soma: %.2f \n", result);
}

void printaSenoDaDiferenca(double n1, double n2){
    double result = sin(n1 - n2);
    printf("Resultado do seno da diferenca: %.2f \n", result);
}

void printaModuloPrimeiroNumero(double n1){
    double result = fabs(n1);
    printf("Resultado do modulo do primeiro numero: %.2f \n", result);
}

#endif // OPERACOES_MAT_H_H_INCLUDED
