#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define N 5

void readData(long array[N][4]);
void FindMean(int index, long array[N][4], float *ms0, float *ms1);

int main(){
    long data[N][4];
    float meanscore0, meanscore1;
    readData(data);
    FindMean(1, data, &meanscore0, &meanscore1);
    printf("Mesos oros barous andrwn: %.1lf\n", meanscore0);
    printf("Mesos oros barous gynaikwn: %.1lf\n\n", meanscore1);
    FindMean(2, data, &meanscore0, &meanscore1);
    printf("Mesos oros ypsous andrwn: %.1lf\n", meanscore0);
    printf("Mesos oros ypsous gynaikwn: %.1lf\n\n", meanscore1);
    FindMean(3, data, &meanscore0, &meanscore1);
    printf("Mesos oros hlikias andrwn: %.1lf\n", meanscore0);
    printf("Mesos oros hlikias gynaikwn: %.1lf\n\n", meanscore1);
    system("PAUSE");
    return 0;
}

void readData(long array[N][4]){
    int i;
    for (i=0; i<N; i++)
        {
            printf("Dwse fylo: ");
            array[i][0] = GetLong();
            printf("Dwse baros: ");
            array[i][1] = GetLong();
            printf("Dwse ypsos: ");
            array[i][2] = GetLong();
            printf("Dwse ilikia: ");
            array[i][3] = GetLong();
            printf("-----\n");
        }
}

void FindMean(int index, long array[N][4], float *ms0, float *ms1){
    int i, males=0, females=0;
    float sum0=0, sum1=0;
    for (i=0; i<N; i++)
        {
            if (array[i][0] == 0)
                {
                    males++;
                    sum0 = sum0 + array[i][index];
                }
            else
                {
                    females++;
                    sum1 = sum1 + array[i][index];
                }
        }
    *ms0 = sum0/males;
    *ms1 = sum1/females;
}
