#ifndef PAR_OU_IMPAR_H_INCLUDED
#define PAR_OU_IMPAR_H_INCLUDED

int verificaParOuImpar(int number){
    if(number % 2 == 0){
        return 1;
    } else if (number % 2 != 0){
        return 0;
    }
}

#endif // PAR_OU_IMPAR_H_INCLUDED
