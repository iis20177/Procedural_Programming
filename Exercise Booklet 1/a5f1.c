#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()
{
    int wres_ergasias;
    long wriaia_antimisthia;
    double pososto_krathsewn;
    double akatharistes_apodoxes, krathseis, kathares_apodoxes;
    printf("Dwse ton arithmo twn wrwn: ");
    wres_ergasias = GetInteger();
    printf("Dwse thn wriaia antimisthia: ");
    wriaia_antimisthia =  GetLong();
    printf("Dwse to pososto twn krathsewn: ");
    pososto_krathsewn = GetReal();
    kathares_apodoxes = (double) wres_ergasias * wriaia_antimisthia;
    krathseis = kathares_apodoxes * pososto_krathsewn;
    akatharistes_apodoxes = kathares_apodoxes + krathseis;
    printf("Oi akatharistes apodoxes einai %g\n", akatharistes_apodoxes);
    printf("Oi krathseis einai %g\n", krathseis);
    printf("Oi kathares apodoxes einai %g\n", kathares_apodoxes);
    return 0;
}
