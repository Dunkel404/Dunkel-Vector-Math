#include <stdarg.h>
#include "dunkmath.h"

float dmathfloat_abs(float a) { 
    return (a < 0 ) ? -a : a; 
}

float dmathfloat_max(float a, float b) {
    return (a > b) ? a : b;
}

float dmathfloat_min(float a, float b) {
    return (a < b) ? a : b;
}

float dmathfloat_clamp(float x, float a, float b) { 
    return dmathfloat_max(a, dmathfloat_min(b, x));
}