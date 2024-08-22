#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int code, fixed_charge;
    long present, previous, consumption, value;
    double tax, total;
    code = (printf("Dwse ton kwdiko kathgorias timologiou: "), GetInteger());
    present = (printf("Dwse thn parousa endeixh toy metrhth: "), GetLong());
    previous = (printf("Dwse thn prohgoumenh endeixh toy metrhth: "), GetLong());
    printf("Katanalwsh reumatos se monades: %ld\n", consumption = present - previous);
    {
        if (consumption > 0 && consumption <= 200)
            {
                value = consumption * 12;
            }
        else if (consumption > 200 && consumption <= 500)
            {
                value = 200 * 12 + (consumption - 200) * 15;
            }
        else if (consumption > 500 && consumption <= 1500)
            {
                value = 200 * 12 + 300 * 15 + (consumption - 500) * 20;
            }
        else
            {
                value = 200 * 12 + 300 * 15 + 1000 * 20 + (consumption - 1500) * 30;
            }
    }
    printf("Axia reumatos (cent): %ld\n", value);
    {
        if (code == 1 || code == 2)
            {
                fixed_charge = 20;
            }
        else
            {
                fixed_charge = 100;
            }
    }
    printf("Pagio(euro): %d\n", fixed_charge);
    total = fixed_charge + (value / 100);
    tax = total * 0.18;
    printf("FPA (euro): %g\n", tax);
    total = total + tax;
    printf("Synoliko poso plhrwmhs (euro): %g\n", total);
    return 0;
}
