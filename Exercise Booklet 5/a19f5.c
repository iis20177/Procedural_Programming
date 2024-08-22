#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int i, j, array[3][4];
    for (i=0; i<3; i++)
        {
            for (j=0; j<4; j++)
                {
                    array[i][j] = i+j;
                    printf("%d ", array[i][j]);
                }
            printf("\n");
        }
    return 0;
}
