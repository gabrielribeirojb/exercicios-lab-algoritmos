#include <stdio.h>
#include <stdlib.h>
#include "par_ou_impar.h"
/*
Fa�a um programa que mostre todos os n�meros pares existentes entre 1 e 50.
*/

int main()
{
    int verifier;

    for(int i=1; i<= 50; i++){
        verifier = verificaParOuImpar(i);
        if(verifier){
            printf("%d ", i);
        }
    }

    return 0;
}
