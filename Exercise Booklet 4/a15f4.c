#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int Menu(int number);
double Transactions(int choice, double Euro);

int main(){
    int choice, number;
    double Euro, Currency;
    choice = Menu(number);
    while (choice!=6)
        {
            printf("Give the amount of money in euro: ");
            Euro = GetReal();
            Currency = Transactions(choice, Euro);
            printf("%g\n", Currency);
            choice = Menu(number);
        }
    return 0;
}

int Menu(int number){
    printf("1. Metatroph se dollaria\n");
    printf("2. Metatroph se lires\n");
    printf("3. Metatroph se fraga Elbetias\n");
    printf("4. Metatroph se dollaria Canada\n");
    printf("5. Metatroph se gien\n");
    printf("6. Exodos\n");
    number = GetInteger();
    return number;
}

double Transactions(int choice, double Euro){
    if (choice==1)
        return (1/0.89)*Euro;
    else if (choice==2)
        return (1/0.618)*Euro;
    else if (choice==3)
        return (1/1.5465)*Euro;
    else if (choice==4)
        return (1/1.3565)*Euro;
    else if (choice==5)
        return (1/109.22)*Euro;
    else
        system("PAUSE");
}
