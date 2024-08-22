#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int N;
    float sum = 0, i;
    printf("Dwse orio:");
    N = GetInteger();
    for (i = 1; i <= N; i++)
    {
        sum = sum + (1/i);
    }
    printf("To athroisma einai %.2f", sum);
    return 0;
}
