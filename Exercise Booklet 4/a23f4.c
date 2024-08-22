#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define TRUE 1
#define FALSE 0

bool Valid_Time(int h, int m, int s);

int main(){
    int h, m, s;
    printf("Dwse tis ores: ");
    h = GetInteger();
    printf("Dwse ta lepta: ");
    m = GetInteger();
    printf("Dwse ta defterolepa: ");
    s = GetInteger();
    if (Valid_Time(h, m, s))
        printf("WRA EGKYRH");
    else
        printf("WRA MH EGKYRH");
    return 0;
}

bool Valid_Time(int h, int m, int s){
    if (h>=0 && h<=23)
        if (m>=0 && m<=59)
            if (s>=0 && s<=59)
                return TRUE;
            return FALSE;
        return FALSE;
    return FALSE;
}
