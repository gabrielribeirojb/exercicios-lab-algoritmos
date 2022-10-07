#ifndef INVERTE_NUMEROS_ARRAY_H_H_INCLUDED
#define INVERTE_NUMEROS_ARRAY_H_H_INCLUDED

void printaInvertido(int arrayNumber[5]){
    int temp;
    for(int i = 0; i<5/2; i++){
        temp = arrayNumber[i];
        arrayNumber[i] = arrayNumber[5-i-1];
        arrayNumber[5-i-1] = temp;
    }
    for(int i = 0; i <= 5; i++){
        printf("%d ", arrayNumber[i]);
    }
}


#endif // INVERTE_NUMEROS_ARRAY_H_H_INCLUDED
