#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <math.h>

long ypologismos(long Kefalaio, double Epitokio, int Eti);

int main(){
    long Kefalaio, total;
    double Epitokio;
    int Eti;
    printf("Dwse to kefalaio: ");
    Kefalaio = GetLong();
    printf("Dwse to epitokio: ");
    Epitokio = GetReal();
    printf("Dwse ta eth: ");
    Eti = GetInteger();
    total = ypologismos(Kefalaio, Epitokio, Eti);
    printf("%ld", total);
    return 0;
}

long ypologismos(long Kefalaio, double Epitokio, int Eti){
    long synolo;
    synolo = ceil(Kefalaio*(1+Epitokio*Eti));
    return synolo;
}
