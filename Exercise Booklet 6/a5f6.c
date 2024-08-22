#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define N 5

void ReadArray(int array[]);
void AB(int *x, int *y);
void MinAMinB(int array[], int A, int B, int *countA, int *countB, int *countAB);
void PrintArray(int array[], int A, int B, int countA, int countB, int countAB);

int main(){
    int array[100], A, B, countA = 0, countB = 0, countAB = 0;
    ReadArray(array);
    AB(&A, &B);
    MinAMinB(array, A, B, &countA, &countB, &countAB);
    PrintArray(array, A, B, countA, countB, countAB);
    return 0;
}

void ReadArray(int array[]){
    int i;
    for (i=0; i<N; i++)
        {
            printf("Enter an integer: ");
            array[i] = GetInteger();
        }
}

void AB(int *A, int *B){
    int temp;
    printf("Enter number A: ");
    *A = GetInteger();
    printf("Enter number B: ");
    *B = GetInteger();
    if (*A>*B)
        {
            temp = *A;
            *A = *B;
            *B = temp;
        }
}

void MinAMinB(int array[], int A, int B, int *countA, int *countB, int *countAB){
    int i;
    for (i=0; i<N; i++)
        {
            if (array[i] <= A)
                {
                    *countA = *countA + 1;
                }
            if (array[i] >= B)
                {
                    *countB = *countB + 1;
                }
            if (array[i] > A && array[i] < B)
                {
                    *countAB = *countB + 1;
                }
        }
}

void PrintArray(int array[], int A, int B, int countA, int countB, int countAB){
    int i;
    for (i=0; i<N; i++)
        {
            printf("%d ", array[i]);
        }
    printf("\nA: %d\nB: %d\nN<=A: %d\nN>=B: %d\nA<N<B: %d\n", A, B, countA, countB, countAB);
}
