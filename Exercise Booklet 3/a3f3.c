#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    long arithmos_eswteriko, arithmos_exwteriko, poso_eswterikou, poso_exwterikou, sum_eswterikou = 0, sum_exwterikou = 0;
    printf("Arithmos kibwtiwn eswterikou? ");
    arithmos_eswteriko = GetLong();
    while (arithmos_eswteriko != -9999)
        {
            printf("Arithmos kibwtiwn exwterikou? ");
            arithmos_exwteriko = GetLong();
            poso_eswterikou = arithmos_eswteriko * 3500;
            sum_eswterikou += poso_eswterikou;
            poso_exwterikou = arithmos_exwteriko * 5000;
            sum_exwterikou += poso_exwterikou;
            printf("%10ld%10ld%10ld\n", poso_eswterikou, poso_exwterikou, poso_eswterikou+poso_exwterikou);
            printf("Arithmos kibwtiwn eswterikou? ");
            arithmos_eswteriko = GetLong();
        }
    printf("%10ld%10ld%10ld", sum_eswterikou, sum_exwterikou, sum_eswterikou+sum_exwterikou);
    return 0;
}
