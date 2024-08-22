#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

void GetTime(long SysSecs, int *hours, int *minutes, int *seconds);

int main(){
    long time, h, m, s;
    printf("Enter Device Secs: ");
    time = GetLong();
    GetTime(time, &h, &m, &s);
    printf("Time is %d:%d:%d", h, m, s);
    return 0;
}

void GetTime(long SysSecs, int *hours, int *minutes, int *seconds){
    int r;
    *hours = SysSecs/3600;
    r = SysSecs%3600;
    *minutes = r/60;
    *seconds = r%60;
}
