#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <stdlib.h>

#define size 50

void populate(int SIZE, int a[]);
void printArr(int SIZE, int a[]);

void checkTable(int N, int SIZE, int a[], int *count, int *pos[size]);

int main(){
    int a[size], N, c, p, pos[size]= {NULL};
    populate(size,a);
    int i;
    for (i=0; i<size; i++)
        {
            printArr(i, a);
        }
    printf("\n--------------\n");
    printf("Dose arithmo apo to 0 ews to 9: ");
    N = GetInteger();
    checkTable(N, size, a, &c, &pos);
    printf("\nO Arithmos %d emfanizetai %d fores.\n", N, c);
    printf("Stis theseis:\n");
    for (i=0; i<size; i++)
        {
            if(pos[i] != NULL)
            {
                printArr(i, pos);
            }
        }
    printf("\n-----------------");
    return 0;
}

void populate(int SIZE, int a[]){
    int i;
    for (i=0; i<SIZE; i++)
        {
            a[i] = rand() % 10;
        }
}

void printArr(int SIZE, int a[]){
    printf(" %d ", a[SIZE]);
}

void checkTable(int N, int SIZE, int a[], int *count, int *pos[size]){
    int i;
    *count=0;
    for (i=0; i<SIZE; i++)
        {
            if (N==a[i])
                {
                    *count=*count+1;
                    pos[i]=i;
                }
        }
}
