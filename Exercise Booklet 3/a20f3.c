#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int age, max = 0, min = 100;
    printf("Dwse ilikia: ");
    age = GetInteger();
    while (age != -1)
        {
            if (max < age)
                {
                    max = age;
                }
            if (min > age)
                {
                    min = age;
                }
            printf("Dwse ilikia: ");
            age = GetInteger();
        }
    printf("H megalyteri ilikia einai %d\n", max);
    printf("H mikroteri ilikia einai %d", min);
    return 0;
}
