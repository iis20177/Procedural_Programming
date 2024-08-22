#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int Fibonacci(int n);

int main(){
    int n, i, fib;
    printf("Dwse to n: ");
    n = GetInteger();
    fib = Fibonacci(n);
    return 0;
}

int Fibonacci(int n){
    int a=0, b=1, c, i;
    for (i=a;i<=n;i++)
        {
            printf("%5d\n", a);
            c = a + b;
            a = b;
            b = c;
        }
    return a;
}
