#include <stdio.h>
#include <string.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int N, i, x, flag = 1;
    char C;
    do
        {
            printf("Give integer: ");
            N = GetInteger();
        }
    while (N<1 && N>26);
    for (i=65; i<=90; i++)
        {
            if (N+64 == i)
                {
                    printf("%d %c ", N, i);
                }

        }
    for (i=97; i<=122; i++)
        {
            if (N+96 == i)
                {
                    printf("%c\n", i);
                }

        }
    printf("Give letter: ");
    while (flag == 1)
        {
            scanf("%c", &C);
            if (C >= 'A' && C <= 'Z')
                {
                    flag = 0;
                }
        }
    x = C - 64;
    printf("%c %d", C, x);
    return 0;
}
