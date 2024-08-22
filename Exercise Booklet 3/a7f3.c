#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int I,J, K, Number;
    K = 5;
    I = -2;
    while (I<=K)
    {
        I = I + 2;
        K =  K - 1;
        printf("%2d\n", I+K);
    }
    Number = 4;
    while (Number>=0)
    {
        Number = Number - 1;
        printf("%1d", Number);
        printf("\n");
    }
    printf("****\n");
    return 0;
}
