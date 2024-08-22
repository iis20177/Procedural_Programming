#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int max(int a, int b);
int gr(int a, int b, int c);

int main(){
    int a, b, c, Y;
    printf("Dwse a: ");
    a = GetInteger();
    printf("Dwse b: ");
    b = GetInteger();
    printf("Dwse c: ");
    c = GetInteger();
    Y = (2*max(a,b)+3*gr(a,b,c))/4;
    printf("Y = %d", Y);
    return 0;
}

int max(int a, int b){
    if (a>b)
        return a;
    return b;
}

int gr(int a, int b, int c){
    if (max(a,b)==a)
        {
            if (a>c)
                return a;
            return c;
        }
    else
        {
            if (b>c)
                return b;
            return c;
        }
}
