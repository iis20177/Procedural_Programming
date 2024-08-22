#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <math.h>

int main ()
{
    int cm, kgr;
    double Y;
    printf("Dwse to baros: ");
    kgr = GetInteger();
    Y = (1.12 * kgr + 65) * 1.2 + 7.0;
    cm = ceil(Y);
    printf("To ypsos einai %d\n", cm);
    return 0;
}
