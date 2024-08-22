#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int N, i;
    long amount[50], rest, paper10000, paper5000, paper1000, paper500, paper200, paper100, paper50, paper20, paper10, paper5, coin;
    long sum = 0, sum10000 = 0, sum5000 = 0, sum1000 = 0, sum500 = 0, sum200 = 0, sum100 = 0, sum50 = 0, sum20 = 0, sum10 = 0, sum5 = 0, sumcoin = 0;
    printf("Give the number of people: ");
    do
        {
            if (N>50)
                {
                    printf("Try again (accepting numbers from 0 to 50 only): ");
                }
            N = GetInteger();
        }
    while (N>50);
    for (i=0; i<N; i++)
        {
            printf("Give amount: ");
            amount[i] = GetLong();
        }
    printf("A/A       POSO  10000   5000   1000    500    200    100     50     20     10      5      1\n");
    for (i=0; i<N; i++)
        {
            printf("%3d%11ld", i, amount[i]);
            paper10000 = amount[i]/10000;
            rest = amount[i]%10000;
            paper5000 = rest/5000;
            rest = rest%5000;
            paper1000 = rest/1000;
            rest = rest%1000;
            paper500 = rest/500;
            rest = rest%500;
            paper200 = rest/200;
            rest = rest%200;
            paper100 = rest/100;
            rest = rest%100;
            paper50 = rest/50;
            rest = rest%50;
            paper20 = rest/20;
            rest = rest%20;
            paper10 = rest/10;
            rest = rest%10;
            paper5 = rest/5;
            coin = rest%5;
            printf("%7ld%7ld%7ld%7ld%7ld%7ld%7ld%7ld%7ld%7ld%7ld\n", paper10000, paper5000, paper1000, paper500, paper200, paper100, paper50, paper20, paper10, paper5, coin);
            sum = sum + amount[i];
            sum10000 = sum10000 + paper10000;
            sum5000 = sum5000 + paper5000;
            sum1000 = sum1000 + paper1000;
            sum500 = sum500 + paper500;
            sum200 = sum200 + paper200;
            sum100 = sum100 + paper100;
            sum50 = sum50 + paper50;
            sum20 = sum20 + paper20;
            sum10 = sum10 + paper10;
            sum5 = sum5 + paper5;
            sumcoin = sumcoin + coin;
        }
    printf("SYN%11ld%7ld%7ld%7ld%7ld%7ld%7ld%7ld%7ld%7ld%7ld%7ld\n", sum, sum10000, sum5000, sum1000, sum500, sum200, sum100, sum50, sum20, sum10, sum5, sumcoin);
    return 0;
}
