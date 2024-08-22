#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <math.h>

double ceil_dec(double number, int places);

int main(){
    double number;
    int places, i;
    number = GetReal();
    places = GetInteger();
    for (i=0;i<=places;i++)
        {
            number*=10;
        }
    number = ceil_dec(number, places);
    for (i=0;i<=places;i++)
        {
            number/=10;
        }
    printf("%.*f", places, number);
    return 0;
}

double ceil_dec(double number, int places){
    double n;
    n = ceil(number);
    return n;
}
