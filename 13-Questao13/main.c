#include <stdio.h>
#include <stdlib.h>
#include "impares_calcula_h.h"
/*
Dado um número positivo, crie um programa que escreva todos os números ímpares
menores e/ou iguais a esse número e maiores ou igual a um.
*/

int main()
{
    int number;
    printf("Digite um numero: ");
    scanf("%d", &number);
    printImpares(number);
    return 0;
}
