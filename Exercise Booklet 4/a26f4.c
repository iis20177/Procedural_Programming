#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int f(int x);
int g(int x, int y);

int main(){
    int x, y, fx, gxy, fgxy;
    printf("Enter x: ");
    x = GetInteger();
    printf("Enter y: ");
    y = GetInteger();
    fx = f(x);
    printf("f(x) = f(%d) = %d\n", x, fx);
    gxy = g(x,y);
    printf("g(x,y) = g(%d,%d) = %d\n", x, y, gxy);
    fgxy = f(gxy);
    printf("f(g(x,y)) = f(g(%d,%d)) = %d", x, y, fgxy);
    return 0;
}

int f(int x){
    int operation;
    if (x>0)
        operation = x+2;
    else
        operation = -3*x+7;
    return operation;
}

int g(int x, int y){
    int operation;
    if (x>0 && y>0)
        operation = x-y;
    else
        operation = 7*x-5;
    return operation;
}
