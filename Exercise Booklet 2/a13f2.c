#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main() {
    int coffee, euro1, euro2, lepta50, lepta20, lepta10, yp, resta;
    printf("Dose kafedes:");
    coffee = GetInteger();
    if (coffee < 8)
    {
        resta = 500 - coffee * 70;
        printf("Resta\n");
        euro2 = resta/200;
        yp = resta%200;
        printf("Kermata 2E :%d\n", euro2);
        euro1 = yp/100;
        yp = yp%100;
        printf("Kermata 1E :%d\n", euro1);
        lepta50 = yp/50;
        yp = yp%50;
        printf("Kermata 50L :%d\n", lepta50);
        lepta20 = yp/20;
        yp = yp%20;
        printf("Kermata 20L :%d\n", lepta20);
        lepta10 = yp/10;
        printf("Kermata 10L :%d\n", lepta10);
    }
    else
        printf("den ftanoun ta xrhmata gia tosous kafedes");
    return 0;
}
