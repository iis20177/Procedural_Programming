#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int theseis, epibates;
    theseis = (printf("Dose theseis :"), GetInteger());
    epibates = (printf("Dose epibates :"), GetInteger());
    {
        if (theseis * 0.5 <= epibates)
            {
                printf("Kerdos");
            }
        else if (theseis * 0.3 >= epibates)
            {
                printf("Zimia");
            }
        else
            {
                printf("Kostos");
            }
    }
    return 0;
}
