#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int MAX(int x, int y);
int MIN(int x, int y);

int main(){
    int x, y, min, max;
    x = GetInteger();
    y = GetInteger();
    min = MIN(x,y);
    max = MAX(x,y);
    printf("%d %d", min, max);
    return 0;
}

int MAX(int x, int y){
    if (x>y)
        {
            return x;
        }
    return y;
}

int MIN(int x, int y){
    if (x<y)
        {
            return x;
        }
    return y;
}
