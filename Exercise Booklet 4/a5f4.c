#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int cube (int digit);
bool IsArmstrong(int number);
int Sum_Cube(int number);

int main(){
    int i;
    for (i=1;i<1000;i++)
        {
            if (IsArmstrong(i))
                {
                    printf("%d\n", i);
                }
        }
    return 0;
}

int cube(int digit){
    int i, ginomeno;
    ginomeno=1;
    for (i=0;i<3;i++)
        {
            ginomeno*=digit;
        }
    return ginomeno;
}

bool IsArmstrong(int number){
    int result;
    result=Sum_Cube(number);
    if (result==number)
        {
            return TRUE;
        }
    return FALSE;
}

int Sum_Cube(int number){
    int sum=0;
    while (number>0)
        {
            sum+=cube(number%10);
            number/=10;
        }
    return sum;
}
