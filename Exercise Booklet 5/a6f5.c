#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    long A, B, square[4][4], sum, sum1 = 0, sum2 = 0;
    int i, j;
    printf("Dwse thn timh tou a:");
    A = GetLong();
    printf("Dwse thn timh tou b:");
    B = GetLong();
    square[0][0] = A;
    square[0][1] = A+14;
    square[0][2] = B;
    square[0][3] = A+3;
    square[1][0] = B-2;
    square[1][1] = A+5;
    square[1][2] = A+6;
    square[1][3] = A+8;
    square[2][0] = A+7;
    square[2][1] = B-4;
    square[2][2] = A+10;
    square[2][3] = A+4;
    square[3][0] = A+12;
    square[3][1] = A+2;
    square[3][2] = A+1;
    square[3][3] = B+2;
    for (i=0; i<4; i++)
        {
            sum = 0;
            for (j=0; j<4; j++)
                {
                    printf("%ld ", square[i][j]);
                    sum = sum + square[i][j];
                }
            printf("| %ld\n", sum);
        }
    printf("------------\n");
    for (j=0; j<4; j++)
        {
            sum = 0;
            for (i=0; i<4; i++)
                {
                    sum = sum + square[i][j];
                }
            printf("%ld ");
        }
    for (i=0; i<4; i++)
        {
            for (j=0; j<4; j++)
                {
                    if (i==j)
                        {
                            sum1 = sum1 + square[i][j];
                        }
                    if (i+j == 3)
                        {
                            sum2 = sum2 + square[i][j];
                        }
                }
        }
    printf("\n%ld, %ld\n", sum1, sum2);
    if (sum1 == sum2)
        {
            printf("MAGIC\n");
        }
    else
        {
            printf("NOT MAGIC\n");
        }
    return 0;
}
