#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main ()
{
    long epistoles_eswterikou, epistoles_exwterikou;
    double kostos_apostolhs;
    printf("Dwse ton arithmo epistolwn eswterikou: ");
    epistoles_eswterikou = GetInteger();
    printf("Dwse ton arithmo epistolwn exwterikou: ");
    epistoles_exwterikou = GetInteger();
    kostos_apostolhs = epistoles_eswterikou * 0.3 + epistoles_exwterikou * 0.8;
    printf("To synoliko kostos apostolhs einai %g\n", kostos_apostolhs);
    return 0;
}
