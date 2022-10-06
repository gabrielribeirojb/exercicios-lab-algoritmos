#ifndef CONVERSAO_TEMPERATURA_H_H_INCLUDED
#define CONVERSAO_TEMPERATURA_H_H_INCLUDED

void printaTemperaturas(double fahrenheit){
    double celsius, kelvin;

    celsius = (fahrenheit - 32) * 5/9;
    kelvin = 273.15 + ((fahrenheit - 32) * (5.0/9.0));

    printf("Temperatura em celsius: %.2f\nTemperatura em kelvin: %.2f", celsius, kelvin);
}

#endif // CONVERSAO_TEMPERATURA_H_H_INCLUDED
