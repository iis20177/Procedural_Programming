#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define TRUE 1

int Function_GCD(int a, int b);
bool Function_COPRIME(int k, int i);
int Function_PHI(int i);

int main(){
    int x, i;
    printf("Enter x:");
    x = GetInteger();
    for(i=1; i<=x; i++)
        {
            printf("phi(%d) = %d\n", i, Function_PHI(i));
        }
    return 0;
}

int Function_GCD(int a, int b){
    if (b == 0)
        {
            return a;
        }
    return Function_GCD(b, a%b);
}

bool Function_COPRIME(int k, int i){
    if (Function_GCD(k, i) == 1)
        {
            return TRUE;
        }
}

int Function_PHI(int i){
    int k, counter = 1;
    for (k=2; k<i; k++)
        {
           if (Function_COPRIME(k, i) == TRUE)
                {
                    counter++;
                }
        }
    return counter;
}
