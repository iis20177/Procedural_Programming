#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int total(int n);

int main(){
    int n, result;
    n=100;
    result = total(n);
    printf("Athr 1 ... 100 = %d\n", result);
    n=1000;
    result = total(n);
    printf("Athr 1 ... 1000 = %d\n", result);
    return 0;
}

int total(int n){
    int sum=0, i;
    for (i=1;i<=n;i++)
        {
            sum+=i;
        }
    return sum;
}
