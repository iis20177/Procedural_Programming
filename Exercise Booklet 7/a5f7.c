#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "genlib.h"

bool IsntVowel(char ch);

int main(){
    int i;
    char c;
    for (c = 'A'; c <= 'Z'; ++c)
        {
            if (IsntVowel(c))
                {
                    printf("%c ", c);
                }
        }
    printf("\n");
    for (c = 'a'; c <= 'z'; ++c)
        {
            if (IsntVowel(c))
                {
                    printf("%c ", c);
                }
        }
    printf("\n");
    system("pause");
    return 0;
}

bool IsntVowel(char ch)
{
    switch (tolower(ch))
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                return (FALSE);
            default:
                return (TRUE);
        }
}
