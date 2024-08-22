#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int code, K, N;
    long sum;
    code = GetInteger();
    {
        if (code == 1)
            {
                K = GetInteger();
                N = GetInteger();
                sum = K + N;
                printf("%ld", sum);
            }
        else
            {
                printf("ERROR");

            }
    }
    return 0;
}
