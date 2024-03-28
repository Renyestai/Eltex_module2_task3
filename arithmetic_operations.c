#include <stdio.h>
#include "arithmetic_operations.h"

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}


float multiply(float a, float b)
{
    return a * b;
}


float divide(float a, float b)
{
    if(b == 0)
    {
        printf("Error, you can't divide on 0\n");
        return 0;
    }
    return a / b;
}