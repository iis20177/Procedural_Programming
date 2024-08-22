#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define size 100

void FindMinMax(int counter, int array[], int *pmax, int *pmin);
int ReadNumbers(int array[]);

int main(){
    int i, counter, array[size], MAX, MIN;
    printf("Enter the elements of the array, one per line.\n");
    printf("Use -1 to signal the end of the list.\n");
    counter = ReadNumbers(array);
    FindMinMax(counter, array, &MAX, &MIN);
    printf("The range of values is %d-%d\n", MIN, MAX);
    return 0;
}

int ReadNumbers(int array[]){
    int N, count=0;
    printf("? ");
    N = GetInteger();
    while (N!=-1)
        {
            array[count]=N;
            count++;
            printf("? ");
            N = GetInteger();
        }
    return count;
}

void FindMinMax(int counter, int array[], int *pmax, int *pmin){
    int i;
    *pmax = array[0];
    *pmin = array[0];
    for (i=0; i<counter; i++)
    {
        if (*pmax<array[i])
            *pmax = array[i];
        else if (*pmin>array[i])
            *pmin = array[i];
    }
}
