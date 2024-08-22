#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genlib.h"
#include "simpio.h"

void DateString(int day, int month, int year, char date[10]);

int main(){
    int d, m, y, i;
    char date[10];
    d = GetInteger();
    m = GetInteger();
    y = GetInteger();
    DateString(d, m, y, date);
    for (i=0; i<10; i++)
        {
            printf("%c", date[i]);
        }
    return 0;
}

void DateString(int day, int month, int year, char date[10]){
    int day1, day2, year1000, yp, year100, year10;
    day1 = day/10;
    day2 = day%10;
    date[0] = day1+'0';
    date[1] = day2+'0';
    date[2] = '-';
    if (month == 1)
        {
            date[3] = 'J';
            date[4] = 'a';
            date[5] = 'n';
        }
    else if (month == 2)
        {
            date[3] = 'F';
            date[4] = 'e';
            date[5] = 'b';
        }
    else if (month == 3)
        {
            date[3] = 'M';
            date[4] = 'a';
            date[5] = 'r';
        }
    else if (month == 4)
        {
            date[3] = 'A';
            date[4] = 'p';
            date[5] = 'r';
        }
    else if (month == 5)
        {
            date[3] = 'M';
            date[4] = 'a';
            date[5] = 'y';
        }
    else if (month == 6)
        {
            date[3] = 'J';
            date[4] = 'u';
            date[5] = 'n';
        }
    else if (month == 7)
        {
            date[3] = 'J';
            date[4] = 'u';
            date[5] = 'l';
        }
    else if (month == 8)
        {
            date[3] = 'A';
            date[4] = 'u';
            date[5] = 'g';
        }
    else if (month == 9)
        {
            date[3] = 'S';
            date[4] = 'e';
            date[5] = 'p';
        }
    else if (month == 10)
        {
            date[3] = 'O';
            date[4] = 'c';
            date[5] = 't';
        }
    else if (month == 11)
        {
            date[3] = 'N';
            date[4] = 'o';
            date[5] = 'v';
        }
    else
        {
            date[3] = 'D';
            date[4] = 'e';
            date[5] = 'c';
        }
    date[6] = '-';
    year1000 = year/1000;
    yp = year%1000;
    year100 = yp/100;
    yp = yp%100;
    year10 = yp/10;
    yp = yp%10;
    date[7] = year10+'0';
    date[8] = yp+'0';
    date[9] = '\0';
}
