#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()
{
    int oikiakes_syskeues, container50, container20, container5, yp;
    printf("Dwse to plhthos twn syskeuwn ");
    oikiakes_syskeues = GetInteger();
    container50 =  oikiakes_syskeues/50;
    yp = oikiakes_syskeues%50;
    container20 = yp/20;
    yp = yp%20;
    container5 = yp/5;
    yp = yp%5;
    printf("50 %d \n", container50);
    printf("20 %d \n", container20);
    printf("5 %d \n", container5);
    printf("1 %d \n", yp);
    return 0;
}
