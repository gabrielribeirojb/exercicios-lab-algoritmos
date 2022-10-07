#include <stdio.h>
#include <stdlib.h>
#include "inverte_array_h.h"

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
