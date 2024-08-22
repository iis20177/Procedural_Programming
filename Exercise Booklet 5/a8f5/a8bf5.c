#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void Read_Array(int M, int N, long array[250]);
void Create_Array(int M, int N, long array[250], long table[50][50]);
void Print_Array(int M, int N, long table[50][50]);

int main(){
    int M, N;
    long B[250], A[50][50];
    printf("Dwse to plhthos twn grammwn: ");
    M = GetInteger();
    printf("Dwse to plhthos twn sthlwn: ");
    N = GetInteger();
    Read_Array(M, N, B);
    Create_Array(M, N, B, A);
    Print_Array(M, N, A);
    return 0;
}

void Read_Array(int M, int N, long array[250]){
    int i;
    for (i=0; i<M*N; i++)
        {
            array[i] = GetLong();
        }
}

void Create_Array(int M, int N, long array[250], long table[50][50]){
    int i, j, k = 0;
    for (i=0; i<M; i++)
        {
            for (j=0; j<N; j++)
                {
                    table[i][j] = 0;
                }
        }
    for (i=0; i<M; i++)
        {
            for (j=0; j<N; j++)
                {
                    table[i][j] = array[k];
                    k++;
                }
        }
}

void Print_Array(int M, int N, long table[50][50]){
    int i, j;
    for (i=0; i<M; i++)
        {
            for (j=0; j<N; j++)
                {
                    printf("%ld ", table[i][j]);
                }
            printf("\n");
        }
}

