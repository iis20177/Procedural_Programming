#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], blank[100];
    int i = 0, j = 0, len;
    printf("Enter the string: ");
    gets(blank);
    while(blank[i] != '\0')
        {
            if(blank[i] != 32)
                {
                    str[j++] = blank[i];
                }
            i++;
        }
    str[j] = '\0';
    len = strlen(str);
    printf("The number of characters is: %d\n", len);
    printf("The string after removing all the spaces is: %s\n", str);
    return 0;
}
