#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number = 0.0;
    double tempOne = 0.0;
    double tempTwo = 0.0;
    double inflationValue = 0.0;
    double inflationValueProduct = 0.0;

    printf("Digite um numero para ser inflacionado: ");
    scanf("%lf", &number);

    tempOne = number;
    tempTwo = number;

    for(int i=0; tempOne<100; i++){
        inflationValue = 1.1;
        tempOne++;
    }

    for(int i=0; tempTwo>=100; i++){
        inflationValue = 1.2;
        tempTwo--;
    }

    inflationValueProduct = number * inflationValue;
    printf("VALOR INFLACIONADO: %.2f", inflationValueProduct);

    return 0;
}
