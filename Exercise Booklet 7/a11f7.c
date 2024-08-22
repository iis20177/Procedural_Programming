#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 50

int main(){
    char str[LEN], name[LEN], server[LEN];
    int index, j, i, len;
    printf("Get Address: ");
    gets(str);
    len = strlen(str);
    j=0;
    for (i=0; i<=len; i++)
        {
             if(str[0] != 32 || str[len] != 32)
                {
                    str[j] = str[i];
                    j++;
                }
        }
    index = 0;
    while ( str[index] != '@' )
        index++;
    strncpy(name, str, index);
    name[index] = '\0';
    strncpy(server,str+index+1,(strlen(str)-index));
    printf("Name: %s Len: %d\n", name,strlen(name));
    printf("Server: %s \n", server);
    return 0;
}
