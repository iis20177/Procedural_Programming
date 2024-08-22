#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int I, K;
    K = 5;
    for (I=-2; I<=3; I++)
        {
            printf("%2d\n", I+K);
            K=1;
        }
    return 0;
}
