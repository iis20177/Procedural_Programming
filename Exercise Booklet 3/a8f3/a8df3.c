#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int I, K;
    I = 0;
    do
    {
    K = I*I*I - 3*I + 1;
    printf("%3d%3d\n", I, K);
    } while (I>2);
    return 0;
}
