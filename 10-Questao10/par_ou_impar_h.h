#ifndef PAR_OU_IMPAR_H_H_INCLUDED
#define PAR_OU_IMPAR_H_H_INCLUDED

void rotornaParOuImpar(int number){
    if(number % 2 == 0){
        printf("Eh par\n");
        verificaMaiorQueQuinze(number);
    } else if (number % 2 != 0){
        printf("Eh impar\n");
        verificaMaiorQueCinquenta(number);
    }
}

void verificaMaiorQueQuinze(int number){
    if(number > 15){
        printf("Numero eh maior que 15");
    } else {
        printf("Numero eh menor que 15");
    }
}

void verificaMaiorQueCinquenta(int number){
    if(number > 50){
        printf("Numero eh maior que 50");
    } else {
        printf("Numero eh menor que 50");
    }
}

#endif // PAR_OU_IMPAR_H_H_INCLUDED
