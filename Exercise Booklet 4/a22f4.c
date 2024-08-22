#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

double ypologismos(double syn_poso, int fpa);

int main(){
    int i, pli8os, fpa;
    double timh, syn_poso, syn_fpa, sum1=0, sum2=0;
    for (i=1;i<=5;i++)
        {
            printf("Dwse to plithos temaxiwn apo to proion %d: ", i);
            pli8os = GetInteger();
            printf("Dwse timi gia to proion %d: ", i);
            timh = GetReal();
            printf("Dwse katigoria FPA gia to proion %d: ", i);
            fpa = GetInteger();
            syn_poso = pli8os*timh;
            syn_fpa = ypologismos(syn_poso, fpa);
            sum1 = sum1 + syn_poso + syn_fpa;
            sum2 = sum2 + syn_fpa;
        }
    printf("Synoliko kostos: %.2f\n", sum1);
    printf("Synoliko fpa: %.2f\n", sum2);
    return 0;
}

double ypologismos(double syn_poso, int fpa){
    if (fpa==1)
        return syn_poso*0.00;
    else if (fpa==2)
        return syn_poso*0.06;
    else if (fpa==3)
        return syn_poso*0.13;
    else if (fpa==4)
        return syn_poso*0.19;
    else
        printf("Lathos kathgoria FPA\n");
        return 0;
}
