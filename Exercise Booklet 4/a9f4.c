#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

double one(double mins);
double two(double feet);
double three(double C);
double four(double F);
string Menu(int choice);

int main(){
    double hours, mins, meters, feet, C, F, Celsius, Fahrenheit;
    int select, choice;
    select = Menu(choice);
    while (select!=5)
        {
             if (select == 1)
            {
                printf("Enter the minutes: ");
                mins = GetReal();
                hours = one(mins);
                printf("%g\n", hours);
                system("pause");
            }
        else if (select == 2)
            {
                printf("Enter the feet: ");
                feet = GetReal();
                meters = two(feet);
                printf("%g\n", meters);
                system("pause");            }
        else if (select == 3)
            {
                printf("Enter the Celsius degrees: ");
                C = GetReal();
                Celsius = three(C);
                printf("%g\n", Celsius);
                system("pause");            }
        else if (select == 4)
            {
                printf("Enter the Fahrenheit degrees: ");
                F = GetReal();
                Fahrenheit = four(F);
                printf("%g\n", Fahrenheit);
                system("pause");
            }
        select = Menu(choice);
        }
    return 0;
}

string Menu(int choice)
    {
        printf("AVAILABLE OPTIONS:\n");
        printf("1. CONVERT MINUTES TO HOURS\n");
        printf("2. CONVERT FEET TO METERS\n");
        printf("3. CONVERT CELSIUS TO DEGREES FAHRENHEIT\n");
        printf("4. CONVERT DEGREES FAHRENHEIT TO CELSIUS\n");
        printf("5. QUIT\n");
        printf("Enter a number: ");
        choice = GetInteger();
        return choice;
    }

double one(double mins){
    double h;
    h = mins/60;
    return h;
}

double two(double feet){
    double m;
    m = feet*0.3048;
    return m;
}

double three(double C){
    double fahrenheit;
    fahrenheit=1.8*C+32;
    return fahrenheit;
}

double four(double F){
    double celsius;
    celsius=(F-32)*5/9;
    return celsius;
}
