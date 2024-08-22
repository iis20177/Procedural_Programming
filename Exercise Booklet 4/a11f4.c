#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

bool Valide_Date(int dd, int mm, int yy);
bool IsLeapYear(int yy);
long Read_and_Calculate(int etos);

int main(){
    int etos;
    long fpa;
    printf("Current year ? ");
    etos = GetInteger();
    fpa = Read_and_Calculate(etos);
    printf("SYNOLO FPA ---> %ld", fpa);
    return 0;
}

bool Valide_Date(int dd, int mm, int yy){
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

bool IsLeapYear(int yy){
    int year = yy;
	return ( ((year % 4 == 0) && (year % 100 !=0))
		     || (year % 400 == 0) );
}

long Read_and_Calculate(int etos){
    long sum=0, tax;
    int dd, mm, yy;
    printf("Day ? ");
    dd = GetInteger();
    while (dd!=-1)
        {
            printf("Month ? ");
            mm = GetInteger();
            printf("Year ? ");
            yy = GetInteger();
            printf("FPA ? %");
            tax = GetLong();
            if ((yy == etos) && (Valide_Date(dd, mm ,yy)))
                {
                   sum+=tax;
                }
            printf("Day ? ");
            dd = GetInteger();
        }
    return sum;
}
