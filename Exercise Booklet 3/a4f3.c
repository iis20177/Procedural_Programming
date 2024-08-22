#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <math.h>

main(){
    int code, people;
    long total, outcome, sum = 0;
    printf("Dwse ton kwdiko: ");
    code = GetInteger();
    while (code != 1 && code != 2)
        {
            printf("Lathos kwdikos.\n");
            printf("Dwse ton kwdiko: ");
            code = GetInteger();
        }
    while (code==1)
        {
            printf("Dwse ton arithmo twn atomwn: ");
            people = GetInteger();
            if (people <= 10)
                {
                    total = people * 350;
                }
            else
                {
                    total = ceil(people * 350 - (people * 0.1 * 350));
                }
            sum += total;
            printf("Kostos krathshs: %ld\n", total);
            printf("Dwse ton kwdiko: ");
            code = GetInteger();
            while (code != 1 && code != 2)
                {
                    printf("Lathos kwdikos.\n");
                    printf("Dwse ton kwdiko: ");
                    code = GetInteger();
                }
        }
    if (code==2)
        {
            outcome = sum - 20000;
            printf("Kerdos h zhmia (-) gia to taxidi: %ld", outcome);
        }
    return 0;
}
