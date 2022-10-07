#ifndef SOMA_IMPARES_H_H_INCLUDED
#define SOMA_IMPARES_H_H_INCLUDED

int somaImpares(int n){
    int sum = 0;

    for (int i=1; i<=n; i++){
          sum += (2*i - 1);
    }

    return sum;
}

#endif // SOMA_IMPARES_H_H_INCLUDED
