#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    double Cost;
    long Distance;
    Distance = GetInteger();
    {
        if (Distance > 0 && Distance <= 100)
            {
                Cost = 5.0;
            }
        else if (Distance > 100 && Distance <= 500)
            {
                Cost = 8.0;
            }
        else if (Distance > 500 && Distance < 1000)
            {
                Cost = 10.0;
            }
        else
            {
                Cost = 12.0;
            }
    }
    printf("%.1f", Cost);
    return 0;
}
