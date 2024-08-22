#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    double epidoma;
    int misthos, paidia;
    misthos = (printf("Dwse ton vasiko mistho: "), GetInteger());
    paidia = (printf("Dwse ton arithmo ton paidion: "), GetInteger());
    {
        if (paidia == 1)
            {
                 epidoma = misthos * 0.4;
            }
        else if (paidia == 2)
            {
                 epidoma = misthos * 0.9;
            }
        else if (paidia == 3)
            {
                epidoma = misthos * 0.15;
            }
        else
            {
                epidoma = misthos * 0.15 * 3 + misthos * 0.4 * (paidia - 3);

            }
    }
    printf("To epidoma einai %.2f", epidoma);
    return 0;
}
