#include <stdio.h>
#include <stdlib.h>

void RegularPluralForm(char word[]);

int main(){
    char word[21];
    int j, len = 0, k;
    printf("Give word: ");
    gets(word);
    RegularPluralForm(word);
    for (j=0; word[j]!='\0'; j++)
        {
            len++;
        }
    for (j=0; j<len; j++)
        {
            printf("%c", word[j]);
        }
    printf("\n");
    for (j=0; j<7; j++)
        {
            printf("Give word: ");
            gets(word);
            RegularPluralForm(word);
            len = 0;
            for (k=0; word[k]!='\0'; k++)
                {
                    len++;
                }
            for (k=0; k<len; k++)
                {
                    printf("%c", word[k]);
                }
            printf("\n");
        }
    return 0;
}

void RegularPluralForm(char word[]){
    int count = 0, i;
    for (i=0; word[i]!='\0'; i++)
        {
            count++;
        }
    for (i=0; i<count; i++)
        {
            if (i==count-1)
                {
                    if (word[i] == 's' || word[i] == 'x' || (word[i] == 'h' && word[i-1] == 'c' )|| (word[i-1] == 's' && word[i] == 'h'))
                        {
                            word[i+1] = 'e';
                            word[i+2] = 's';
                            word[i+3] = '\0';
                        }
                    else if ((word[i] == 'y') && (word[i-1] == 'b' || word[i-1] == 'c' || word[i-1] == 'd' || word[i-1] == 'f' || word[i-1] == 'g' || word[i-1] == 'h'
                                                    || word[i-1] == 'j' || word[i-1] == 'k' || word[i-1] == 'l' || word[i-1] == 'm' || word[i-1] == 'n' || word[i-1] == 'p'
                                                    || word[i-1] == 'q' || word[i-1] == 'r' || word[i-1] == 't' || word[i-1] == 'v' || word[i-1] == 'w' || word[i-1] == 'z'))
                        {
                            word[i] = 'i';
                            word[i+1] = 'e';
                            word[i+2] = 's';
                            word[i+3] = '\0';
                        }
                    else
                        {
                           word[i+1] = 's';
                           word[i+2] = '\0';
                        }
                }
        }
}
