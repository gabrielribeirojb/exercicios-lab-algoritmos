#ifndef OPERACOES_H_H_INCLUDED
#define OPERACOES_H_H_INCLUDED

int calculaMediaVetor(int arrayInteiros[9]){
    int result;

    for(int i=0; i<=9; i++){
        result = arrayInteiros[i];
    }

    return result;
}

int verificaMediaDosElementosDoVetor(int somaDaMedia, int arrayInteiros[9]){
    int countEqualValues = 0;
    for(int i=0; i<=9; i++){
        if(somaDaMedia == arrayInteiros[i]){
            countEqualValues++;
        }
    }

    return countEqualValues;
}

#endif // OPERACOES_H_H_INCLUDED
