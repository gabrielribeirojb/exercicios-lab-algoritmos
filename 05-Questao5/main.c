#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que imprime a tabela ASCII (c�digo decimal, c�digo hexa, caractere)
para os c�digos de 0 a 127.
*/

int main()
{
    for(int i=0; i<128; i++){
        printf("codigo decimal %d| codigo hexa %x| caractere %c\n",i,i,i);
    }

    return 0;
}
