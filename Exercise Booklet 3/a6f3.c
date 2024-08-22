#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int N, i, a = 0, b = 1, c;
    N = GetInteger();
    if (N == 0)
        printf("%d", a);
    else
        printf("%d %d ", a, b);
        for (i=2; i<N; i++)
            {
                c = a + b;
                a = b;
                b = c;
                printf("%d ", c);
            }
    return 0;
}
