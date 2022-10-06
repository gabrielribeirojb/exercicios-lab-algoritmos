#ifndef CHECA_IDADES_H_H_INCLUDED
#define CHECA_IDADES_H_H_INCLUDED

void verificaMaisVelho(int pedro, int joana, int ismael){

    if (pedro >= joana && pedro >= ismael)
    {
        printf("Pedro eh o mais velho", pedro);
    }
    if (joana >= pedro && joana >= ismael)
    {
        printf("Joana eh a mais velha", joana);
    }
    if (ismael >= pedro && ismael >= joana)
    {
        printf("Ismael eh o mais velho", ismael);
    }
}

#endif // CHECA_IDADES_H_H_INCLUDED
