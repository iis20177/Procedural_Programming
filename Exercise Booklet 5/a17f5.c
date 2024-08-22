#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int i, j, subject[10][3], sum[10], meanscore[10], good = 0, bad = 0;
    float percentageB, percentageG;
    for (i=0; i<10; i++)
        {
            sum[i] = 0;
            meanscore[i] = 0;
        }
    for (i=0; i<10; i++)
        {
            printf("Mathitis %d\n", i+1);
            printf("--------------\n");
            for (j=0; j<3; j++)
                {
                    printf("Mathima %d:", j+1);
                    subject[i][j] = GetInteger();
                    sum[i] = sum[i] + subject[i][j];
                }
            meanscore[i] = sum[i]/3;
            if (meanscore[i] >= 18.5)
                {
                    good++;
                }
            else if (meanscore[i] < 9.5)
                {
                    bad++;
                }
        }
    percentageB = bad*10;
    percentageG = good*10;
    printf("Plithos apotyxonton: %d %.2f%%\n", bad, percentageB);
    printf("Plithos aristoyxon: %d %.2f%%\n", good, percentageG);
    return 0;
}
