#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <math.h>

void get_code(long *number, int *note);
float discount_percentage(long n);
int product_points(long num, float value);

int main(){
    int sum_points = 0, flag, score;
    long code;
    float price, discount, total = 0, total_discount = 0, sale, product;
    get_code(&code, &flag);
    while (code != 0)
        {
            if (flag == 1)
                {
                    printf("Dwse thn timh: ");
                    price = GetReal();
                    discount = discount_percentage(code);
                    sale = discount * price;
                    product = price - sale;
                    total = total + product;
                    total_discount = total_discount + sale;
                    score = product_points(code, price);
                    sum_points = sum_points + score;
                }
            else
                {
                    printf("Lathos Kwdikos (0-2000)\n");
                }
            get_code(&code, &flag);
        }
    printf("------------------\n");
    printf("Teliko synolo: %.2f Euro\n", total);
    printf("Ekptwsh: %.2f Euro\n", total_discount);
    printf("Pontoi: %d\n", sum_points);
    return 0;
}

void get_code(long *number, int *note){
    printf("Dwse ton kwdiko: ");
    *number = GetLong();
    if (*number >= 0 && *number <= 2000)
        {
            *note = 1;
        }
    else
        {
            *note = 0;
        }
}

float discount_percentage(long n){
    if (n >= 1 && n <= 300)
        {
            return 0.05;
        }
    else if (n >= 301 && n <= 500)
        {
            return 0.1;
        }
    else if (n >= 501 && n <= 1000)
        {
            return 0.15;
        }
    else
        {
            return 0.2;
        }
}

int product_points(long num, float value){
    int points = 0;
    float object, cut;
    if (num >= 1000 && num <= 1500)
        {
            cut = discount_percentage(num);
            object = value - cut * value;
            points = ceil(object/5);
        }
    points++;
    return points;
}
