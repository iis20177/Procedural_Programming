#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int index=0, max=0, min=100000, sum=0, poso;
    while (sum<100000)
        {
            printf("Dose poso :");
            poso = GetInteger();
            sum += poso;
            index += 1;
            if (max<poso)
                {
                    max = poso;
                }
            if (min>poso)
                {
                    min = poso;
                }
        }
    printf("Plithos atomon: %d\n", index);
    printf("Synoliko poso %d\n", sum);
    printf("Megalitero poso: %d  ", max);
    printf("Mikrotero poso: %d", min);
    return 0;
}
