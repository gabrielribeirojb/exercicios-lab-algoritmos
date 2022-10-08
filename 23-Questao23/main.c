#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene
em um vetor, depois o programa deverá apresentar na tela os números na ordem inversa do
qual foram digitados.
*/

int main()
{
    int currentNumber;
    int arr1[5];

    printf("Digite 6 numeros: ");
    for(int i=0; i<=5; i++){
        scanf("%d", &currentNumber);
        arr1[i] = currentNumber;
    }

    printf("O array invertido: \n");
    for (int j = 5; j >= 0; j--) {
        printf("%d ", arr1[j]);
    }

    return 0;
}
