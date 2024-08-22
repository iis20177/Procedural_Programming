#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int number, i;
    printf("Enter number: ");
    number = GetInteger();
    if (number%2==0)
        {
            i=0;
            while (i<=number)
            {
                printf("%d ", i);
                i=i+2;
            }

        }
    else
        {
            for (i=1; i<=number; i+=2)
            {
                printf("%d ", i);
            }
        }
    return 0;
}
