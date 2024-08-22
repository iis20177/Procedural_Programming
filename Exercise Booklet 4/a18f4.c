#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void f1(int i);
void f2(int n);

int main(){
    int n=10, i=0;
    f1(i);
    printf("----------------------\n");
    f2(n);
    return 0;
}

void f1(int i){
    for (i;i<10;i++)
        {
            printf("katanoiste ti glossa C\n");
        }
}

void f2(int n){
    int i;
    for (i=0;i<n;i++)
        {
            printf("katanoiste ti glossa C\n");
        }
}
