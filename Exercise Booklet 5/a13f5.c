#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <stdlib.h>

#define ROW 10
#define COL 10

void populate_data(int R, int C, int matrix[ROW][COL]);
void print_array(int R, int C, int matrix[ROW][COL]);
void change_array(int R, int C, int matrix[ROW][COL]);

int main(){
    int R, C, A[ROW][COL];
    printf("Dwse ton arithmo twn grammwn: ");
    R = GetInteger();
    printf("Dwse ton arithmo twn sthlwn: ");
    C = GetInteger();
    populate_data(R, C, A);
    printf("ARXIKOS PINAKAS\n");
    print_array(R, C, A);
    change_array(R, C, A);
    printf("ALLAGMENOS PINAKAS\n");
    print_array(R, C, A);
    return 0;
}

void populate_data(int R, int C, int matrix[ROW][COL]){
    int i, j;
    for (i=0;i<R;i++)
        for (j=0;j<C;j++)
            matrix[i][j]= rand()%100;
}

void print_array(int R, int C, int matrix[ROW][COL]){
    int i, j;
    for (i=0;i<R;i++)
        {
            for (j=0;j<C;j++)
                {
                    printf("%d ", matrix[i][j]);
                }
            printf("\n");
        }
}

void change_array(int R, int C, int matrix[ROW][COL]){
    int i, j, max, jmax;
    for (i=0;i<R;i++)
        {
            max=matrix[i][0];
            for (j=0;j<C;j++)
                {
                    if (matrix[i][j]>max)
                        {
                            max=matrix[i][j];
                            jmax=j;
                        }
                }
            for (j=0; j<jmax; j++)
                {
                    matrix[i][j]=max;
                }
        }
}
