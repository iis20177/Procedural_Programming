#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    double weight, height, BMI;
    height = (printf("Dose ypsos :"), GetReal());
    weight = (printf("Dose baros :"), GetReal());
    BMI = weight / (height * height);
    {
        if (BMI < 18.5)
            printf("Lipovaris");
        else if (BMI >= 18.5 && BMI < 25)
            printf("Kanonikos");
        else if (BMI >= 25 && BMI < 30)
            printf("Ypervaros");
        else
            printf("Paxisarkos");
    }
    return 0;
}
