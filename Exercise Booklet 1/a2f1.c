#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()
{
    long pleura_1, pleura_2;
    double embado;
    printf("Dwse to mhkos ths 1hs kathetis pleuras: ");
    pleura_1 = GetInteger();
    printf("Dwse to mhkos ths 2hs kathetis pleuras: ");
    pleura_2 = GetInteger();
    embado = pleura_1 * pleura_2/2.0;
    printf("To embado einai: %g\n", embado);
    return 0;
}
