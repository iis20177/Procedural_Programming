#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()
{
    int kila, cm, xronia;
    double bmr;
    printf("Dwse varos se kila: ");
    kila = GetInteger();
    printf("Dwse upsos se cm: ");
    cm =  GetInteger();
    printf("Dwse ilikia se xronia: ");
    xronia = GetInteger();
    bmr = 655 + (9.6 * kila) + (1.8 * cm) - (4.7 * xronia);
    printf("To BMR einai: %g\n", bmr);
    return 0;
}
