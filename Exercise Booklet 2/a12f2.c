#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    long baros, xrewsh;
    int xwra;
    double epibarunsh, telh;
    baros = (printf("Dwse to baros: "), GetLong());
    xwra = (printf("Dwse ton kwdiko thw xwras apostolhs <0, 1>: "), GetInteger());
    printf("To baros einai %d", baros);
    {
        if (baros >= 1 && baros < 20)
            {
                xrewsh = baros * 15;
            }
        else if (baros >= 20 && baros <100)
            {
                xrewsh = 20 * 15 + (baros - 20) * 20;
            }
        else
            {
                xrewsh = 20 * 15 + 80 * 20 + (baros - 100) * 25;
            }
    }
    printf("H epipleon xrewsh einai %d\n", xrewsh);
    {
        if (xwra == 0)
            {
                epibarunsh = (120 + xrewsh) * 0.12;
            }
        else
            {
                epibarunsh = (120 + xrewsh) * 0.15;
            }
    }
    printf("H epibarunsh einai %g\n", epibarunsh);
    telh = epibarunsh + 120 + xrewsh;
    printf("Ta taxydromika telh einai %g\n", telh);
    return 0;
}
