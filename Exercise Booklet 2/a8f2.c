#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <math.h>

main() {
    int expected_time, real_time, acceptable_difference, difference;
    printf("Dwse ton problepomeno xrono:");
    expected_time = GetInteger();
    printf("Dese ton pragmatiko xrono:");
    real_time = GetInteger();
    {
      if (expected_time >= 0 && expected_time < 30)
        {
            acceptable_difference = 1;
        }
    else if (expected_time >= 30 && expected_time < 60)
        {
            acceptable_difference = 2;
        }
    else if (expected_time >= 60 && expected_time < 90)
        {
            acceptable_difference = 3;
        }
    else if (expected_time >= 90 && expected_time < 120)
        {
            acceptable_difference = 4;
        }
    else if (expected_time >= 120 && expected_time < 180)
        {
            acceptable_difference = 6;
        }
    else if (expected_time >= 180 && expected_time < 240)
        {
            acceptable_difference = 8;
        }
    else if (expected_time >= 240 && expected_time < 360)
        {
            acceptable_difference = 13;
        }
    else
        {
            acceptable_difference = 17;
        }
    }
    printf("Apodekth diafora %d\n", acceptable_difference);
    difference = abs(expected_time - real_time);
    printf("Diafora eisagwmwnvn timwn %d\n", difference);
    if (expected_time > real_time)
        {
            printf("BIG");
        }
    else
        {
            if ((difference > 0 && difference < 5) || (difference == 6 || difference == 8 || difference == 13|| difference == 17))
                {
                    printf("GOOD");
                }
            else
                {
                    printf("SMALL");
                }
        }
    return 0;
}
