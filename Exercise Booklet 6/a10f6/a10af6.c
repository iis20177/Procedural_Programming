#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void ReadData(int r, int c, double pin[r][c]);
double findMax(int r, int c, double pin[r][c]);

int main(){
    double grades[21][15], maxgrade;
    int classes, students;
    printf("Classes: ");
    classes = GetInteger();
    printf("Students: ");
    students = GetInteger();
    ReadData(classes, students, grades);
    maxgrade = findMax(classes, students, grades);
    printf("Max number: %g\n", maxgrade);
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
