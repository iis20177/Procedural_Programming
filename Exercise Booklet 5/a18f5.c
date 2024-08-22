#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int month(int number, int size, int array[]);
int findmax(int size, int array[]);

int main(){
    int j, k, temp, January[31], February[29], March[31], April[30], May[31], June[30], July[31], August[31], September[30], October[31], November[30], December[31], max[12];
    printf("Minas 1\n---------------\n");
    January[31] = month(1, 31, January);
    printf("Minas 2\n---------------\n");
    February[29] = month(2, 29, February);
    printf("Minas 3\n---------------\n");
    March[31] = month(3, 31, March);
    printf("Minas 4\n---------------\n");
    April[30] = month(4, 30, April);
    printf("Minas 5\n---------------\n");
    May[31] = month(5, 31, May);
    printf("Minas 6\n---------------\n");
    June[30] = month(6, 30, June);
    printf("Minas 7\n---------------\n");
    July[31] = month(7, 31, July);
    printf("Minas 8\n---------------\n");
    August[31] = month(8, 31, August);
    printf("Minas 9\n---------------\n");
    September[30] = month(9, 30, September);
    printf("Minas 10\n---------------\n");
    October[31] = month(10, 31, October);
    printf("Minas 11\n---------------\n");
    November[30] = month(11, 30, November);
    printf("Minas 12\n---------------\n");
    December[31] = month(12, 31, December);
    max[0] = findmax(31, January);
    max[1] = findmax(29, February);
    max[2] = findmax(31, March);
    max[3] = findmax(30, April);
    max[4] = findmax(31, May);
    max[5] = findmax(30, June);
    max[6] = findmax(31, July);
    max[7] = findmax(31, August);
    max[8] = findmax(30, September);
    max[9] = findmax(31, October);
    max[10] = findmax(30, November);
    max[11] = findmax(31, December);
    for (j=0; j<12; j++)
        {
            for (k=0; k<12; k++)
                {
                    if (max[k] > max[j])
                        {
                            temp = max[j];
                            max[j] = max[k];
                            max[k] = temp;
                        }
                }

        }
    printf("Hmeres me ti megalyteri xreosi:%d", max[11]);
    return 0;
}

int month(int number, int size, int array[]){
    int i;
    for (i=0; i<size; i++)
        {
            printf("Xreosi %d/%d:", i+1, number);
            array[i] = GetInteger();
        }
    return array;
}

int findmax(int size, int array[]){
    int i, maximum;
    maximum = array[0];
    for (i=1; i<size; i++)
        {
            if (maximum < array[i])
                {
                    maximum = array[i];
                }
        }
    return maximum;
}
