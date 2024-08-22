#include <stdio.h>
#include <stdlib.h>

int ScrabbleScore(char array[]);

int main(){
    char str[21];
    int score;
    gets(str);
    printf("%d", score = ScrabbleScore(str));
    return 0;
}

int ScrabbleScore(char array[]){
    int i, sum = 0;
    for (i=0; array[i]!='\0'; i++)
        {
            if (array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'L' || array[i] == 'N' || array[i] == 'O' || array[i] == 'R' || array[i] == 'S' || array[i] == 'T' || array[i] == 'U')
                {
                    sum++;
                }
            else if (array[i] == 'D' || array[i] == 'G')
                {
                    sum+=2;
                }
            else if (array[i] == 'B' || array[i] == 'C' || array[i] == 'M' || array[i] == 'P')
                {
                    sum+=3;
                }
            else if (array[i] == 'F' || array[i] == 'H' || array[i] == 'V' || array[i] == 'W' || array[i] == 'Y')
                {
                    sum+=4;
                }
            else if (array[i] == 'K')
                {
                    sum+=5;
                }
            else if (array[i] == 'J' || array[i] == 'X')
                {
                    sum+=8;
                }
            else if (array[i] == 'Q' || array[i] == 'Z')
                {
                    sum+=10;
                }
            else
                {
                    sum+=0;
                }
        }
    return sum;
}
