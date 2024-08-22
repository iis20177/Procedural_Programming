#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

double calc_charge(int hours);

int main(){
    int hours;
    double charge;
    printf("Dose ores paramonis: ");
    hours = GetInteger();
    charge = calc_charge(hours);
    printf("H xreosi einai %g euro", charge);
    return 0;
}

double calc_charge(int hours){
    int i;
    double sum=2;
    for(i=2;i<=hours;i++)
        {
            sum+=0.5;
        }
    return sum;
}
