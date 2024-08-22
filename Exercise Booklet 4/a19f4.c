#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <math.h>

double JohnWallis(int x);

int main(){
    int x;
    double PI;
    x = GetInteger();
    if (x%2==0)
        {
           PI = JohnWallis(x);
           printf("pi=%f", PI*2);
        }
    return 0;
}

double JohnWallis(int x){
    double sum=1, i;
    for(i=2;i<=x;i+=2)
        {
            sum*=(pow(i,2)/((i-1)*(i+1)));
        }
    return sum;
}
