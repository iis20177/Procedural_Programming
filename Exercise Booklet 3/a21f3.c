#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int i, sum=0;
    for (i=1; i<=20; i++)
    {
        sum=sum+i;
    }
    printf("To athroisma ton arithmon apo to 1 eos to 20 ektos toy 5 kai toy 15 einai %d", sum-20);
    return 0;
}

