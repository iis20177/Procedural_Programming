#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()
{
    long purchaseAmount;
    int rate;
    double profit, saleAmount;
    printf("Dwse thn katharh axia: ");
    purchaseAmount =  GetLong();
    printf("Dwse to pososto kerdous: ");
    rate = GetInteger();
    profit = purchaseAmount*(rate/100.0) ;
    printf("To kerdos einai %g\n", profit);
    saleAmount = purchaseAmount + profit;
    printf("To synoliko poso einai %g\n", saleAmount);
    return 0;
}
