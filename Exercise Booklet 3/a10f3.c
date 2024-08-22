#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int i, j, k;
    for (i=1; i<=10; i++)
        {
            for (j=1; j<=10; j++)
                {
                    printf("%4d", i*j);
                }
                printf("\n");
        }
    return 0;
}
