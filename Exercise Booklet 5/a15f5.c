#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define elements 100

void RandomArray(int size, int array[]);
void PrintArray(int size, int array[]);
void ReadNumber(int n);
void NewArray(int size, int n, int array[]);

int main()
{
    int a[elements];
    int &ar;

    RandomArray(elements, a);
    printf("\n");
    PrintArray(elements, a);

    printf("\nDose arithmo:");

    ReadNumber(&ar);
    NewArray(elements, &ar, a);

    printf("\n");
    system("pause");
    return 0;
}

void RandomArray(int size, int array[]){
    int i;
    for (i=0; i<size; i++)
        array[i] = rand();
}

void PrintArray(int size, int array[]){
    int i;
    for (i=0; i<size; i++)
        printf("%d ", array[i]);
}

void ReadNumber(int *n){
    n=GetInteger();
}

void NewArray(int size, int n, int array[]){
    int i, k=0;
    int b[elements];
    for (i=0; i<size; i++)
    {
        if (array[i]>n)
        {
            b[k]=array[i];
            k++;
        }
    }
    printf("\nplithos=%d\n", k);

    for (i=0; i<k; i++)
    {
        printf("%d ", b[i]);
    }
}
