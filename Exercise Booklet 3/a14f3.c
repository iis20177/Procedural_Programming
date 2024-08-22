#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int n, i=1, j, sum=0, yp, N;
    printf("Dose arithmo:");
    n = GetInteger();
    N = n;
    while (n/10!=0)
        {
            n /= 10;
            i++;
        }
    for (j=1; j<=i; j++)
        {
            yp=N%10;
            N=N/10;
            sum=sum+yp;
        }
    printf("To athroisma ton psifion einai %d", sum);
    return 0;
}
