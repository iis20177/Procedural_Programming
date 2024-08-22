#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int N, i;
    printf("Dwse arithmo : ");
    N = GetInteger();
    printf("H fthinousa akolouthia einai: ");
    for(i=N; i>=1; i--)
    {
        printf("%d,", i);
    }
    printf("0");
    return 0;
}
