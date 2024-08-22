#include <stdio.h>
#include <stdlib.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    char str[100], array[100];
    int i, sum = 0, j = 0;
    printf("Insert a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
        {
            if ((str[i] >= '0') && (str[i] <= '9'))
                {
                    array[j] = str[i];
                    j++;
                    sum += (str[i] - '0');
                }
        }
    for (i = 0; i < j-1; i++)
        {
            printf("%c + ", array[i]);
        }
    if (sum == 0)
        {
            printf("No digits in input.");
        }
    else
        {
            printf("%c ", array[j-1]);
            printf("= %d", sum);
        }
    return 0;
}
