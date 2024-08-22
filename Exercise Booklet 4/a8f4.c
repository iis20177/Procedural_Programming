#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int MKD(int x, int y);
int EKP(int x, int y);

int main(){
    int x, y, gcd, lcm;
    x = GetInteger();
    y = GetInteger();
    gcd = MKD(x,y);
    lcm = EKP(x,y);
    printf("%d %d", gcd, lcm);
    return 0;
}

int MKD(int x, int y){
    int a=x, b=y;
    if (a==0 && b!=0)
        {
            return b;
        }
    else if (a!=0 && b==0)
        {
            return a;
        }
    else if (a>b)
        {
            return MKD(a-b, b);
        }
    else if (a<b)
        {
            return MKD(b-a, a);
        }
}

int EKP(int x, int y){
    int a=x, b=y;
    return (a/MKD(a,b))*b;
}
