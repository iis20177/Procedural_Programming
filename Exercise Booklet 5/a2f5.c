#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int i;
    long income, tax, levy;
    income = GetLong();
    printf("%ld Euro\n", income);
    if (income>0 && income<=10000)
        {
            tax = income * 0/100;
        }
    else if (income>10000 && income<=39000)
        {
            tax = 10000 * 0/100;
            printf("%ld Euro\n", tax);
            levy = (income-10000) * 18/100;
            printf("%ld Euro\n", levy);
            tax = tax + levy;
        }
    else if (income>39000 && income<=49000)
        {
            tax = 10000 * 0/100 + 29000 * 18/100;
            printf("%ld Euro\n", tax);
            levy = (income-39000) * 21/100;
            printf("%ld Euro\n", levy);
            tax = tax + levy;
        }
    else if (income>49000 && income<=59000)
        {
            tax = 10000 * 0/100 + 29000 * 18/100 + 10000 * 21/100;
            printf("%ld Euro\n", tax);
            levy = (income-49000) * 24/100;
            printf("%ld Euro\n", levy);
            tax = tax + levy;
        }
    else if (income>59000 && income<=85000)
        {
            tax = 10000 * 0/100 + 29000 * 18/100 + 10000 * 21/100 + 10000 * 24/100;
            printf("%ld Euro\n", tax);
            levy = (income-59000) * 28/100;
            printf("%ld Euro\n", levy);
            tax = tax + levy;
        }
    else if (income>85000 && income<=100000)
        {
            tax = 10000 * 0/100 + 29000 * 18/100 + 10000 * 21/100 + 10000 * 24/100 + 26000 * 28/100;
            printf("%ld Euro\n", tax);
            levy = (income-85000) * 33/100;
            printf("%ld Euro\n", levy);
            tax = tax + levy;
        }
    else if (income>100000 && income<=120000)
        {
            tax = 10000 * 0/100 + 29000 * 18/100 + 10000 * 21/100 + 10000 * 24/100 + 26000 * 28/100 + 15000 * 33/100;
            printf("%ld Euro\n", tax);
            levy = (income-100000) * 38/100;
            printf("%ld Euro\n", levy);
            tax = tax + levy;
        }
    else if (income>120000 && income<=150000)
        {
            tax = 10000 * 0/100 + 29000 * 18/100 + 10000 * 21/100 + 10000 * 24/100 + 26000 * 28/100 + 15000 * 33/100 + 20000 * 38/100;
            printf("%ld Euro\n", tax);
            levy = (income-120000) * 43/100;
            printf("%ld Euro\n", levy);
            tax = tax + levy;
        }
    else if (income>150000 && income<=170000)
        {
            tax = 10000 * 0/100 + 29000 * 18/100 + 10000 * 21/100 + 10000 * 24/100 + 26000 * 28/100 + 15000 * 33/100 + 20000 * 38/100 + 30000 * 43/100;
            printf("%ld Euro\n", tax);
            levy = (income-150000) * 49/100;
            printf("%ld Euro\n", levy);
            tax = tax + levy;
        }
    else
        {
            tax = 10000 * 0/100 + 29000 * 18/100 + 10000 * 21/100 + 10000 * 24/100 + 26000 * 28/100 + 15000 * 33/100 + 20000 * 38/100 + 30000 * 43/100 + 20000 * 49/100;
            printf("%ld Euro\n", tax);
            levy = (income-170000) * 50/100;
            printf("%ld Euro\n", levy);
            tax = tax + levy;
        }
    printf("%ld Euro\n", tax);
    return 0;
}
