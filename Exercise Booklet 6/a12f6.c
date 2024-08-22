#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define ATHLITES 8

void ypologismosEpityxontwn(float swim[], float bike[], float run[], int code[], float success[], int successful[]);
void print(float success[], int successful[]);

int main() {
    int kwdikoiAthlitwn[ATHLITES] = {115, 136, 187, 254, 281, 290, 301, 314};
    float vathmologiaKolymbi[ATHLITES];
    float vathmologiaPodilato[ATHLITES];
    float vathmologiaTreximo[ATHLITES];
    float epit2[ATHLITES];
    int epit[ATHLITES];
    int i;
    float maxKolymbi, maxPodilato, maxTreximo;
    float avgKolymbi, avgPodilato, avgTreximo;

    printf("EISAGWGI VATHMOLOGIAS ATHLIMATOS 1 - Kolymbi\n");
    for(i=0; i<ATHLITES; i++)
        {
            printf("Eisagete ti vathmologia tou athliti %d: ", i);
            vathmologiaKolymbi[i] = GetReal();
        }

    printf("EISAGWGI VATHMOLOGIAS ATHLIMATOS 2 - Podilato\n");
    for(i=0; i<ATHLITES; i++)
        {
            printf("Eisagete ti vathmologia tou athliti %d: ", i);
            vathmologiaPodilato[i] = GetReal();
        }

    printf("EISAGWGI VATHMOLOGIAS ATHLIMATOS 3 - Treximo\n");
    for(i=0; i<ATHLITES; i++)
        {
            printf("Eisagete ti vathmologia tou athliti %d: ", i);
            vathmologiaTreximo[i] = GetReal();
        }

    maxKolymbi = vathmologiaKolymbi[0];
    maxPodilato = vathmologiaPodilato[0];
    maxTreximo = vathmologiaTreximo[0];
    for(i=1; i<ATHLITES; i++)
        {
            if(vathmologiaKolymbi[i] > maxKolymbi)
                {
                    maxKolymbi = vathmologiaKolymbi[i];
                }
            if(vathmologiaPodilato[i] > maxPodilato)
                {
                    maxPodilato = vathmologiaPodilato[i];
                }
            if(vathmologiaTreximo[i] > maxTreximo)
               {
                   maxTreximo = vathmologiaTreximo[i];
               }
        }
    printf("Megistes vathmologies: %.1f (Kol) %.1f (Pod) %.1f (Trex) \n", maxKolymbi, maxPodilato, maxTreximo);

    avgKolymbi = 0;
    avgPodilato = 0;
    avgTreximo = 0;
    for(i=0; i<ATHLITES; i++)
        {
            avgKolymbi += vathmologiaKolymbi[i];
            avgPodilato += vathmologiaPodilato[i];
            avgTreximo += vathmologiaTreximo[i];
        }
    avgKolymbi /= ATHLITES;
    avgPodilato /= ATHLITES;
    avgTreximo /= ATHLITES;
    printf("Mesoi oroi: %.1f (Kol) %.1f (Pod) %.1f (Trex) \n", avgKolymbi, avgPodilato, avgTreximo);

    ypologismosEpityxontwn(vathmologiaKolymbi, vathmologiaPodilato, vathmologiaTreximo, kwdikoiAthlitwn, epit2, epit);
    print(epit2, epit);
    system("PAUSE");
}

void ypologismosEpityxontwn(float swim[], float bike[], float run[], int code[], float success[], int successful[]){
    int j;
    float sum[ATHLITES], ms;
    for (j=0; j<ATHLITES; j++)
        {
            sum[j] = 0;
        }
    for (j=0; j<ATHLITES; j++)
        {
            sum[j] = swim[j] + bike[j] + run[j];
        }
    for (j=0; j<ATHLITES; j++)
        {
            ms = sum[j]/3;
            if (ms > 5)
                {
                    success[j] = ms;
                    successful[j] = code[j];
                }
        }
}

void print(float success[], int successful[]){
    int j=0;
    for (j=0; j<ATHLITES; j++)
        {
            if (success[j] > 5)
                {
                    printf("Kwdikos Athliti %d, Mesos oros vathmologias %.1f\n", successful[j], success[j]);
                }
        }
}
