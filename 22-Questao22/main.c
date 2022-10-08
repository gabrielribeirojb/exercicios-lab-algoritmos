#include <stdio.h>
#include <stdlib.h>
#include "operacoes_vetor_h.h"
/*
Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene esses
dez números em um vetor. Para os valores dos elementos inseridos nas posições pares desse
vetor, calcule o somatório deles, para os demais calcule a subtração desses valores. Em
seguida, o programa deverá apresentar na tela os resultados.
*/

int main(){

    int vetorInteiros[9];
    int result,add, sub;

    printf("Digite 10 numeros inteiros: ");

    for(int i=0; i<=9; i++){
        scanf("%d", &result);
        vetorInteiros[i] = result;
    }

    add = somaValoresParesVetor(vetorInteiros);
    sub = subtraiValoresImparesVetor(vetorInteiros);

    printf("Valor das posicoes pares do vetor somadas: %i\n", add);
    printf("Valor das posicoes impares do vetor subtraidas: %i\n", sub);

    return 0;
}
