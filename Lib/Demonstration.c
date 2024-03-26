#include <stdio.h>
#include "dunkmath.h"

int main() { 
    float a = -22.5;
    float b = 19.5;
    printf("a = %.2f\n", a);
    printf("b = %.2f\n\n", b);
    
    printf("max value of A and B - %.2f\n",dmathfloat_max(a,b));
    printf("min value of A and B - %.2f\n", dmathfloat_min(a,b));
    printf("abs value of A - %.2f\n",dmathfloat_abs(a));
    printf("clamp value of 140 (min = a,max = b) - %.2f\n", dmathfloat_clamp(140,a,b));

    return 0;
}