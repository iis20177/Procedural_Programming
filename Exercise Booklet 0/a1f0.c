/*
 *File name: alf0.c
 *--------------------
 *This program adds two numbers, printing
 *their sum in the end.
 */

 #include <stdio.h>
 #include "genlib.h"
 #include "simpio.h"

 int main()
 {
          int n1, n2,
          float total=0;

          printf("This program adds two numbers.\n");
          printf("Please, give the 1st number: ");
          n1 = GetInteger();
          printf("Please, give the 2nd number: ");
          n2 = GetInteger();
          total = n1 + n2;
          printf("The total is %f\n", total);
          return 0;
 }
