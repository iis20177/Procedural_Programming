#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int n, i, j, pascal = 1;
    do
        {
            n = GetInteger();
        }
    while (n>11);
    for (i=0; i<=n; i++)
        {
            printf("%2d", i);
            for (j=0; j<=i; j++)
                {
                    if (j == 0 || i == 0)
                        {
                            pascal = 1;
                        }
                    else
                        {
                            pascal = pascal * (i-j+1)/j;
                        }
                    printf("%5d", pascal);
                }
            printf("\n");
        }
    return 0;
}
