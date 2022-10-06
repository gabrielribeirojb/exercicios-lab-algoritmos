#ifndef CALCULA_MEDIA_H_H_INCLUDED
#define CALCULA_MEDIA_H_H_INCLUDED

double calculaMedia(double n1, double n2, double n3, double me){
    return (n1 + n2*2 + n3*3 + me)/7;
}

void conceitoNota(double avarege){
    if(avarege < 4.0){
        printf("NOTA: F");
    } else if(avarege >=4 && avarege <6){
        printf("NOTA: D");
    } else if(avarege >=6 && avarege <7.5){
        printf("NOTA: C");
    } else if(avarege >=7.5 && avarege <9){
        printf("NOTA: B");
    } else if(avarege >=9){
        printf("NOTA: A");
    }
}


#endif // CALCULA_MEDIA_H_H_INCLUDED
