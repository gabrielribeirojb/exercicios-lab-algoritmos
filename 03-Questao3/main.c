#include <stdio.h>
#include <stdlib.h>
#include "conversao_de_base_h.h"

int main()
{
    int number;
    printf("Digite um numero na base 10: ");
    scanf("%i", &number);

    printaConversaoDeBaseOctal(number);
    printaConversaoDeBaseHexadecimal(number);

    return 0;
}
