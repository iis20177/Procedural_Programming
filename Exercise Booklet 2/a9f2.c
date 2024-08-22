#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int code, number, price;
    double discount, total;
    code = (printf("Dwse ton kwdiko tou proiontos: "), GetInteger());
    number = (printf("Dwse ton arithmo twn temaxiwn: "), GetInteger());
    price = (code % 100) + (code/100);
    printf("H timh pwlhshs toy proiontos einai %d\n", price);
    if (number > 0 && number <= 30)
        {
            discount = 10;
        }
    else if (number > 30 && number <= 70)
        {
            discount = 20;
        }
    else
        {
            discount = 35;
        }
    discount = number * price * discount/100;
    printf("H ekptwsh einai %g\n", discount);
    total = number * price - discount;
    printf("H telikh timh ths paragelias einai %g", total);
    return 0;
}
