#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void Read_Array(int M, int N, long table[50][50]);
void Find_Min_of_Rows(int M, int N, long table[50][50], long B[50]);
void Print_Min_Array(int M, long B[50]);

int main(){
    int M, N;
    long array[50][50], arr[50];
    printf("Dwse thn timh tou m: ");
    M = GetInteger();
    printf("Dwse thn timh tou n: ");
    N = GetInteger();
    Read_Array(M, N, array);
    Find_Min_of_Rows(M, N, array, arr);
    Print_Min_Array(M, arr);
    return 0;
}

void Read_Array(int M, int N, long table[50][50]){
    int i, j;
    for (i=0; i<M; i++)
        {
            for (j=0; j<N; j++)
                {
                    table[i][j] = GetLong();
                }
        }
}

void Find_Min_of_Rows(int M, int N, long table[50][50], long B[50]){
    int i, j;
    for (i=0; i<M; i++)
        {
            B[i] = 0;
        }
    for (i=0; i<M; i++)
        {
            for (j=0; j<N; j++)
                {
                    B[i] = B[i] + table[i][j];
                }
        }
}

void Print_Min_Array(int M, long B[50]){
    int i;
    for (i=0; i<M; i++)
        {
            printf("%ld\n", B[i]);
        }
}
