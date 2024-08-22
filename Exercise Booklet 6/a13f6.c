#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define size 8

void decompose(long number, int *counter, double *MO, int *max);

int main(){
    long N;
    double AVG;
    int DIG, MAX;
    printf("Please insert non-negative number:");
    N = GetLong();
    decompose(N, &DIG, &AVG, &MAX);
    printf("Digits: %d\n", DIG);
    printf("Average: %.3lf\n", AVG);
    printf("Max: %d\n", MAX);
    return 0;
}

void decompose(long number, int *counter, double *MO, int *max){
    int i, count = 1, yp, array[size];
    long num, n;
    double sum = 0;
    num = number;
    n = number;
    while (num/10 != 0)
        {
            num /= 10;
            count++;
        }
    for (i=0; i<count; i++)
        {
            array[i] = n%10;
            n = n/10;
            sum = sum + array[i];
        }
    *max = array[0];
    for (i=0; i<count; i++)
        {
            if (*max<array[i])
                {
                    *max = array[i];
                }
        }
    *counter = count;
    *MO = sum / *counter;
}
