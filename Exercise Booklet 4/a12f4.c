#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <math.h>

#define PI 3.1415926535

long Parag(int N);
double calculate_sinx(double x);

int main(){
    int N, variable;
    long factorial;
    double x, sinx;
    printf("Give number(smaller than 12): ");
    N = GetInteger();
    if (N<=12)
        {
           factorial = Parag(N);
           printf("%ld\n", factorial);
        }
    printf("Give x in rads: PI/");
    variable = GetInteger();
    x = PI/variable;
    sinx = calculate_sinx(x);
    printf("%12.10f", sinx);
    return 0;
}

long Parag(int N){
    long sum=1;
    int i;
    for (i=1;i<=N;i++)
        {
            sum*=i;
        }
    return sum;
}

double calculate_sinx(double x){
    int i, index=1;
    double sum=0, add=1;
    char character;
    for (i=1;i<=11;i+=2)
        {
            sum+=index*pow(x, add)/i;
            index=index*(-1);
            add+=2;
            character = sum;
            if (character<'0.0001')
                {
                    system("PAUSE");
                }
        }
    return sum;
}
