#include <stdio.h>
#include <stdlib.h>
#include "calcula_media_h.h"

int main()
{
    double n1, n2, n3, me, avarege;
    printf("Digite as 3 notas e nota do exercicio: ");
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &me);

    avarege = calculaMedia(n1, n2, n3, me);
    conceitoNota(avarege);

    return 0;
}
