#include <stdio.h>
#include <stdlib.h>

void Capitalize(char str[]);

int main(){
    char str[21];
    int j;
    gets(str);
    Capitalize(str);
    for (j=0; str[j]!='\0'; j++)
        {
            printf("%c", str[j]);
        }
    return 0;
}

void Capitalize(char str[]){
    int i;
    for (i=0; str[i]!='\0'; i++)
        {
            if (i==0)
                {
                    if (str[i]>='a' && str[i]<='z')
                        {
                            str[i] = str[i] - 32;
                        }
                }
            else if (str[i]>='A' && str[i]<='Z')
                {
                    str[i] = str[i]+32;
                }
        }
}
