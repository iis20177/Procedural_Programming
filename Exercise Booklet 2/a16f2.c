#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int sms;
    double price;
    printf("Dose plithos sms :");
    sms = GetInteger();
    {
        if (sms > 0 && sms <= 10)
        {
            price = sms * 2;
        }
        else if (sms > 10 && sms <= 60)
        {
            price = 10 * 2 + (sms - 10) * 1.5;
        }
        else if (sms > 60 && sms <= 160)
        {
            price = 10 * 2 + 50 * 1.5 + (sms - 60) * 1.2;
        }
        else
        {
            price = 10 * 2 + 50 * 1.5 + 100 * 1.2 + (sms - 160) * 1.0;
        }
    }
    printf("Synoliko poso se euro: %f", price/100);
    return 0;
}
