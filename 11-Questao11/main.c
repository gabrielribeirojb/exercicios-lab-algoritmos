#include <stdio.h>
#include <stdlib.h>
#include "quant_alunos.h"
/*
Codifique um programa que leia a quantidade de alunas e de alunos. Depois esse
programa deve informar se essa turma possui mais alunos ou mais alunas. Se essa turma
possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos é igual a de alunas.
*/

int main()
{
    int f, m;
    printf("Digite a quantidade de alunas e alunos na sala: ");
    scanf("%d %d", &f, &m);

    quantAlunos(f, m);
    return 0;
}
