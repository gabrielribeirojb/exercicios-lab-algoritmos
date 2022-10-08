#include <stdio.h>
#include <stdlib.h>
#include "operacoes_media.h"
/*
Implemente um programa que solicita as notas das duas provas feitas por cada um dos
alunos de uma turma (as notas têm de estar no intervalo [0 10]) e imprime para cada um a
média das notas. O programa deve parar imediatamente após ter sido digitado o valor 50 para
a nota da primeira prova.
*/

int main()
{
    int quant;
    double n1, n2;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quant);

    for(int i=0; i<quant; i++){
        printf("Digite a nota 1 e nota 2 para o aluno %i no intervalo [0, 10]\n", i+1);
        scanf("%lf", &n1);
        if(n1 == 50){
            return 0;
        }
        scanf("%lf", &n2);
        if((n1 >= 0.0 && n1 <= 10) && (n2 >= 0.0 && n2 <= 10.0)){
            printaMedia(n1, n2);
        } else {
            printf("Valores nao estao no intervalo [0, 10]");
        }

    }

    return 0;
}
