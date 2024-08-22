#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define row 10

void ReadArray(int array[row][20]);
void FindMin(int array[row][20], int *min, int *posi, int *posj);

int main(){
    int array[row][20], minimum, positioni, positionj;
    ReadArray(array);
    FindMin(array, &minimum, &positioni, &positionj);
    printf("min: %d, position of i: %d, position of j: %d\n", minimum, positioni, positionj);
    system("pause");
    return 0;
}

void ReadArray(int array[row][20]){
    int i, j;
    for (i=0; i<10; i++)
        {
            for (j=0; j<20; j++)
                {
                    printf("Enter an integer: ");
                    array[i][j] = GetInteger();
                }
        }
}

void FindMin(int array[row][20], int *min, int *posi, int *posj){
    int i, j;
    *min = 100;
    for (i=0; i<10; i++)
        {
            for (j=0; j<20; j++)
                {
                    if (*min > array[i][j])
                        {
                            *min = array[i][j];
                            *posi = i;
                            *posj = j;
                        }
                }
        }
}
