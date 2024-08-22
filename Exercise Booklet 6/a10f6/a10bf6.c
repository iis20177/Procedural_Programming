#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void ReadData(int r, int c, double pin[r][c]);
double findMax(int r, int c, double pin[r][c]);
void findMaxRowCol(int r, int c, double pin[r][c], double *maximum, int *posi, int *posj);
void findMaxRow(int r, int c, double pin[r][c]);

int main(){
    double grades[21][15], maxgrade, MAX;
    int classes, students, positioni, positionj;
    printf("Classes: ");
    classes = GetInteger();
    printf("Students: ");
    students = GetInteger();
    ReadData(classes, students, grades);
    maxgrade = findMax(classes, students, grades);
    printf("Max number: %g\n", maxgrade);
    findMaxRowCol(classes, students, grades, &MAX, &positioni, &positionj);
    printf("Max grade: %g from classroom %d, student %d\n", MAX, positioni, positionj);
    findMaxRow(classes, students, grades);
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

void findMaxRowCol(int r, int c, double pin[r][c], double *maximum, int *posi, int *posj){
    int i, j;
    *maximum = 0;
    for (i=0; i<r; i++)
        {
            for (j=0; j<c; j++)
                {
                    if (*maximum < pin[i][j])
                        {
                            *maximum = pin[i][j];
                            *posi = i;
                            *posj = j;
                        }
                }
        }
}

void findMaxRow(int r, int c, double pin[r][c]){
    int i, j;
    double maxgr[r];
    for (i=0; i<r; i++)
        {
            maxgr[i] = 0;
            for (j=0; j<c; j++)
                {
                    if (maxgr[i] < pin[i][j])
                        {
                            maxgr[i] = pin[i][j];
                        }
                }
        }
    for (i=0; i<r; i++)
        {
            printf("Classroom %d: maximum grade %g\n", i, maxgr[i]);
        }
}
