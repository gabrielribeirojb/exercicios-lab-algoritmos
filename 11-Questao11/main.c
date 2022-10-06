#include <stdio.h>
#include <stdlib.h>
#include "quant_alunos.h"

int main()
{
    int f, m;
    printf("Digite a quantidade de alunas e alunos na sala: ");
    scanf("%d %d", &f, &m);

    quantAlunos(f, m);
    return 0;
}
