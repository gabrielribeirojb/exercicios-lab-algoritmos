#ifndef QUANT_ALUNOS_H_INCLUDED
#define QUANT_ALUNOS_H_INCLUDED

void quantAlunos(int f, int m){
    int total = f + m;

    if( f < m){
        printf("Possui mais alunos");
    } else if ( f > m){
        printf("Possui mais alunas\n");
        printf("Total de alunos na sala: %d", total);
    } else if ( f == m){
        printf("Possui a mesma quantidade de alunos e alunas");
    }
}

#endif // QUANT_ALUNOS_H_INCLUDED
