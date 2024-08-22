#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int vathmos, sum=0, i=0;
    double mo;
    printf("Dwse ton bathmo: ");
    vathmos = GetInteger();
    while (vathmos!=-1)
        {
            sum+=vathmos;
            i++;
            printf("Dwse ton bathmo: ");
            vathmos = GetInteger();
        }
    printf("%d\n", i);
    printf("%d\n", sum);
    mo=(double)sum/i;
    printf("%g\n", mo);
    return 0;
}
