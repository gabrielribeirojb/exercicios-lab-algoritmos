#ifndef OPERACOES_VETOR_H_H_INCLUDED
#define OPERACOES_VETOR_H_H_INCLUDED

int somaValoresParesVetor(int vetorInteiros[9]){
    int soma = 0;

    for(int i=0; i<=9; i=i+2){
        soma += vetorInteiros[i];
    }

    return soma;
}

int subtraiValoresImparesVetor(int vetorInteiros[9]){
    int subtracao = 0;

    for(int i=1; i<=9; i=i+2){
        subtracao -= vetorInteiros[i];
    }

    return subtracao;
}

#endif // OPERACOES_VETOR_H_H_INCLUDED
