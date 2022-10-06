#ifndef CONVERSAO_DE_BASE_H_H_INCLUDED
#define CONVERSAO_DE_BASE_H_H_INCLUDED

void printaConversaoDeBaseOctal(int number){
    int octalNumber = 0;
    int countval = 1;

    while (number != 0) {
        int divider = number % 8;

        octalNumber += divider * countval;

        countval = countval * 10;
        number /= 8;
    }
    printf("Numero na base octal: %d\n", octalNumber);
}

void printaConversaoDeBaseHexadecimal(int number){
    char hexadecimalNumber[50];
    int i = 0;

    while (number != 0){
        int temp = number % 16;

        hexadecimalNumber[i++] = temp + ((temp < 10) ? 48 : 55);
        number = number / 16;
    }

    printf("Numero na base hexadecimal: ");
    printf("0x");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hexadecimalNumber[j]);
    }
}

#endif // CONVERSAO_DE_BASE_H_H_INCLUDED
