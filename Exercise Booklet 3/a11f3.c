#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int i, j;
    for (i=1; i<=9; i++)
    {
        for (j=1; j<=9; j+=2)
            {
                printf("*");
            }
        printf("*\n");
    }
    return 0;
}
