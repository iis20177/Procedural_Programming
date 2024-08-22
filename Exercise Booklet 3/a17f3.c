#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <math.h>

main(){
    double x, fx;
    for (x=0; x<=1; x+=0.05)
    {
        fx=pow(x,4)-(5*pow(x,2))+3;
        printf("x=%f  fx=%f\n", x, fx);
    }
    return 0;
}
