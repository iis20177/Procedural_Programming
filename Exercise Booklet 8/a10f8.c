#include <stdio.h>
#include <string.h>
#include "genlib.h"
#include "simpio.h"

typedef struct{
        char name[60];
        int start, duration;
} workpackagesT;

void ReadWorkpackages(int limit, workpackagesT workpack[]);
workpackagesT FindFirstWp(int limit, workpackagesT workpack[]);
void FindMakespan(int limit, workpackagesT workpack[]);

int main(){
    int number, j;
    printf("Total work packages: ");
    number = GetInteger();
    workpackagesT workpackages[100];
    workpackagesT wpmin;
    ReadWorkpackages(number, workpackages);
    wpmin = FindFirstWp(number, workpackages);
    printf("FIRST WP: %s start: %d duration: %d\n", wpmin.name, wpmin.start, wpmin.duration);
    FindMakespan(number, workpackages);
    return 0;
}

void ReadWorkpackages(int limit, workpackagesT workpack[]){
    int i;
    for (i=0; i<limit; i++)
        {
            printf("WP Name:");
            gets((workpack[i]).name);
            printf("WP Start Month:");
            workpack[i].start = GetInteger();
            printf("WP Duration:");
            workpack[i].duration = GetInteger();
        }
}

workpackagesT FindFirstWp(int limit, workpackagesT workpack[]){
    int i, minS;
    workpackagesT min;
    minS = workpack[0].start;
    min = workpack[0];
    for (i=1; i<limit; i++)
        {
            if (minS > workpack[i].start)
                {
                    minS = workpack[i].start;
                    min = workpack[i];
                }
        }
    return (min);
}

void FindMakespan(int limit, workpackagesT workpack[]){
    int i, sum[limit], max, pos;
    for (i=0; i<limit; i++)
        {
            sum[i] = 0;
        }
    for (i=0; i<limit; i++)
        {
            sum[i] = workpack[i].start + workpack[i].duration;
        }
    max = sum[0];
    pos = 0;
    for (i=1; i<limit; i++)
        {
            if (max < sum[i])
                {
                    max = sum[i];
                    pos = i;
                }
        }
    printf("Total duration = %d", sum[pos]);
}
