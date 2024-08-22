#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    bool LeapYear;
    int Year;
    Year = GetInteger();
    {
        if (Year % 4 == 0 && Year % 100 != 0)
            {
                if (Year % 400 == 0 && Year % 2000 != 0)
                    {
                        LeapYear = 1;
                    }
            }
        else
            {
                LeapYear = 0;
            }
    }
    printf("%s", LeapYear?"true":"false");
    return 0;
}
