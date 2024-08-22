#include <stdio.h>
#include <stdlib.h>

#define MinLetters 2
#define MaxLetters 8

char RandomWord();

int main(){
    int i, j;
    char ch;
    for (j=0; j<5; j++)
        {
            for (i=MinLetters; i<MaxLetters; i++)
                {
                    printf("%c", ch = RandomWord());
                }
            printf("\n");
        }
    return 0;
}

char RandomWord(){
    int n;
    char c;
    n = rand()%26;
    c = (char)(n+97);
    return c;
}
