#ifndef FATORIAL_H_H_INCLUDED
#define FATORIAL_H_H_INCLUDED

int fatorial(int n){
    if ( n <= 1){
        return 1;
    } else {
        return fatorial(n-1) * n;
    }
}

#endif // FATORIAL_H_H_INCLUDED
