#include <stdio.h>
#include <stdlib.h>
#include "par_ou_impar.h"

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
