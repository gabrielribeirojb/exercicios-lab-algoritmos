#include <stdio.h>
#include <stdlib.h>
#include "conversao_de_base_h.h"

/*
Escreva um programa que leia um n�mero na base decimal e em seguida imprima esse
mesmo n�mero nas bases octal e hexadecimal.
*/

int main()
{
    int number;
    printf("Digite um numero na base 10: ");
    scanf("%i", &number);

    printaConversaoDeBaseOctal(number);
    printaConversaoDeBaseHexadecimal(number);

    return 0;
}
