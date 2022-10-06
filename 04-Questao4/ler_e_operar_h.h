#ifndef LER_E_OPERAR_H_H_INCLUDED
#define LER_E_OPERAR_H_H_INCLUDED

void operacoes(int n1, int n2){

    if(n1 < n2){
        for(int i=0; n1 <= n2; i++){
            printf("%i ", n1);
            n1++;
        }
    }
    else if(n1 > n2){
        for(int i=0; n2 <= n1; i++){
            printf("%i ", n1);
            n1--;
        }
    }
    else if (n1 == n2){
        printf("Sao numeros iguais");
    }
}

#endif // LER_E_OPERAR_H_H_INCLUDED
