#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int code, gender, weight, height, age, N, i, maxage = 0, maxcode, maxweight, maxheight;
    printf("N: ");
    N = GetInteger();
    for (i=1; i<=N; i++)
        {
            printf("Give code: ");
            code = GetInteger();
            printf("Give gender(0 for male, 1 for female): ");
            gender = GetInteger();
            printf("Give weight: ");
            weight = GetInteger();
            printf("Give height: ");
            height = GetInteger();
            printf("Give age: ");
            age = GetInteger();
                if (gender == 0 && maxage < age)
                    {
                        maxage = age;
                        maxcode = code;
                        maxweight = weight;
                        maxheight = height;
                    }
        }
    printf("%d_%d_%d_%d_%d", maxcode, gender, maxweight, maxheight, maxage);
    return 0;
}
