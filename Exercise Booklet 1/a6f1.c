#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()
{
    int hmeres_ergasias;
    long hmerhsia_amoibh, dwro;
    double pososto_dwroy;
    printf("Dwse tis hmeres ergasias tou etous: ");
    hmeres_ergasias = GetInteger();
    printf("Dwse thn hmerhsia amoibh: ");
    hmerhsia_amoibh = GetInteger();
    printf("Dwse to pososto dwroy: ");
    pososto_dwroy = GetReal();
    dwro = (long)(hmeres_ergasias * hmerhsia_amoibh * pososto_dwroy);
    printf("To dwro einai %d \n", dwro);
    return 0;
}
