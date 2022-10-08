#include <stdio.h>
#include <stdlib.h>
#include "par_ou_impar_h.h"
/*
Faça um programa que receba um número inteiro e que verifique se esse número é par
ou ímpar. O programa deve informar se o número é par, caso afirmativo informar também se
é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se é ou não menor
que 50.
*/

int main()
{
    int number;
    printf("Digite um numero: ");
    scanf("%d", &number);
    rotornaParOuImpar(number);
    return 0;
}
