#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void Read_Array(int M, int N, long table[50][50]);
void Create_Array(int M, int N, long table[50][50], long array[250]);
void Print_Array(int M, int N, long array[250]);

int main(){
    int M, N;
    long A[50][50], B[250];
    printf("Dwse to plhthos twn grammwn: ");
    M = GetInteger();
    printf("Dwse to plhthos twn sthlwn: ");
    N = GetInteger();
    Read_Array(M, N, A);
    Create_Array(M, N, A, B);
    Print_Array(M, N, B);
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

void Create_Array(int M, int N, long table[50][50], long array[250]){
    int i, j, k = 0;
    for (i=0; i<M; i++)
        {
            array[i] = 0;
        }
    for (i=0; i<M; i++)
        {
            for (j=0; j<N; j++)
                {
                    array[k] = table[i][j];
                    k++;
                }
        }
}

void Print_Array(int M, int N, long array[250]){
    int i;
    for (i=0; i<M*N; i++)
        {
            printf("%ld ", array[i]);
        }
}

