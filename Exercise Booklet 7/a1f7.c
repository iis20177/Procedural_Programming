#include <stdio.h>
#include <stdlib.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    char str[26];
    int i, count = 0;
    printf("Insert a string: ");
    gets(str);
    for (i=0; str[i] != '\0'; i++)
        {
            if (str[i] == 'A')
                {
                    count++;
                }
        }
    printf("%d\n", count);
    return 0;
}
