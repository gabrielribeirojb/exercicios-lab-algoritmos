#include <stdio.h>
#include <stdlib.h>
#include "par_ou_impar_h.h"
/*
Fa�a um programa que receba um n�mero inteiro e que verifique se esse n�mero � par
ou �mpar. O programa deve informar se o n�mero � par, caso afirmativo informar tamb�m se
� ou n�o maior que 15 ou se o n�mero � �mpar, caso afirmativo informar se � ou n�o menor
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
