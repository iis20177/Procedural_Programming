#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int m, n, gcd, r = 1, temp;
    printf("Dose ton prwto arithmo :");
    m = GetInteger();
    printf("Dose ton deutero arithmo :");
    n = GetInteger();
    if (n > m)
        {
            temp = n;
            n = m;
            m = temp;
        }
    if (n == 0)
        {
            gcd = m;
        }
    else
        {
            while (r != 0)
                {
                    r = m%n;
                    if (r == 0)
                        {
                            gcd = n;
                        }
                    else
                        {
                            m = n;
                            n = r;
                        }
                }
        }
    printf("O MKD einai %d", gcd);
    return 0;
}
