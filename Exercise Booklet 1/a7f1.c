#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()
{
    long eispraxeis004, eispraxeis008, eispraxeis018;
    double total;
    printf("Dwse tis synolikes eispraxeis gia FPA 0.04: ");
    eispraxeis004 = GetInteger();
    printf("Dwse tis synolikes eispraxeis gia FPA 0.08: ");
    eispraxeis008 = GetInteger();
    printf("Dwse tis synolikes eispraxeis gia FPA 0.18: ");
    eispraxeis018 = GetInteger();
    total = (eispraxeis004 * 0.04) + (eispraxeis008 * 0.08) + (eispraxeis018 * 0.18);
    printf("To synoliko poso FPA einai %g \n", total);
    return 0;
}
