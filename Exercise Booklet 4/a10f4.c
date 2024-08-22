#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <stdlib.h>

bool Valide_Date(int dd, int mm, int yy);
bool IsLeapYear(int yy);

int main(){
    int dd, mm, yy;
    printf("Enter date(DD/MM/YYYY): ");
    scanf("%d/%d/%d", &dd, &mm, &yy);
    if (Valide_Date(dd, mm ,yy))
        {
            printf("TRUE");
        }
    else
        {
            printf("FALSE");
        }
    return 0;
}

bool Valide_Date(int dd, int mm, int yy)
{
    if (yy>=1900 && yy<=2100)
    {
        if (mm>=1 && mm<=12)
        {
            if ((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                return TRUE;
            else if ((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
                return TRUE;
            else if ((dd>=1 && dd<=28) && (mm==2))
                return TRUE;
            else if ((dd==29 && mm==2) && (IsLeapYear(yy)))
                return TRUE;
            else
                return FALSE;
        }
        else
            return FALSE;
    }
    else
        return FALSE;
}

bool IsLeapYear(int yy)
{
    int year = yy;
	return ( ((year % 4 == 0) && (year % 100 !=0))
		     || (year % 400 == 0) );
}
