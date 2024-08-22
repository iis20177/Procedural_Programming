#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int max(int a, int b);

int main(){
    int a, b, MAX;
    printf("Dose x: ");
    a = GetInteger();
    printf("Dose y: ");
    b = GetInteger();
    MAX = max(a,b);
    printf("Max: %d", MAX);
    return 0;
}

int max(int a, int b){
    if (a>b)
        return a;
    return b;
}
