#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int Day, Month, Year;
    Month = GetInteger();
    switch(Month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            Day = 31;
            printf("%d", Day);
            break;
        case 4: case 6: case 9: case 11:
            Day = 30;
            printf("%d", Day);
            break;
        case 2:
            Year = GetInteger();
                {
                    if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
                        {
                            Day = 29;
                        }
                    else
                        {
                            Day = 28;
                        }
                }
            printf("%d", Day);
            break;
        default:
            break;
    }
    return 0;
}
