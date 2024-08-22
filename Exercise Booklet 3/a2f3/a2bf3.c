#include <stdio.h>
#include "simpio.h"
#include <math.h>

main(){
    long years, total, tour, limit;
    double rate;
    printf("Dwse to trexon touristiko synallagma: ");
    tour = GetLong();
    printf("Dwse ton rythmo meiwshs: ");
    rate = GetReal();
    printf("Dwse to orio: ");
    limit = GetLong();
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
