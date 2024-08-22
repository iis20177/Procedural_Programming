#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define S 50

int ReadNum();
void ReadArray(int size, long a[]);
void PrintArray(int size, long a[]);
int FindMaxPos(int size, long a[], int index[]);

int main(){
    int N, i, sum;
    long array[S], indexarray[S];
    N = ReadNum();
    ReadArray(N, array);
    PrintArray(N, array);
    sum = FindMaxPos(N, array, &indexarray);
    printf("Plithos maximum %ld\n", sum);
    printf("Positions of maximum ");
    for (i=0; i<sum; i++)
        {
            printf("%ld ", indexarray[i]);
        }
    return 0;
}

int ReadNum(){
    int number;
    printf("Dwse to plhthos twn stoixeiwn: ");
    number = GetInteger();
    return number;
}

void ReadArray(int size, long a[]){
    int i;
    for (i=0; i<size; i++)
        {
            a[i] = GetLong();
        }
}

void PrintArray(int size, long a[]){
    int i;
    for (i=0; i<size; i++)
        {
            printf("%ld ", a[i]);
        }
}

int FindMaxPos(int size, long a[], int index[]){
    long max;
    int i, found=0, pos[found];
    max = a[0];
    for (i=0; i<size; i++)
        {
            if (max < a[i])
                max = a[i];
        }
    printf("\nmaximum %ld\n", max);
    for (i=0; i<size; i++)
        {
            if (max == a[i])
                found++;
                index[found] = i+1;
        }
    return found;
}
