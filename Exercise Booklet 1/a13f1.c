#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main ()
{
    int vathmosA, vathmosB, vathmosC, MO;
    printf("Dwse vathmo A Triminou? ");
    vathmosA = GetInteger();
    printf("Dwse vathmo B Triminou? ");
    vathmosB = GetInteger();
    printf("Dwse vathmo C Triminou? ");
    vathmosC = GetInteger();
    MO = (vathmosA+vathmosB+vathmosC)/3;
    printf("O mesos oros tou mathiti einai: %d\n", MO);
    return 0;
}
