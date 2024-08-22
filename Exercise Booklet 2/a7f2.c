#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main (){
    long code;
    double salary, weekly_salary, wage;
    int hours;
    printf("Dwse ton kwdiko:");
    code = GetLong();
    if (code >= 1000) {
        printf("Dwse ton ethsio mistho:");
        salary = GetReal();
        weekly_salary = salary/52;
        }
    else
        {
        printf("Dwse tis wres ebdomadiaias ergasias:");
        hours = GetInteger();
        printf("Dwse thn amoibh ana wra:");
        wage = GetReal();
        if (hours > 40) {
            weekly_salary = 40 * wage + (hours - 40) * wage * 1.5;
            }
        else
            {
            weekly_salary = hours * wage;
            }
        }
    printf("H ebdomadiaia amoibh einai %g", weekly_salary);
    return 0;
}
