#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

typedef struct{
    int width, height, depth;
    int area, volume;
}box;

void ReadFill(box *cu);
void FindAr(box *cu);
void FindVol(box *cu);

int main(){
    box cuboid;
    ReadFill(&cuboid);
    FindAr(&cuboid);
    FindVol(&cuboid);
    printf("To emvadon tou koutiou einai %d cm2\n", cuboid.area);
    printf("O ogos tou koutiou einai %d cm3\n", cuboid.volume);
    return 0;
}

void ReadFill(box *cu){
    printf("Dose to mikos tou koutioy se cm: ");
    (*cu).width = GetInteger();
    printf("Dose to ypsos tou koutioy se cm: ");
    (*cu).height = GetInteger();
    printf("Dose to vathos tou koutioy se cm: ");
    (*cu).depth = GetInteger();
}

void FindAr(box *cu){
    (*cu).area = 2 * ((*cu).depth * (*cu).width + (*cu).width * (*cu).height + (*cu).depth * (*cu).height);
}

void FindVol(box *cu){
    (*cu).volume = (*cu).depth * (*cu).width * (*cu).height;
}
