#include <stdio.h>
#include "simpio.h"
#include <math.h>

#define rate 0.07
#define limit 160000
#define cars 80000

main(){
    long years, carrent;
    carrent = cars;
    years=0;
    while(carrent<=limit)
        {
            carrent = ceil(carrent*(1+rate));
            years++;
        }
    printf("%ld\n%ld\n", years, carrent);
    return 0;
}
