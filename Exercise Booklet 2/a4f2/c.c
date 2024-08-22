#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main() {
    double A, B;
    A = GetInteger();
    {
        if (A > 0 && A < 5)
            {
                B = 1 / (A * A);
            }
        else
            {
                B = A * A;
            }
    }
    printf("%g", B);
    return 0;
}
