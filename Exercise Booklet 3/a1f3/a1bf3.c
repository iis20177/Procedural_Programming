#include <stdio.h>
#include "simpio.h"
#include <math.h>

main(){
    long Arithmo_Aytok, Orio, Eth=0, Synolo_Autok;
    double Rythmos;
    printf("Dwse ton arxiko arithmo autokinhtwn: ");
    Arithmo_Aytok = GetLong();
    printf("Dwse ton ethsio rythmo ayxhshs: ");
    Rythmos = GetReal();
    printf("Dwse to orio: ");
    Orio = GetLong();
    Synolo_Autok = Arithmo_Aytok;
    while(Synolo_Autok<=Orio)
        {
            Synolo_Autok = ceil(Synolo_Autok*(1+Rythmos));
            Eth++;
        }
    printf("%ld\n%ld\n", Eth, Synolo_Autok);
    return 0;
}
