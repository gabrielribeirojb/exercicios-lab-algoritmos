#include <stdio.h>
#include <stdlib.h>
#include "operacoes_media.h"

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
