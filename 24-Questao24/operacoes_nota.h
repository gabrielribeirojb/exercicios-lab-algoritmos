#ifndef OPERACOES_NOTA_H_INCLUDED
#define OPERACOES_NOTA_H_INCLUDED

void quantidadeDeNotasDeUm(int quantia){
    int result = 0;
    result = quantia/1;

    printf("Quantidade de notas de 1: %d\n", result);
}

void quantidadeDeNotasDeDois(int quantia){
    int result = 0;
    result = quantia/2;

    printf("Quantidade de notas de 2: %d\n", result);
}

void quantidadeDeNotasDeCinco(int quantia){
    int result = 0;
    result = quantia/5;

    printf("Quantidade de notas de 5: %d\n", result);
}

void quantidadeDeNotasDeDez(int quantia){
    int result = 0;
    result = quantia/10;

    printf("Quantidade de notas de 10: %d\n", result);
}

void quantidadeDeNotasDeVinte(int quantia){
    int result = 0;
    result = quantia/20;

    printf("Quantidade de notas de 20: %d\n", result);
}

void quantidadeDeNotasDeCinquenta(int quantia){
    int result = 0;
    result = quantia/50;

    printf("Quantidade de notas de 50: %d\n", result);
}

void quantidadeDeNotasDeCem(int quantia){
    int result = 0;
    result = quantia/100;

    printf("Quantidade de notas de 100: %d\n", result);
}
#endif // OPERACOES_NOTA_H_INCLUDED
