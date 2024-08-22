#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100], name[100], temp[100];
    int i, count = 0;
    for (i=0; i<100; i++)
        {
            printf("Passenger in seat %d :", i+1);
            gets(str);
            if (str[i] == '-')
                {
                    break;
                }
            else
                {

                    temp[i] = str[i+1];
                    if (strcmp(str, temp) == 0)
                        {
                            printf("Passenger %s already exists.\n", temp[i]);
                        }
                    else
                        {
                            name[i] = str[i];
                            count++;
                        }
                }
        }
    printf("Passenger List\n");
    printf("--------------\n");
    for (j=0; j<count; j++)
        {
            printf("In seat %d:%s\n", j+1, name[j]);
        }
    system("pause");
    return 0;
}
