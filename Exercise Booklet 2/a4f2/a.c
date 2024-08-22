#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()
{
    long Price;
    double TaxRate;
    char TaxCode;
    TaxCode = GetLine();
    {
        if (TaxCode == 'T')
            {
                Price = Price * TaxRate + Price;
                printf("%ld\n", Price);
            }
        else
            {
                printf("ERROR\n");
            }
    }
    return 0;
}
