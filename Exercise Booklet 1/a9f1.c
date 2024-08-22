#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main ()
{
    double rate, amount, discount;
    long purchaseAmount;
    printf("Dwse thn axia tou emporeumatos: ");
    purchaseAmount = GetInteger();
    printf("Dwse to pososto ekptwshs: ");
    rate = GetReal();
    discount = purchaseAmount * rate;
    amount = purchaseAmount - discount;
    printf("To poso plhrwmhs einai %g\n", amount);
    printf("H ekptwsh einai %g", discount);
    return 0;
}
