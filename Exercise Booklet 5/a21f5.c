#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <math.h>

#define n 5
#define r 4

main(){
    double array[n], calc[r];
    int i;
    for (i=0; i<n; i++)
        {
            printf("Enter number (%d):", i);
            array[i] = GetReal();
        }
    for (i=0; i<n; i++)
        {
            printf("%.2f ", array[i]);
        }
    printf("\n");
    for (i=0; i<n; i++)
        {
            calc[i] = fabs(array[i+1]-array[i]);
        }
    for (i=0; i<n-1; i++)
        {
            printf("%.2f ", calc[i]);
        }
    return 0;
}
