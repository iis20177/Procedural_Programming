#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int I, J, K;
    for (I=1; I<=3; I++)
        {
            for (J=1; J<=3; J++)
                {
                    for (K=I; K<=J; K++)
                        {
                            printf("%1d%1d%1d \n",  I, J, K);
                        }
                }
        }
    return 0;
}
