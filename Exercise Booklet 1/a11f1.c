#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main ()
{
    long timh_temaxiou, plithos_temaxiwn;
    double FPA, kostos;
    printf("Dwse thn timh temaxiou: ");
    timh_temaxiou = GetInteger();
    printf("Dwse to pososto FPA: ");
    FPA = GetReal();
    printf("Dwse to plithos twn temaxiwn: ");
    plithos_temaxiwn = GetInteger();
    kostos = (timh_temaxiou * plithos_temaxiwn) + timh_temaxiou * plithos_temaxiwn * FPA;
    printf("To kostos ths paragelias einai %g\n", kostos);
    return 0;
}
