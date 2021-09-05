#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include "header.h"

float trapezoidal(int n, double a, double b)
{
    if(n==0)
    {
        printf("Number of subdivisions can't be 0\n");
        return 0;
    }
    
    double h,x, temp = 0, result;
    
    h = fabs((b-a)/n);
    for(int i = 1;i<n;i++)
    {
        x = a + i*h;
        temp = temp + (2*f(x));
    }
    result = (h/2)*(f(a) + f(b) + temp);
    return result;
}
