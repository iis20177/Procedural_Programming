#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    double milia, litra;
    milia = (printf("Dose milia :"), GetReal());
    litra = (printf("Dose litra :"), GetReal());
    {
        if (litra/milia >= 0 && litra/milia < 0.9)
            {
                printf("Poli xamili");
            }
        else if (litra/milia >= 0.9 && litra/milia < 1.2)
            {
                printf("Xamili");
            }
        else if (litra/milia >= 1.2 && litra/milia < 1.8)
            {
                printf("Kanoniki");
            }
        else
            {
                printf("Ypsili");
            }
    }
    return 0;
}
