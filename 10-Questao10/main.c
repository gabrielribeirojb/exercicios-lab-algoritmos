#include <stdio.h>
#include <stdlib.h>
#include "par_ou_impar_h.h"

int main()
{
    int number;
    printf("Digite um numero: ");
    scanf("%d", &number);
    rotornaParOuImpar(number);
    return 0;
}
