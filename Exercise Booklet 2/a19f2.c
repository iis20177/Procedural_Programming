#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    float telh_kykloforias;
    int gram;
    printf("Dwse gram CO2/khm: ");
    gram = GetInteger();
    if (gram >= 0 && gram <= 120)
    {
        telh_kykloforias = gram * 0.9;
    }
    else if (gram >= 121 && gram <= 140)
    {
        telh_kykloforias = gram * 1.1;
    }
    else
    {
        telh_kykloforias = gram * 1.7;
    }
    printf("To poso pliromis einai: %g", telh_kykloforias);
    return 0;
}
