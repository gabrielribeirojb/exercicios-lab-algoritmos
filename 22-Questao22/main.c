#include <stdio.h>
#include <stdlib.h>
#include "operacoes_vetor_h.h"
/*
Desenvolva um programa que leia dez n?meros do tipo inteiro ao usu?rio armazene esses
dez n?meros em um vetor. Para os valores dos elementos inseridos nas posi??es pares desse
vetor, calcule o somat?rio deles, para os demais calcule a subtra??o desses valores. Em
seguida, o programa dever? apresentar na tela os resultados.
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
