#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int i;
    for (i=1; i<=100; i++)
        {
           printf("%4d", i);
           if (i%10==0)
               {
                   printf("\n");
               }
        }
    return 0;
}
