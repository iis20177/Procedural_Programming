#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main ()
{
    int ka8ara_tm, mikta_tm;
    double dt, df;
    printf("Dwse ta ka8ara tm tou spitiou? ");
    ka8ara_tm = GetInteger();
    printf("Dwse ta mikta tm tou spitiou? ");
    mikta_tm = GetInteger();
    dt = ka8ara_tm * 1.33 * 61 / 365;
    df = mikta_tm * 0.13 * 61 / 365;
    printf("Ta DT einai: %.2f\n", dt);
    printf("O DF einai: %.2f\n", df);
    return 0;
}
