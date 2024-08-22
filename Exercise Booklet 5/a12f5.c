#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int students, subjects, i, j;
    printf("Dwse ton arithmo twn mathitwn: ");
    students = GetInteger();
    while (students>30)
        {
            students = GetInteger();
        }
    printf("Dwse ton arithmo twn thematwn: ");
    subjects = GetInteger();
    while (subjects>10)
        {
            subjects = GetInteger();
        }
    double grades100[students][subjects], grades20[students][subjects], meanscore100[students], meanscore20[students], sum100=0, sum20=0;
    for (i=0; i<students; i++)
        {
            for (j=0; j<subjects; j++)
                {
                    printf("Dwse th bathmologia tou %dou thematos tou %dou mathiti: ", j+1, i+1);
                    grades100[i][j] = GetReal();
                }
        }
    for (i=0; i<students; i++)
        {
            for (j=0; j<subjects; j++)
                {
                    grades20[i][j] = 2*grades100[i][j]/10;
                }
        }
    for (i=0; i<students; i++)
        {
            for (j=0; j<subjects; j++)
                {
                    sum100 = sum100 + grades100[i][j];
                    sum20 = sum20 + grades20[i][j];
                }
            meanscore100[i] = sum100/subjects;
            sum100 = 0;
            meanscore20[i] = sum20/subjects;
            sum20 = 0;
        }
    for (i=0; i<students; i++)
        {
            for (j=0; j<subjects; j++)
                {
                    printf("%6.1lf", grades100[i][j]);
                }
            printf("%6.1lf\n", meanscore100[i]);
            for (j=0; j<subjects; j++)
                {
                    printf("%6.1lf", grades20[i][j]);
                }
            printf("%6.1lf\n", meanscore20[i]);
        }
    system("pause");
    return 0;
}
