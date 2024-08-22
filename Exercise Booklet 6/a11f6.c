#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void read_temperatures(int array[]);
void find_max_min_average(int array[], int *max, int *min, float *meanscore);

int main(){
    int array[30], max, min;
    float meanscore;
    read_temperatures(array);
    find_max_min_average(array, &max, &min, &meanscore);
    printf("H megisti thermokrasia einai %d\n", max);
    printf("H elaxisti thermokrasia einai %d\n", min);
    printf("O mesos oros einai %.2f\n", meanscore);
    system("pause");
    return 0;
}

void read_temperatures(int array[]){
    int i;
    printf("Dwse tis thermokrasies toy mina\n");
    for (i=0; i<30; i++)
        {
            printf("Dwse ti thermokrasia %d: ", i);
            array[i] = GetInteger();
        }
}

void find_max_min_average(int array[], int *max, int *min, float *meanscore){
    int i;
    float sum = 0;
    *max = array[0];
    for (i=1; i<30; i++)
        {
            if (*max < array[i])
                {
                    *max = array[i];
                }
        }
    *min = array[0];
    for (i=1; i<30; i++)
        {
            if (*min > array[i])
                {
                    *min = array[i];
                }
        }
    for (i=0; i<30; i++)
        {
            sum = sum + array[i];
        }
    *meanscore = sum/30;
}
