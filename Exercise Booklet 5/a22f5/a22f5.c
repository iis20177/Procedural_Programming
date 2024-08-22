#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define d 16

long long GetLongLong(void);

int main(){
    long long N, digits[d], calc, sum=0, sumin=0, sumout=0, totalsum, SUM;
    int i, count=1, mod10, div10, temp;
    printf("Insert card number:");
    N = GetLongLong();
    calc=N;
    while (calc/10!=0)
        {
            calc/=10;
            count++;
        }
    calc=N;
    for (i=0; i<count; i++)
        {
            digits[i] = calc%10;
            calc = calc/10;
        }
    for (i=0; i<d/2; i++)
        {
            temp = digits[i];
            digits[i] = digits[d-i-1];
            digits[d-i-1] = temp;
        }
    if (digits[0]<4 || digits[0]>7)
        printf("%lld is invalid.", N);
    else if (count!=16)
        printf("%lld is invalid.", N);
    else
        {
            for (i=0; i<d; i+=2)
                {
                    digits[i]*=2;
                    if (digits[i]>=10)
                        {
                            mod10 = digits[i]%10;
                            div10 = digits[i]/10;
                            digits[i] = mod10+div10;
                            sumin+=digits[i];                        }
                    else
                        {
                            sumout+=digits[i];                        }
                }
            totalsum = sumin+sumout;
            for (i=1;i<d;i+=2)
                {
                    sum+=digits[i];
                }
            SUM = totalsum+sum;
            if (SUM%10==0)
                printf("%lld is VALID.", N);
            else
                printf("%lld is invalid.", N);
        }
    return 0;
}

long long GetLongLong(void)
{
    string line;
    long long value;
    char termch;

    while (TRUE) {
        line = GetLine();
        switch (sscanf(line, " %lld %c", &value, &termch)) {
          case 1:
            FreeBlock(line);
            return (value);
          case 2:
            printf("Unexpected character: '%c'\n", termch);
            break;
          default:
            printf("Please enter an integer\n");
            break;
        }
        FreeBlock(line);
        printf("Retry: ");
    }
}
