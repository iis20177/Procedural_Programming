#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void ReadArray(int array[], int freq[]);
void ShowGrade(int array[], int freq[]);
void ShowGradeMax(int freq[], int *max, int *posmax);
void PrintArray(int freq[], int array[], int max, int posmax);

int main(){
    int array[30], freq[30], max, posmax;
    ReadArray(array, freq);
    ShowGrade(array, freq);
    ShowGradeMax(freq, &max, &posmax);
    PrintArray(freq, array, max, posmax);
    return 0;
}

void ReadArray(int array[], int freq[]){
    int i;
    for (i=0; i<30; i++)
        {
            printf("Give integer: ");
            array[i] = GetInteger();
            freq[i] = -1;
        }
}

void ShowGrade(int array[], int freq[]){
    int i, j, count;
    for (i=0; i<30; i++)
        {
            count = 1;
            for (j=i+1; j<30; j++)
                {
                    if (array[i] == array[j])
                        {
                            count++;
                            freq[j] = 0;
                        }
                }
            if (freq[i] != 0)
                {
                    freq[i] = count;
                }
        }
}

void ShowGradeMax(int freq[], int *max, int *posmax){
    int i;
    *max = freq[0];
    for (i=1; i<30; i++)
        {
            if (*max < freq[i])
                {
                    *max = freq[i];
                    *posmax = i;
                }
        }
}

void PrintArray(int freq[], int array[], int max, int posmax){
    int i;
    for (i=0; i<30; i++)
        {
            if (freq[i] != 0)
                {
                    printf("%d occurs %d times\n", array[i], freq[i]);
                }
        }
    printf("Max frequency: %d, %d times\n", max, array[posmax]);
}
