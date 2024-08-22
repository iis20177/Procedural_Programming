#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define numbers 5

int main(){
    int Read[numbers];
    int i, temp;
    for (i=0; i<numbers; i++)
        {
            printf("Enter number: ");
            Read[i] = GetInteger();
        }
    temp = Read[numbers-1];
    for (i=numbers-1; i>0; i--)
        {
            Read[i] = Read[i-1];
        }
    Read[0] = temp;
    for (i=0; i<numbers; i++)
        printf("%d ", Read[i]);
    return 0;
}
