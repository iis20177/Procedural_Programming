#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int i;
    printf("PROCESSING STUDENTS' DATA\n");
    printf("   1. INSERT\n");
    printf("   2. EDIT\n");
    printf("   3. DELETE\n");
    printf("   4. SHOW\n");
    printf("   5. EXIT\n\n");
    printf("   CHOICE:");
    i = GetInteger();
    printf("   %d\nPRESS ENTER TO CONTINUE...", i);
    return 0;
}
