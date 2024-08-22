#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    long A[100][100], sum1 = 0, sum2 = 0;
    int M, N, i, j, sum;
    printf("Dwse ton arithmo twn grammwn: ");
    M = GetInteger();
    printf("Dwse ton arithmo twn sthlwn: ");
    N = GetInteger();
    for (i=0; i<M; i++)
        {
            for (j=0; j<N; j++)
                {
                    printf("Thesi [%d,%d]:", i, j);
                    A[i][j] = GetLong();
                }
        }
    printf("Table:\n");
    for (i=0; i<M; i++)
        {
            sum = 0;
            for (j=0; j<N; j++)
                {
                    printf("%4ld", A[i][j]);
                    sum = sum + A[i][j];
                }
            printf(" | = %ld\n", sum);
        }
    printf("------------\n");
    for (j=0; j<N; j++)
        {
            sum = 0;
            for (i=0; i<M; i++)
                {
                    sum = sum + A[i][j];
                }
            printf("%4d", sum);
        }
    if (M == N)
        {
            for (i=0; i<M; i++)
                {
                    for (j=0; j<N; j++)
                        {
                            if (i == j)
                                {
                                    sum1 = sum1 + A[i][j];
                                }
                            if (i+j == M-1)
                                {
                                    sum2 = sum2 + A[i][j];
                                }
                        }
                }
            printf("\nSum Diag 1: %ld,  Diag 2: %ld\n", sum1, sum2);
        }
    return 0;
}




