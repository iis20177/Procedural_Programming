#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int array[4][5], i, j, sum;
    long table[4][5], eispraksh[4];
    double promhtheia;
    array[0][0] = 10;
    array[1][0] = 7;
    array[2][0] = 4;
    array[3][0] = 3;
    array[0][1] = 4;
    array[1][1] = 0;
    array[2][1] = 9;
    array[3][1] = 2;
    array[0][2] = 5;
    array[1][2] = 12;
    array[2][2] = 5;
    array[3][2] = 1;
    array[0][3] = 6;
    array[1][3] = 1;
    array[2][3] = 0;
    array[3][3] = 5;
    array[0][4] = 7;
    array[1][4] = 3;
    array[2][4] = 8;
    array[3][4] = 6;
    for (i=0; i<4; i++)
        {
            table[i][0] = array[i][0] * 25000;
        }
    for (i=0; i<4; i++)
        {
            table[i][1] = array[i][1] * 15000;
        }
    for (i=0; i<4; i++)
        {
            table[i][2] = array[i][2] * 32000;
        }
    for (i=0; i<4; i++)
        {
            table[i][3] = array[i][3] * 21000;
        }
    for (i=0; i<4; i++)
        {
            table[i][4] = array[i][4] * 9200;
        }
    printf("Synoliko Poso Eispraksis / Pwlhth:");
    for (i=0; i<4; i++)
        {
            eispraksh[i] = 0;
            for (j=0; j<5; j++)
                {
                    eispraksh[i] = eispraksh[i] + table[i][j];
                }
            printf(" %ld", eispraksh[i]);
        }
    printf("\nPromitheia / Pwlhth:");
    for (i=0; i<4; i++)
        {
            promhtheia = 0;
            for (j=0; j<5; j++)
                {
                    promhtheia = eispraksh[i]*10/100;
                }
            printf(" %.2f", promhtheia);
        }
    printf("\nPosothtes Proiontwn:");
    for (j=0; j<5; j++)
        {
            sum = 0;
            for (i=0; i<4; i++)
                {
                    sum = sum + array[i][j];
                }
            printf(" %d", sum);
        }
    return 0;
}
