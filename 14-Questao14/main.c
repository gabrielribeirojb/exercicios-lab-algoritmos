#include <stdio.h>
#include <stdlib.h>
#include "converte_temperatura.h"

int main()
{
    double converter;

    for(int i=40; i<=75; i++){
        converter = converteCelsiusFahrenheit(i);
        printf("Temp em Celsius => %d / Temp em Fahreinheit: %.2f\n", i, converter);
    }
    return 0;
}
