#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    double grade, sum=0, average, max1=0, max2=0;
    int i;
    for (i=1; i<=100; i++)
        {
            printf("Dose baumo %d ->", i);
            grade = GetReal();
            sum += grade;
            if (max1<grade)
                {
                    max1=grade;
                }
            if (max2<grade && grade<max1)
                {
                    max2=grade;
                }

        }
    average = sum/100;
    printf("MO= %.2f\n", average);
    printf("MAX1= %.2f\n", max1);
    printf("MAX2= %.2f", max2);
    return 0;
}
