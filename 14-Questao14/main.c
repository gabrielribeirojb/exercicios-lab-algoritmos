#include <stdio.h>
#include <stdlib.h>
#include "converte_temperatura.h"
/*
A convers�o de graus Fahrenheit para Celsius � obtida por Tc={(Tf-32)x(5/9)}, em que Tc
� a temperatura em Celsius e Tf em Fahrenheit. Fa�a um programa C que calcule e que
imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de
1 em 1.
*/

int main()
{
    double converter;

    for(int i=40; i<=75; i++){
        converter = converteCelsiusFahrenheit(i);
        printf("Temp em Celsius => %d / Temp em Fahreinheit: %.2f\n", i, converter);
    }
    return 0;
}
