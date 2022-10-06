#ifndef IMPARES_CALCULA_H_H_INCLUDED
#define IMPARES_CALCULA_H_H_INCLUDED

void printImpares(int number){
    printf("Numeros impares menores ou iguais a %i:", number);
    for(int i=1; i<=number; i++){
        if(i % 2 != 0){
            printf(" %i ", i);
        }
    }
}

#endif // IMPARES_CALCULA_H_H_INCLUDED
