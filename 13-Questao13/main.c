#include <stdio.h>
#include <stdlib.h>
#include "impares_calcula_h.h"
/*
Dado um n�mero positivo, crie um programa que escreva todos os n�meros �mpares
menores e/ou iguais a esse n�mero e maiores ou igual a um.
*/

int main()
{
    int number;
    printf("Digite um numero: ");
    scanf("%d", &number);
    printImpares(number);
    return 0;
}
