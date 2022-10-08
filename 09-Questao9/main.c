#include <stdio.h>
#include <stdlib.h>
#include "calcula_media_h.h"
/*
Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dos
exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA =
(N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:
maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E
*/

int main()
{
    double n1, n2, n3, me, avarege;
    printf("Digite as 3 notas e nota do exercicio: ");
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &me);

    avarege = calculaMedia(n1, n2, n3, me);
    conceitoNota(avarege);

    return 0;
}
