#include <stdio.h>
#include "simpio.h"
#include <math.h>

#define rate 0.025
#define tour 13500000
#define limit 7500000

main(){
    long years, total;
    total = tour;
    years = 0;
    while (total>=limit)
    {
        total = ceil(total*(1-rate));
        years++;
    }
    printf("%ld\n%ld\n", years, total);
    return 0;
}
