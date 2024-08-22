#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int ADD(int x, int y);
int SUB(int x, int y);
int MULT(int x, int y);
int DIVD(int x, int y);

int main(){
    int x,y, add, sub, mult, div, operation1, operation2;
    printf("Dwse ton 1o arithmo: ");
    x = GetInteger();
    printf("Dwse ton 2o arithmo: ");
    y = GetInteger();
    add = ADD(x,y);
    sub = SUB(x,y);
    mult = MULT(x,y);
    div = DIVD(x,y);
    operation1 = MULT(ADD(x,y), SUB(y, DIVD(x,y)));
    operation2 = DIVD(SUB(MULT(x,y), x), ADD(x,y));
    printf("%d\n%d\n%d\n%d\n%d\n%d", add, sub, mult, div, operation1, operation2);
    return 0;
}

int ADD(int x, int y){
    return x+y;
}

int SUB(int x, int y){
    return x-y;
}

int MULT(int x, int y){
    return x*y;
}

int DIVD(int x, int y){
    return x/y;
}

