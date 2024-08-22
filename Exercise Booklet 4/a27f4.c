#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define TRUE 1
#define FALSE 0

long encode(long N);
bool check(long code);

int main(){
    long lower_limit, upper_limit, code;
    int N;
    printf("Lower Limit:");
    lower_limit = GetLong();
    printf("Upper Limit:");
    upper_limit = GetLong();
    for(N=lower_limit;N<=upper_limit;N++)
        {
            printf("Code: %d ", N);
            code = encode(N);
            printf("Encoding: %ld ", code);
            printf("isValid:");
            if (check(code))
                printf("yes\n");
            else
                printf("no\n");
        }
    return 0;
}

long encode(long N){
    long end, last2digits;
    last2digits = (98-(N*100)%97)%97;
    end = N*100+last2digits;
    return end;
}

bool check(long code){
    if(code%97==1)
        return TRUE;
    else
        return FALSE;
}
