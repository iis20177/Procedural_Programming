#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void swap(int *x, int *y);

int main(){
    int A, B, C;
    A = GetInteger();
    B = GetInteger();
    C = GetInteger();
    swap(&A, &B);
    swap(&A, &C);
    swap(&B, &C);
    printf("%d < %d < %d", A, B, C);
    return 0;
}

void swap(int *x, int *y){
    int temp;
    if (*x>*y)
        {
            temp = *x;
            *x = *y;
            *y = temp;
        }
}
