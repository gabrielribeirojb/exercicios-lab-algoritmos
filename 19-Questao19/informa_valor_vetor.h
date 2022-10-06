#ifndef INFORMA_VALOR_VETOR_H_INCLUDED
#define INFORMA_VALOR_VETOR_H_INCLUDED

void retornaMaiorValor(int arrayInt[4]){
    int keepHighestValue = arrayInt[0];
    for(int i=0; i<= 4; i++){
        if(keepHighestValue <= arrayInt[i]){
            keepHighestValue = arrayInt[i];
        }
    }

    printf("Maior valor: %i", keepHighestValue);
}

#endif // INFORMA_VALOR_VETOR_H_INCLUDED
