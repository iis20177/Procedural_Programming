#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    double a, b, c, D, x, x1, x2;
    printf("Dose toys syntelestes a b & c : ");
    scanf("%lf %lf %lf", &a, &b, &c);
    {
        if (a != 0)
            {
                D = (b * b) - 4 * a * c;
                {
                    if (D > 0)
                        {
                            x1 = - b + sqrt(D) / (2 * a);
                            x2 = - b - sqrt(D) / (2 * a);
                            printf("%lf %lf", x1, x2);
                        }
                    else if (D == 0)
                        {
                            x = - b / (2 * a);
                            printf("%lf", x);
                        }
                    else
                        {
                            printf("Den exei pragmatikes rizes");
                        }
                }
            }
        else
            {
                 printf("Den exei pragmatikes rizes");
            }
    }
    return 0;
}
