#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void ReadData(int r, int c, double pin[r][c]);
double findMax(int r, int c, double pin[r][c]);

int main(){
    double array[100][100], maximum;
    int rows, columns;
    printf("Give measurements of array\n");
    printf("Rows: ");
    rows = GetInteger();
    printf("Columns: ");
    columns = GetInteger();
    ReadData(rows, columns, array);
    maximum = findMax(rows, columns, array);
    printf("Max number: %g\n", maximum);
    return 0;
}

void ReadData(int r, int c, double pin[r][c]){
    int i, j;
    for (i=0; i<r; i++)
        {
            for (j=0; j<c; j++)
                {
                    printf("Give number: ");
                    pin[i][j] = GetReal();
                }
        }
}

double findMax(int r, int c, double pin[r][c]){
    int i, j;
    double max = 0;
    for (i=0; i<r; i++)
        {
            for (j=0; j<c; j++)
                {
                    if (max < pin[i][j])
                        {
                            max = pin[i][j];
                        }
                }
        }
    return max;
}
