#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define row 5

void ReadArray(int array[row][3]);
void AVGroom(int array[row][3], int room[]);
void AVGmonth(int array[row][3], int month[]);
void FindMin(int array[row][3], int *min, int *posi, int *posj);
void Print(int room[], int month[], int min, int posi, int posj);

int main(){
    int array[5][3], room[5], month[3], min, posi, posj;
    ReadArray(array);
    AVGroom(array, room);
    AVGmonth(array, month);
    FindMin(array, &min, &posi, &posj);
    Print(room, month, min, posi, posj);
    return 0;
}

void ReadArray(int array[row][3]){
    int i, j;
    for (i=0; i<row; i++)
        {
            for (j=0; j<3; j++)
                {
                    printf("Enter an integer: ");
                    array[i][j] = GetInteger();
                }
        }
}

void AVGroom(int array[row][3], int room[]){
    int i, j, sumr;
    for (i=0; i<row; i++)
        {
            room[i] = 0;
        }
    for (i=0; i<row; i++)
        {
            sumr = 0;
            for (j=0; j<3; j++)
                {
                    sumr = sumr + array[i][j];
                }
            room[i] = sumr/3;
        }
}

void AVGmonth(int array[row][3], int month[]){
    int i, j, summ;
    for (j=0; j<3; j++)
        {
            month[j] = 0;
        }
    for (j=0; j<3; j++)
        {
            summ = 0;
            for (i=0; i<row; i++)
                {
                    summ = summ + array[i][j];
                }
            month[j] = summ/5;
        }
}

void FindMin(int array[row][3], int *min, int *posi, int *posj){
    int i, j;
    *min = 100;
    for (i=0; i<row; i++)
        {
            for (j=0; j<3; j++)
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

void Print(int room[], int month[], int min, int posi, int posj){
    int i, j;
    for (i=0; i<row; i++)
        {
            printf("avg room: %d\n", room[i]);
        }
    for (j=0; j<3; j++)
        {
            printf("avg month: %d\n", month[j]);
        }
    printf("min: %d\nposi: %d\nposj: %d\n", min, posi, posj);
}
